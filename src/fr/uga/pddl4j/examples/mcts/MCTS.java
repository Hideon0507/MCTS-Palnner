package fr.uga.pddl4j.examples.mcts;

import fr.uga.pddl4j.heuristics.state.StateHeuristic;
import fr.uga.pddl4j.parser.DefaultParsedProblem;
import fr.uga.pddl4j.parser.RequireKey;
import fr.uga.pddl4j.plan.Plan;
import fr.uga.pddl4j.plan.SequentialPlan;
import fr.uga.pddl4j.planners.AbstractPlanner;
import fr.uga.pddl4j.planners.Planner;
import fr.uga.pddl4j.planners.PlannerConfiguration;
import fr.uga.pddl4j.planners.ProblemNotSupportedException;
import fr.uga.pddl4j.problem.DefaultProblem;
import fr.uga.pddl4j.problem.Problem;
import fr.uga.pddl4j.problem.State;
import fr.uga.pddl4j.problem.operator.Action;
import fr.uga.pddl4j.problem.operator.ConditionalEffect;

import org.apache.logging.log4j.LogManager;
import org.apache.logging.log4j.Logger;
import picocli.CommandLine;

import java.util.ArrayList;
import java.util.List;
import java.util.Random;

/**
 * The class is an example. It shows how to create a simple MCTS planner able to
 * solve an ADL problem.
 *
 * @author D. Pellier
 * @version 4.0 - 30.11.2021
 */
@CommandLine.Command(name = "MCTS",
    version = "MCTS 1.0",
    description = "Solves a specified planning problem using Monte Carlo Tree Search strategy.",
    sortOptions = false,
    mixinStandardHelpOptions = true,
    headerHeading = "Usage:%n",
    synopsisHeading = "%n",
    descriptionHeading = "%nDescription:%n%n",
    parameterListHeading = "%nParameters:%n",
    optionListHeading = "%nOptions:%n")

public class MCTS extends AbstractPlanner {

     /**
     * The class logger.
     */
    private static final Logger LOGGER = LogManager.getLogger(MCTS.class.getName());

     /**
     * The weight of the heuristic.
     */
    private double heuristicWeight;

    /**
     * The name of the heuristic used by the planner.
     */
    private StateHeuristic.Name heuristic;

    /**
     * Returns the name of the heuristic used by the planner to solve a planning problem.
     *
     * @return the name of the heuristic used by the planner to solve a planning problem.
     */
    public final StateHeuristic.Name getHeuristic() {
        return this.heuristic;
    }

    /**
     * Returns the weight of the heuristic.
     *
     * @return the weight of the heuristic.
     */
    public final double getHeuristicWeight() {
        return this.heuristicWeight;
    }

     /**
     * The HEURISTIC property used for planner configuration.
     */
    public static final String HEURISTIC_SETTING = "HEURISTIC";

    /**
     * The default value of the HEURISTIC property used for planner configuration.
     */
    public static final StateHeuristic.Name DEFAULT_HEURISTIC = StateHeuristic.Name.FAST_FORWARD;

    /**
     * The WEIGHT_HEURISTIC property used for planner configuration.
     */
    public static final String WEIGHT_HEURISTIC_SETTING = "WEIGHT_HEURISTIC";

    /**
     * The default value of the WEIGHT_HEURISTIC property used for planner configuration.
     */
    public static final double DEFAULT_WEIGHT_HEURISTIC = 1.0;


    /**
     * Creates a new MCTS search planner with the default configuration.
     */
    public MCTS() {
        this(MCTS.getDefaultConfiguration());
    }

    /**
     * Creates a new MCTS search planner with a specified configuration.
     *
     * @param configuration the configuration of the planner.
     */
    public MCTS(final PlannerConfiguration configuration) {
        super();
        this.setConfiguration(configuration);
    }


    /**
     * Sets the weight of the heuristic.
     *
     * @param weight the weight of the heuristic. The weight must be greater than 0.
     * @throws IllegalArgumentException if the weight is strictly less than 0.
     */
    @CommandLine.Option(names = {"-w", "--weight"}, defaultValue = "1.0",
        paramLabel = "<weight>", description = "Set the weight of the heuristic (preset 1.0).")
    public void setHeuristicWeight(final double weight) {
        if (weight <= 0) {
            throw new IllegalArgumentException("Weight <= 0");
        }
        this.heuristicWeight = weight;
    }

    /**
     * Set the name of heuristic used by the planner to the solve a planning problem.
     *
     * @param heuristic the name of the heuristic.
     */
    @CommandLine.Option(names = {"-e", "--heuristic"}, defaultValue = "FAST_FORWARD",
        description = "Set the heuristic : AJUSTED_SUM, AJUSTED_SUM2, AJUSTED_SUM2M, COMBO, "
            + "MAX, FAST_FORWARD SET_LEVEL, SUM, SUM_MUTEX (preset: FAST_FORWARD)")
    public void setHeuristic(StateHeuristic.Name heuristic) {
        this.heuristic = heuristic;
    }


    /**
     * Returns the configuration of the planner.
     *
     * @return the configuration of the planner.
     */
    @Override
    public PlannerConfiguration getConfiguration() {
        final PlannerConfiguration config = super.getConfiguration();
        config.setProperty(MCTS.HEURISTIC_SETTING, this.getHeuristic().toString());
        config.setProperty(MCTS.WEIGHT_HEURISTIC_SETTING, Double.toString(this.getHeuristicWeight()));
        return config;
    }

    /**
     * Sets the configuration of the planner. If a planner setting is not defined in
     * the specified configuration, the setting is initialized with its default value.
     *
     * @param configuration the configuration to set.
     */
    @Override
    public void setConfiguration(final PlannerConfiguration configuration) {
        super.setConfiguration(configuration);
        if (configuration.getProperty(MCTS.WEIGHT_HEURISTIC_SETTING) == null) {
            this.setHeuristicWeight(MCTS.DEFAULT_WEIGHT_HEURISTIC);
        } else {
            this.setHeuristicWeight(Double.parseDouble(configuration.getProperty(
                MCTS.WEIGHT_HEURISTIC_SETTING)));
        }
        if (configuration.getProperty(MCTS.HEURISTIC_SETTING) == null) {
            this.setHeuristic(MCTS.DEFAULT_HEURISTIC);
        } else {
            this.setHeuristic(StateHeuristic.Name.valueOf(configuration.getProperty(
                MCTS.HEURISTIC_SETTING)));
        }
    }

    public static PlannerConfiguration getDefaultConfiguration() {
        PlannerConfiguration config = Planner.getDefaultConfiguration();
        config.setProperty(MCTS.HEURISTIC_SETTING, MCTS.DEFAULT_HEURISTIC.toString());
        config.setProperty(MCTS.WEIGHT_HEURISTIC_SETTING,
            Double.toString(MCTS.DEFAULT_WEIGHT_HEURISTIC));
        return config;
    }

     /**
     * Checks the planner configuration and returns if the configuration is valid.
     * A configuration is valid if (1) the domain and the problem files exist and
     * can be read, (2) the timeout is greater than 0, (3) the weight of the
     * heuristic is greater than 0 and (4) the heuristic is a not null.
     *
     * @return <code>true</code> if the configuration is valid <code>false</code> otherwise.
     */
    public boolean hasValidConfiguration() {
        return super.hasValidConfiguration()
            && this.getHeuristicWeight() > 0.0
            && this.getHeuristic() != null;
    }


     /**
     * Instantiates the planning problem from a parsed problem.
     *
     * @param problem the problem to instantiate.
     * @return the instantiated planning problem or null if the problem cannot be instantiated.
     */
    @Override
    public Problem instantiate(DefaultParsedProblem problem) {
        final Problem pb = new DefaultProblem(problem);
        pb.instantiate();
        return pb;
    }

    /**
     * Search a solution plan to a specified domain and problem using A*.
     *
     * @param problem the problem to solve.
     * @return the plan found or null if no plan was found.
     * @throws ProblemNotSupportedException if the problem to solve is not supported by the planner.
     */
    @Override
    public Plan solve(final Problem problem) throws ProblemNotSupportedException {
        LOGGER.info("* Starting MCTS search \n");
        // Search a solution
        final long begin = System.currentTimeMillis();
        final Plan plan = this.mcts(problem);
        final long end = System.currentTimeMillis();
        // If a plan is found update the statistics of the planner
        // and log search information
        if (plan != null) {
            LOGGER.info("* MCTS search succeeded\n");
            this.getStatistics().setTimeToSearch(end - begin);
        } else {
            LOGGER.info("* MCTS search failed\n");
        }
        // Return the plan found or null if the search fails.
        return plan;
    }

    /**
     * The main method of the <code>MCTS</code> planner.
     *
     * @param args the arguments of the command line.
     */
    public static void main(String[] args) {
        try {
            final MCTS planner = new MCTS();
            CommandLine cmd = new CommandLine(planner);
            cmd.execute(args);
        } catch (IllegalArgumentException e) {
            LOGGER.fatal(e.getMessage());
        }
    }

    /**
     * Search a solution plan for a planning problem using an A* search strategy.
     *
     * @param problem the problem to solve.
     * @return a plan solution for the problem or null if there is no solution
     * @throws ProblemNotSupportedException if the problem to solve is not supported by the planner.
     */
    public Plan mcts(Problem problem) throws ProblemNotSupportedException {
        // Check if the problem is supported by the planner
        if (!this.isSupported(problem)) {
            throw new ProblemNotSupportedException("Problem not supported");
        }

        // First we create an instance of the heuristic to use to guide the search
        final StateHeuristic heuristic = StateHeuristic.getInstance(this.getHeuristic(), problem);

        // We get the initial state from the planning problem
        final State init = new State(problem.getInitialState());


        // Initialize pure random walk parameters
        final double alpha = 0.9; 
        final int NUM_WALK = 2000; 
        int LENGTH_WALK = 10; 
        final int EXTENDING_PERIOD = 300; 
        final double EXTENDING_RATE = 1.5;
        double acceptableProgress = 0;
        double hmin = Double.POSITIVE_INFINITY;
        Node smin = null;

        final Random random = new Random(0);

        // Start the Pure Random Walk
        for (int i = 0; i < NUM_WALK; i++) {
            Node current = new Node(init, null, -1, 0, heuristic.estimate(init, problem.getGoal()));
    
            for (int j = 0; j < LENGTH_WALK; j++) {
                List<Action> applicableActions = applicableActions(current, problem);
                if (applicableActions.isEmpty()) {
                    break;
                }

                Action a = applicableActions.get(random.nextInt(applicableActions.size()));

                // We apply the effect of the action
                final List<ConditionalEffect> effects = a.getConditionalEffects();
                State nextState = new State(current.getState()); // Make a copy of the current state
                for (ConditionalEffect ce : effects) {
                    if (nextState.satisfy(ce.getCondition())) {
                        nextState.apply(ce.getEffect());
                    }
                }

                Node next = new Node(nextState, current, problem.getActions().indexOf(a), current.getCost() + 1, heuristic.estimate(nextState, problem.getGoal()));
                current = next;
    
                if (current.satisfy(problem.getGoal())) {
                    return extractPlan(current, problem);
                }
            }
    
            double currentHeuristic = current.getHeuristic();
            if (currentHeuristic < hmin) {
                smin = current;
                hmin = currentHeuristic;
            }

            // Check and extend length walk if needed
            if (i % EXTENDING_PERIOD == 0 && i > 0) {
                LENGTH_WALK *= EXTENDING_RATE;
            }

            // Calculate progress
            // P (n) = max(0, hmin_old − hmin )
            double progress = Math.max(0, hmin - currentHeuristic);
            // AP (n+1) = (1−α)AP(n)+ αP(n)
            acceptableProgress = (1 - alpha) * acceptableProgress + alpha * progress;

            // Check if acceptable progress is made
            if (acceptableProgress > 10) { 
                break;
            }
        }
        
        // Return the best state found or the initial state if no better state was found
        return (smin != null) ? extractPlan(smin, problem) : null;
    }

    private List<Action> applicableActions(Node current, Problem problem) {
        List<Action> applicableActions = new ArrayList<>();
        for (Action action : problem.getActions()) {
            if (action.isApplicable(current)) {
                applicableActions.add(action);
            }
        }
        return applicableActions;
    }



    /**
     * Extracts a search from a specified node.
     *
     * @param node    the node.
     * @param problem the problem.
     * @return the search extracted from the specified node.
     */
    private Plan extractPlan(final Node node, final Problem problem) {
        Node n = node;
        final Plan plan = new SequentialPlan();
        while (n.getAction() != -1) {
            final Action a = problem.getActions().get(n.getAction());
            plan.add(0, a);
            n = n.getParent();
        }
        return plan;
    }

    

    /**
     * Returns if a specified problem is supported by the planner. Just ADL problem can be solved by this planner.
     *
     * @param problem the problem to test.
     * @return <code>true</code> if the problem is supported <code>false</code> otherwise.
     */
    @Override
    public boolean isSupported(Problem problem) {
        return (problem.getRequirements().contains(RequireKey.ACTION_COSTS)
            || problem.getRequirements().contains(RequireKey.CONSTRAINTS)
            || problem.getRequirements().contains(RequireKey.CONTINOUS_EFFECTS)
            || problem.getRequirements().contains(RequireKey.DERIVED_PREDICATES)
            || problem.getRequirements().contains(RequireKey.DURATIVE_ACTIONS)
            || problem.getRequirements().contains(RequireKey.DURATION_INEQUALITIES)
            || problem.getRequirements().contains(RequireKey.FLUENTS)
            || problem.getRequirements().contains(RequireKey.GOAL_UTILITIES)
            || problem.getRequirements().contains(RequireKey.METHOD_CONSTRAINTS)
            || problem.getRequirements().contains(RequireKey.NUMERIC_FLUENTS)
            || problem.getRequirements().contains(RequireKey.OBJECT_FLUENTS)
            || problem.getRequirements().contains(RequireKey.PREFERENCES)
            || problem.getRequirements().contains(RequireKey.TIMED_INITIAL_LITERALS)
            || problem.getRequirements().contains(RequireKey.HIERARCHY))
            ? false : true;
    }
}
