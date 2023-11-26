/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     OPEN_BRAC = 258,
     CLOSE_BRAC = 259,
     MODULES = 260,
     OPEN_SQ = 261,
     CLOSE_SQ = 262,
     DOT = 263,
     CLASSES = 264,
     CLASS = 265,
     DEFINE = 266,
     PDDLDOMAIN = 267,
     REQS = 268,
     EQUALITY = 269,
     STRIPS = 270,
     ADL = 271,
     NEGATIVE_PRECONDITIONS = 272,
     TYPING = 273,
     DISJUNCTIVE_PRECONDS = 274,
     EXT_PRECS = 275,
     UNIV_PRECS = 276,
     QUANT_PRECS = 277,
     COND_EFFS = 278,
     FLUENTS = 279,
     OBJECTFLUENTS = 280,
     NUMERICFLUENTS = 281,
     ACTIONCOSTS = 282,
     TIME = 283,
     DURATIVE_ACTIONS = 284,
     DURATION_INEQUALITIES = 285,
     CONTINUOUS_EFFECTS = 286,
     DERIVED_PREDICATES = 287,
     TIMED_INITIAL_LITERALS = 288,
     PREFERENCES = 289,
     CONSTRAINTS = 290,
     ACTION = 291,
     PROCESS = 292,
     EVENT = 293,
     DURATIVE_ACTION = 294,
     DERIVED = 295,
     CONSTANTS = 296,
     PREDS = 297,
     FUNCTIONS = 298,
     TYPES = 299,
     ARGS = 300,
     PRE = 301,
     CONDITION = 302,
     PREFERENCE = 303,
     START_PRE = 304,
     END_PRE = 305,
     EFFECTS = 306,
     INITIAL_EFFECT = 307,
     FINAL_EFFECT = 308,
     INVARIANT = 309,
     DURATION = 310,
     AT_START = 311,
     AT_END = 312,
     OVER_ALL = 313,
     AND = 314,
     OR = 315,
     EXISTS = 316,
     FORALL = 317,
     IMPLY = 318,
     NOT = 319,
     WHEN = 320,
     WHENEVER = 321,
     EITHER = 322,
     PROBLEM = 323,
     FORDOMAIN = 324,
     INITIALLY = 325,
     OBJECTS = 326,
     GOALS = 327,
     EQ = 328,
     LENGTH = 329,
     SERIAL = 330,
     PARALLEL = 331,
     METRIC = 332,
     MINIMIZE = 333,
     MAXIMIZE = 334,
     HASHT = 335,
     DURATION_VAR = 336,
     TOTAL_TIME = 337,
     INCREASE = 338,
     DECREASE = 339,
     SCALE_UP = 340,
     SCALE_DOWN = 341,
     ASSIGN = 342,
     GREATER = 343,
     GREATEQ = 344,
     LESS = 345,
     LESSEQ = 346,
     Q = 347,
     COLON = 348,
     NUMBER = 349,
     ALWAYS = 350,
     SOMETIME = 351,
     WITHIN = 352,
     ATMOSTONCE = 353,
     SOMETIMEAFTER = 354,
     SOMETIMEBEFORE = 355,
     ALWAYSWITHIN = 356,
     HOLDDURING = 357,
     HOLDAFTER = 358,
     ISVIOLATED = 359,
     AFTER = 360,
     BOGUS = 361,
     CONTROL = 362,
     SUPPLYDEMAND = 363,
     SUPPLYDEMAND_REQ = 364,
     NAMETAG = 365,
     NAME = 366,
     FUNCTION_SYMBOL = 367,
     INTVAL = 368,
     FLOATVAL = 369,
     AT_TIME = 370,
     PLUS = 371,
     HYPHEN = 372,
     DIV = 373,
     MUL = 374,
     UMINUS = 375
   };
#endif
/* Tokens.  */
#define OPEN_BRAC 258
#define CLOSE_BRAC 259
#define MODULES 260
#define OPEN_SQ 261
#define CLOSE_SQ 262
#define DOT 263
#define CLASSES 264
#define CLASS 265
#define DEFINE 266
#define PDDLDOMAIN 267
#define REQS 268
#define EQUALITY 269
#define STRIPS 270
#define ADL 271
#define NEGATIVE_PRECONDITIONS 272
#define TYPING 273
#define DISJUNCTIVE_PRECONDS 274
#define EXT_PRECS 275
#define UNIV_PRECS 276
#define QUANT_PRECS 277
#define COND_EFFS 278
#define FLUENTS 279
#define OBJECTFLUENTS 280
#define NUMERICFLUENTS 281
#define ACTIONCOSTS 282
#define TIME 283
#define DURATIVE_ACTIONS 284
#define DURATION_INEQUALITIES 285
#define CONTINUOUS_EFFECTS 286
#define DERIVED_PREDICATES 287
#define TIMED_INITIAL_LITERALS 288
#define PREFERENCES 289
#define CONSTRAINTS 290
#define ACTION 291
#define PROCESS 292
#define EVENT 293
#define DURATIVE_ACTION 294
#define DERIVED 295
#define CONSTANTS 296
#define PREDS 297
#define FUNCTIONS 298
#define TYPES 299
#define ARGS 300
#define PRE 301
#define CONDITION 302
#define PREFERENCE 303
#define START_PRE 304
#define END_PRE 305
#define EFFECTS 306
#define INITIAL_EFFECT 307
#define FINAL_EFFECT 308
#define INVARIANT 309
#define DURATION 310
#define AT_START 311
#define AT_END 312
#define OVER_ALL 313
#define AND 314
#define OR 315
#define EXISTS 316
#define FORALL 317
#define IMPLY 318
#define NOT 319
#define WHEN 320
#define WHENEVER 321
#define EITHER 322
#define PROBLEM 323
#define FORDOMAIN 324
#define INITIALLY 325
#define OBJECTS 326
#define GOALS 327
#define EQ 328
#define LENGTH 329
#define SERIAL 330
#define PARALLEL 331
#define METRIC 332
#define MINIMIZE 333
#define MAXIMIZE 334
#define HASHT 335
#define DURATION_VAR 336
#define TOTAL_TIME 337
#define INCREASE 338
#define DECREASE 339
#define SCALE_UP 340
#define SCALE_DOWN 341
#define ASSIGN 342
#define GREATER 343
#define GREATEQ 344
#define LESS 345
#define LESSEQ 346
#define Q 347
#define COLON 348
#define NUMBER 349
#define ALWAYS 350
#define SOMETIME 351
#define WITHIN 352
#define ATMOSTONCE 353
#define SOMETIMEAFTER 354
#define SOMETIMEBEFORE 355
#define ALWAYSWITHIN 356
#define HOLDDURING 357
#define HOLDAFTER 358
#define ISVIOLATED 359
#define AFTER 360
#define BOGUS 361
#define CONTROL 362
#define SUPPLYDEMAND 363
#define SUPPLYDEMAND_REQ 364
#define NAMETAG 365
#define NAME 366
#define FUNCTION_SYMBOL 367
#define INTVAL 368
#define FLOATVAL 369
#define AT_TIME 370
#define PLUS 371
#define HYPHEN 372
#define DIV 373
#define MUL 374
#define UMINUS 375




/* Copy the first part of user declarations.  */
#line 10 "pddl+.y"

/*
Error reporting:
Intention is to provide error token on most bracket expressions,
so synchronisation can occur on next CLOSE_BRAC.
Hence error should be generated for innermost expression containing error.
Expressions which cause errors return a NULL values, and parser
always attempts to carry on.
This won't behave so well if CLOSE_BRAC is missing.

Naming conventions:
Generally, the names should be similar to the PDDL2.1 spec.
During development, they have also been based on older PDDL specs,
older PDDL+ and TIM parsers, and this shows in places.

All the names of fields in the semantic value type begin with t_
Corresponding categories in the grammar begin with c_
Corresponding classes have no prefix.

PDDL grammar       yacc grammar      type of corresponding semantic val.

thing+             c_things          thing_list
(thing+)           c_thing_list      thing_list

*/

#include <cstdlib>
#include <cstdio>
#include <fstream>
#include <ctype.h>

// This is now copied locally to avoid relying on installation
// of flex++.

//#include "FlexLexer.h"
//#include <FlexLexer.h>

#include "ptree.h"
#include "parse_error.h"

#define YYDEBUG 1

int yyerror(char *);

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", ((char *)msgid))
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) ((char *) msgid)
# endif
#endif

extern int yylex();

using namespace VAL;



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 72 "pddl+.y"
{
    parse_category* t_parse_category;

    effect_lists* t_effect_lists;
    effect* t_effect;
    simple_effect* t_simple_effect;
    cond_effect*   t_cond_effect;
    forall_effect* t_forall_effect;
    timed_effect* t_timed_effect;
	supplied_effect* t_supplied_effect;

    quantifier t_quantifier;
    metric_spec*  t_metric;
    optimization t_optimization;

    symbol* t_symbol;
    var_symbol*   t_var_symbol;
    pddl_type*    t_type;
    pred_symbol*  t_pred_symbol;
    func_symbol*  t_func_symbol;
    const_symbol* t_const_symbol;
    class_symbol* t_class;

    parameter_symbol_list* t_parameter_symbol_list;
    var_symbol_list* t_var_symbol_list;
    const_symbol_list* t_const_symbol_list;
    pddl_type_list* t_type_list;

    proposition* t_proposition;
    pred_decl* t_pred_decl;
    pred_decl_list* t_pred_decl_list;
    func_decl* t_func_decl;
    func_decl_list* t_func_decl_list;

    goal* t_goal;
    con_goal * t_con_goal;
    goal_list* t_goal_list;

    func_term* t_func_term;
    assignment* t_assignment;
    expression* t_expression;
    num_expression* t_num_expression;
    assign_op t_assign_op;
    comparison_op t_comparison_op;

    structure_def* t_structure_def;
    structure_store* t_structure_store;

    action* t_action_def;
    event* t_event_def;
    process* t_process_def;
    durative_action* t_durative_action_def;
    derivation_rule* t_derivation_rule;

    problem* t_problem;
    length_spec* t_length_spec;

    domain* t_domain;

    pddl_req_flag t_pddl_req_flag;

    plan* t_plan;
    plan_step* t_step;

    int ival;
    double fval;

    char* cp;
    int t_dummy;

    var_symbol_table * vtab;

  class_def * t_class_def;
  //  classes_list* t_classes;

}
/* Line 193 of yacc.c.  */
#line 475 "pddl+.cpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 488 "pddl+.cpp"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  17
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1016

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  121
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  134
/* YYNRULES -- Number of rules.  */
#define YYNRULES  366
/* YYNRULES -- Number of states.  */
#define YYNSTATES  846

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   375

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    15,    20,    23,    26,
      29,    32,    35,    38,    41,    43,    48,    50,    52,    57,
      60,    61,    66,    71,    74,    75,    78,    80,    85,    89,
      91,    93,    95,    97,   100,   101,   107,   111,   114,   115,
     117,   122,   127,   129,   134,   135,   139,   140,   145,   150,
     152,   155,   156,   159,   160,   165,   170,   172,   175,   179,
     180,   182,   184,   186,   188,   190,   195,   197,   199,   202,
     203,   206,   207,   214,   217,   220,   223,   226,   227,   233,
     238,   242,   247,   250,   253,   256,   257,   259,   261,   263,
     265,   267,   272,   274,   276,   278,   280,   283,   286,   289,
     290,   295,   300,   305,   313,   319,   325,   327,   329,   332,
     333,   338,   343,   349,   355,   359,   365,   371,   375,   380,
     388,   394,   396,   399,   400,   405,   407,   409,   411,   413,
     416,   419,   422,   423,   429,   435,   441,   447,   453,   459,
     465,   470,   473,   474,   476,   479,   481,   483,   486,   492,
     498,   504,   510,   515,   522,   532,   542,   544,   546,   548,
     550,   553,   554,   559,   561,   566,   568,   576,   582,   588,
     594,   600,   606,   612,   617,   623,   629,   635,   641,   643,
     646,   648,   654,   660,   662,   664,   666,   671,   676,   678,
     685,   690,   695,   697,   699,   701,   703,   705,   707,   709,
     714,   722,   726,   729,   734,   740,   745,   753,   755,   760,
     766,   771,   779,   782,   784,   789,   795,   797,   800,   802,
     807,   815,   820,   825,   830,   836,   841,   847,   853,   860,
     867,   873,   879,   885,   887,   889,   891,   896,   901,   906,
     912,   920,   928,   934,   937,   939,   942,   944,   946,   948,
     953,   958,   963,   968,   973,   978,   983,   988,   993,   998,
    1003,  1006,  1008,  1010,  1012,  1014,  1016,  1018,  1020,  1026,
    1028,  1034,  1047,  1052,  1065,  1070,  1083,  1088,  1093,  1094,
    1107,  1112,  1116,  1120,  1121,  1123,  1128,  1131,  1132,  1137,
    1142,  1147,  1153,  1158,  1160,  1162,  1164,  1166,  1168,  1170,
    1172,  1174,  1176,  1178,  1180,  1182,  1184,  1186,  1188,  1190,
    1192,  1194,  1196,  1198,  1200,  1202,  1204,  1206,  1208,  1210,
    1215,  1220,  1233,  1239,  1242,  1245,  1248,  1251,  1254,  1257,
    1260,  1261,  1266,  1271,  1273,  1278,  1284,  1289,  1297,  1303,
    1309,  1311,  1313,  1317,  1319,  1321,  1323,  1328,  1332,  1336,
    1340,  1344,  1348,  1350,  1353,  1355,  1358,  1361,  1365,  1369,
    1370,  1374,  1376,  1381,  1383,  1388,  1390
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     122,     0,    -1,   123,    -1,   237,    -1,   250,    -1,     3,
      11,   125,   124,     4,    -1,     3,    11,   125,     1,    -1,
     130,   124,    -1,   236,   124,    -1,   235,   124,    -1,   215,
     124,    -1,   216,   124,    -1,   217,   124,    -1,   128,   124,
      -1,   219,    -1,     3,    12,   111,     4,    -1,   111,    -1,
     111,    -1,     3,     9,   129,     4,    -1,   126,   129,    -1,
      -1,     3,    13,   131,     4,    -1,     3,    13,     1,     4,
      -1,   131,   234,    -1,    -1,   133,   132,    -1,   133,    -1,
       3,   134,   141,     4,    -1,     3,     1,     4,    -1,   111,
      -1,    73,    -1,   111,    -1,   111,    -1,   137,   138,    -1,
      -1,     3,   140,   141,     4,   139,    -1,     3,     1,     4,
      -1,   117,    94,    -1,    -1,   111,    -1,   143,   117,   155,
     141,    -1,   143,   117,   153,   141,    -1,   143,    -1,   143,
     117,    94,   142,    -1,    -1,    92,   149,   143,    -1,    -1,
     146,   117,   155,   144,    -1,   146,   117,   153,   144,    -1,
     146,    -1,   151,   145,    -1,    -1,   152,   146,    -1,    -1,
     156,   117,   155,   147,    -1,   156,   117,   153,   147,    -1,
     156,    -1,   148,   151,    -1,   148,    92,   150,    -1,    -1,
     111,    -1,   111,    -1,   105,    -1,   111,    -1,   111,    -1,
       3,    67,   157,     4,    -1,   111,    -1,   111,    -1,   156,
     154,    -1,    -1,   157,   155,    -1,    -1,   158,     3,    73,
     196,   195,     4,    -1,   158,   189,    -1,   158,   188,    -1,
     158,   161,    -1,   158,   159,    -1,    -1,     3,   108,   111,
     207,   160,    -1,   232,   195,   162,     4,    -1,   195,   162,
       4,    -1,     3,   115,   158,     4,    -1,   164,   162,    -1,
     191,   162,    -1,   190,   162,    -1,    -1,   167,    -1,   187,
      -1,   186,    -1,   191,    -1,   190,    -1,     3,    59,   166,
       4,    -1,   165,    -1,   186,    -1,   187,    -1,   192,    -1,
     166,   186,    -1,   166,   187,    -1,   166,   192,    -1,    -1,
       3,    59,   162,     4,    -1,     3,    59,     1,     4,    -1,
       3,    59,   169,     4,    -1,     3,   210,     3,   141,     4,
     168,     4,    -1,     3,    65,   230,   168,     4,    -1,     3,
      66,   207,   172,     4,    -1,   170,    -1,   192,    -1,   169,
     168,    -1,    -1,     3,    56,   174,     4,    -1,     3,    57,
     174,     4,    -1,     3,    83,   196,   194,     4,    -1,     3,
      84,   196,   194,     4,    -1,     3,     1,     4,    -1,     3,
      83,   196,   194,     4,    -1,     3,    84,   196,   194,     4,
      -1,     3,     1,     4,    -1,     3,    59,   173,     4,    -1,
       3,   210,     3,   141,     4,   172,     4,    -1,     3,    66,
     207,   172,     4,    -1,   171,    -1,   173,   172,    -1,    -1,
       3,    59,   176,     4,    -1,   175,    -1,   186,    -1,   187,
      -1,   177,    -1,   176,   186,    -1,   176,   187,    -1,   176,
     177,    -1,    -1,     3,    87,   196,   180,     4,    -1,     3,
      83,   196,   180,     4,    -1,     3,    84,   196,   180,     4,
      -1,     3,    85,   196,   180,     4,    -1,     3,    86,   196,
     180,     4,    -1,     3,    83,   196,   194,     4,    -1,     3,
      84,   196,   194,     4,    -1,     3,    59,   179,     4,    -1,
     179,   178,    -1,    -1,   181,    -1,    92,    81,    -1,   195,
      -1,   196,    -1,    92,   111,    -1,     3,   116,   180,   180,
       4,    -1,     3,   117,   180,   180,     4,    -1,     3,   119,
     180,   180,     4,    -1,     3,   118,   180,   180,     4,    -1,
       3,    59,   185,     4,    -1,     3,   183,    92,    81,   184,
       4,    -1,     3,    56,     3,   183,    92,    81,   184,     4,
       4,    -1,     3,    57,     3,   183,    92,    81,   184,     4,
       4,    -1,    91,    -1,    89,    -1,    73,    -1,   193,    -1,
     185,   182,    -1,    -1,     3,    64,   212,     4,    -1,   212,
      -1,     3,    64,   214,     4,    -1,   214,    -1,     3,   210,
       3,   141,     4,   163,     4,    -1,     3,    65,   207,   162,
       4,    -1,     3,    87,   196,   193,     4,    -1,     3,    83,
     196,   193,     4,    -1,     3,    84,   196,   193,     4,    -1,
       3,    85,   196,   193,     4,    -1,     3,    86,   196,   193,
       4,    -1,     3,   117,   193,     4,    -1,     3,   116,   193,
     193,     4,    -1,     3,   117,   193,   193,     4,    -1,     3,
     119,   193,   193,     4,    -1,     3,   118,   193,   193,     4,
      -1,   195,    -1,    92,   111,    -1,   196,    -1,     3,   119,
      80,   193,     4,    -1,     3,   119,   193,    80,     4,    -1,
      80,    -1,   113,    -1,   114,    -1,     3,   112,   148,     4,
      -1,     3,   111,   148,     4,    -1,   112,    -1,     3,   127,
       8,   112,   148,     4,    -1,     3,   112,   148,     4,    -1,
       3,   111,   148,     4,    -1,   112,    -1,    88,    -1,    89,
      -1,    90,    -1,    91,    -1,    73,    -1,   203,    -1,     3,
      59,   208,     4,    -1,     3,   210,     3,   141,     4,   199,
       4,    -1,     3,    59,     4,    -1,     3,     4,    -1,     3,
      48,   205,     4,    -1,     3,    48,   111,   205,     4,    -1,
       3,    59,   202,     4,    -1,     3,   210,     3,   141,     4,
     201,     4,    -1,   205,    -1,     3,    48,   205,     4,    -1,
       3,    48,   111,   205,     4,    -1,     3,    59,   202,     4,
      -1,     3,   210,     3,   141,     4,   201,     4,    -1,   202,
     200,    -1,   200,    -1,     3,    48,   207,     4,    -1,     3,
      48,   111,   207,     4,    -1,   207,    -1,   204,   205,    -1,
     205,    -1,     3,    59,   204,     4,    -1,     3,   210,     3,
     141,     4,   205,     4,    -1,     3,    57,   207,     4,    -1,
       3,    95,   207,     4,    -1,     3,    96,   207,     4,    -1,
       3,    97,   195,   207,     4,    -1,     3,    98,   207,     4,
      -1,     3,    99,   207,   207,     4,    -1,     3,   100,   207,
     207,     4,    -1,     3,   101,   195,   207,   207,     4,    -1,
       3,   102,   195,   195,   207,     4,    -1,     3,   103,   195,
     207,     4,    -1,     3,   105,   206,   206,     4,    -1,     3,
     110,   111,   207,     4,    -1,   207,    -1,   111,    -1,   212,
      -1,     3,    64,   207,     4,    -1,     3,    59,   209,     4,
      -1,     3,    60,   209,     4,    -1,     3,    63,   207,   207,
       4,    -1,     3,   210,     3,   141,     4,   207,     4,    -1,
       3,   211,     3,   141,     4,   207,     4,    -1,     3,   198,
     193,   193,     4,    -1,   208,   199,    -1,   199,    -1,   209,
     207,    -1,   207,    -1,    62,    -1,    61,    -1,     3,   135,
     148,     4,    -1,     3,   135,   141,     4,    -1,     3,   136,
     148,     4,    -1,     3,    42,   132,     4,    -1,     3,    42,
       1,     4,    -1,     3,    43,   137,     4,    -1,     3,    43,
       1,     4,    -1,     3,    35,   205,     4,    -1,     3,    35,
       1,     4,    -1,     3,    35,   200,     4,    -1,     3,    35,
       1,     4,    -1,   219,   220,    -1,   220,    -1,   224,    -1,
     225,    -1,   226,    -1,   228,    -1,   223,    -1,   221,    -1,
       3,    10,   127,   216,     4,    -1,    40,    -1,     3,   222,
     213,   207,     4,    -1,     3,    36,   111,   233,     3,   141,
       4,    46,   199,    51,   163,     4,    -1,     3,    36,     1,
       4,    -1,     3,    38,   111,   233,     3,   141,     4,    46,
     207,    51,   163,     4,    -1,     3,    38,     1,     4,    -1,
       3,    37,   111,   233,     3,   141,     4,    46,   207,    51,
     178,     4,    -1,     3,    37,     1,     4,    -1,   107,     3,
     142,     4,    -1,    -1,     3,    39,   111,   233,     3,   141,
       4,   227,    55,   182,   229,     4,    -1,     3,    39,     1,
       4,    -1,   229,    51,   168,    -1,   229,    47,   230,    -1,
      -1,   232,    -1,     3,    59,   231,     4,    -1,   231,   230,
      -1,    -1,     3,    56,   207,     4,    -1,     3,    57,   207,
       4,    -1,     3,    58,   207,     4,    -1,     3,    48,   111,
     232,     4,    -1,     3,    48,   232,     4,    -1,    45,    -1,
      14,    -1,    15,    -1,    18,    -1,    17,    -1,    19,    -1,
      20,    -1,    21,    -1,    23,    -1,    24,    -1,    29,    -1,
      28,    -1,    27,    -1,    25,    -1,    26,    -1,     5,    -1,
      16,    -1,    22,    -1,    30,    -1,    31,    -1,    32,    -1,
      33,    -1,    34,    -1,    35,    -1,   109,    -1,   111,    -1,
       3,    41,   144,     4,    -1,     3,    44,   147,     4,    -1,
       3,    11,     3,    68,   111,     4,     3,    69,   111,     4,
     238,     4,    -1,     3,    11,     3,    68,     1,    -1,   130,
     238,    -1,   239,   238,    -1,   240,   238,    -1,   242,   238,
      -1,   218,   238,    -1,   243,   238,    -1,   244,   238,    -1,
      -1,     3,    71,   144,     4,    -1,     3,    70,   158,     4,
      -1,    72,    -1,     3,   241,   199,     4,    -1,     3,    77,
     245,   246,     4,    -1,     3,    77,     1,     4,    -1,     3,
      74,    75,   113,    76,   113,     4,    -1,     3,    74,    75,
     113,     4,    -1,     3,    74,    76,   113,     4,    -1,    78,
      -1,    79,    -1,     3,   247,     4,    -1,   197,    -1,   195,
      -1,    82,    -1,     3,   104,   111,     4,    -1,     3,    82,
       4,    -1,   116,   246,   248,    -1,   117,   246,   246,    -1,
     119,   246,   249,    -1,   118,   246,   246,    -1,   246,    -1,
     246,   248,    -1,   246,    -1,   246,   249,    -1,   251,   250,
      -1,    28,   114,   250,    -1,    28,   113,   250,    -1,    -1,
     254,    93,   252,    -1,   252,    -1,   253,     6,   254,     7,
      -1,   253,    -1,     3,   111,   145,     4,    -1,   114,    -1,
     113,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   255,   255,   256,   257,   261,   268,   276,   277,   278,
     279,   281,   283,   285,   286,   289,   293,   296,   298,   300,
     301,   305,   312,   319,   320,   325,   327,   332,   334,   342,
     350,   352,   360,   365,   367,   371,   373,   380,   380,   383,
     396,   405,   414,   421,   427,   434,   436,   442,   451,   461,
     466,   467,   471,   472,   480,   487,   496,   502,   504,   506,
     513,   519,   520,   524,   528,   532,   537,   544,   549,   551,
     555,   557,   561,   574,   576,   578,   580,   583,   587,   593,
     595,   601,   607,   608,   610,   612,   621,   622,   623,   624,
     625,   629,   630,   634,   636,   638,   645,   646,   647,   649,
     653,   655,   663,   665,   673,   678,   683,   686,   693,   694,
     699,   701,   703,   707,   711,   717,   721,   725,   731,   733,
     741,   746,   752,   753,   757,   758,   762,   764,   766,   773,
     774,   775,   777,   782,   784,   786,   788,   790,   795,   801,
     807,   812,   813,   817,   818,   820,   821,   822,   826,   828,
     830,   832,   837,   839,   842,   845,   851,   852,   853,   861,
     865,   868,   872,   877,   884,   889,   894,   899,   904,   906,
     908,   910,   912,   917,   919,   921,   923,   925,   927,   928,
     929,   933,   935,   937,   943,   944,   947,   950,   952,   955,
     972,   974,   976,   982,   983,   984,   985,   986,   998,  1005,
    1007,  1011,  1012,  1016,  1018,  1020,  1022,  1026,  1031,  1033,
    1035,  1037,  1044,  1046,  1051,  1053,  1057,  1062,  1064,  1069,
    1071,  1074,  1076,  1078,  1080,  1082,  1084,  1086,  1088,  1090,
    1092,  1094,  1096,  1103,  1105,  1110,  1112,  1116,  1118,  1121,
    1124,  1127,  1130,  1136,  1138,  1143,  1145,  1155,  1162,  1169,
    1174,  1179,  1184,  1186,  1193,  1195,  1202,  1204,  1211,  1213,
    1220,  1221,  1225,  1226,  1227,  1228,  1229,  1230,  1233,  1242,
    1248,  1257,  1268,  1275,  1286,  1292,  1302,  1308,  1310,  1313,
    1331,  1338,  1340,  1342,  1346,  1348,  1353,  1356,  1360,  1362,
    1364,  1366,  1371,  1376,  1381,  1382,  1384,  1385,  1387,  1389,
    1390,  1391,  1392,  1393,  1395,  1398,  1401,  1402,  1403,  1405,
    1414,  1417,  1420,  1422,  1424,  1426,  1428,  1430,  1431,  1437,
    1441,  1446,  1458,  1466,  1467,  1468,  1469,  1470,  1472,  1474,
    1475,  1478,  1481,  1484,  1487,  1491,  1493,  1500,  1503,  1507,
    1514,  1515,  1520,  1521,  1522,  1523,  1524,  1526,  1530,  1531,
    1532,  1533,  1537,  1538,  1543,  1544,  1550,  1553,  1555,  1558,
    1562,  1566,  1572,  1576,  1582,  1590,  1591
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "OPEN_BRAC", "CLOSE_BRAC", "MODULES",
  "OPEN_SQ", "CLOSE_SQ", "DOT", "CLASSES", "CLASS", "DEFINE", "PDDLDOMAIN",
  "REQS", "EQUALITY", "STRIPS", "ADL", "NEGATIVE_PRECONDITIONS", "TYPING",
  "DISJUNCTIVE_PRECONDS", "EXT_PRECS", "UNIV_PRECS", "QUANT_PRECS",
  "COND_EFFS", "FLUENTS", "OBJECTFLUENTS", "NUMERICFLUENTS", "ACTIONCOSTS",
  "TIME", "DURATIVE_ACTIONS", "DURATION_INEQUALITIES",
  "CONTINUOUS_EFFECTS", "DERIVED_PREDICATES", "TIMED_INITIAL_LITERALS",
  "PREFERENCES", "CONSTRAINTS", "ACTION", "PROCESS", "EVENT",
  "DURATIVE_ACTION", "DERIVED", "CONSTANTS", "PREDS", "FUNCTIONS", "TYPES",
  "ARGS", "PRE", "CONDITION", "PREFERENCE", "START_PRE", "END_PRE",
  "EFFECTS", "INITIAL_EFFECT", "FINAL_EFFECT", "INVARIANT", "DURATION",
  "AT_START", "AT_END", "OVER_ALL", "AND", "OR", "EXISTS", "FORALL",
  "IMPLY", "NOT", "WHEN", "WHENEVER", "EITHER", "PROBLEM", "FORDOMAIN",
  "INITIALLY", "OBJECTS", "GOALS", "EQ", "LENGTH", "SERIAL", "PARALLEL",
  "METRIC", "MINIMIZE", "MAXIMIZE", "HASHT", "DURATION_VAR", "TOTAL_TIME",
  "INCREASE", "DECREASE", "SCALE_UP", "SCALE_DOWN", "ASSIGN", "GREATER",
  "GREATEQ", "LESS", "LESSEQ", "Q", "COLON", "NUMBER", "ALWAYS",
  "SOMETIME", "WITHIN", "ATMOSTONCE", "SOMETIMEAFTER", "SOMETIMEBEFORE",
  "ALWAYSWITHIN", "HOLDDURING", "HOLDAFTER", "ISVIOLATED", "AFTER",
  "BOGUS", "CONTROL", "SUPPLYDEMAND", "SUPPLYDEMAND_REQ", "NAMETAG",
  "NAME", "FUNCTION_SYMBOL", "INTVAL", "FLOATVAL", "AT_TIME", "PLUS",
  "HYPHEN", "DIV", "MUL", "UMINUS", "$accept", "mystartsymbol", "c_domain",
  "c_preamble", "c_domain_name", "c_new_class", "c_class", "c_classes",
  "c_class_seq", "c_domain_require_def", "c_reqs", "c_pred_decls",
  "c_pred_decl", "c_new_pred_symbol", "c_pred_symbol",
  "c_init_pred_symbol", "c_func_decls", "c_func_decl", "c_ntype",
  "c_new_func_symbol", "c_typed_var_list", "c_control_params_list",
  "c_var_symbol_list", "c_typed_consts", "c_const_symbols",
  "c_new_const_symbols", "c_typed_types", "c_parameter_symbols",
  "c_declaration_var_symbol", "c_var_symbol", "c_const_symbol",
  "c_new_const_symbol", "c_either_type", "c_new_primitive_type",
  "c_primitive_type", "c_new_primitive_types", "c_primitive_types",
  "c_init_els", "c_supply_demand", "c_demand", "c_timed_initial_literal",
  "c_effects", "c_effect", "c_a_effect", "c_p_effect", "c_p_effects",
  "c_conj_effect", "c_da_effect", "c_da_effects", "c_timed_effect",
  "c_cts_only_timed_effect", "c_da_cts_only_effect",
  "c_da_cts_only_effects", "c_a_effect_da", "c_p_effect_da",
  "c_p_effects_da", "c_f_assign_da", "c_proc_effect", "c_proc_effects",
  "c_f_exp_da", "c_binary_expr_da", "c_duration_constraint", "c_d_op",
  "c_d_value", "c_duration_constraints", "c_neg_simple_effect",
  "c_pos_simple_effect", "c_init_neg_simple_effect",
  "c_init_pos_simple_effect", "c_forall_effect", "c_cond_effect",
  "c_assignment", "c_f_exp", "c_f_exp_t", "c_number", "c_f_head",
  "c_ground_f_head", "c_comparison_op", "c_pre_goal_descriptor",
  "c_pref_con_goal", "c_pref_goal", "c_pref_con_goal_list",
  "c_pref_goal_descriptor", "c_constraint_goal_list", "c_constraint_goal",
  "c_name_or_goal_descriptor", "c_goal_descriptor",
  "c_pre_goal_descriptor_list", "c_goal_list", "c_forall", "c_exists",
  "c_proposition", "c_derived_proposition", "c_init_proposition",
  "c_predicates", "c_functions_def", "c_constraints_def",
  "c_constraints_probdef", "c_structure_defs", "c_structure_def",
  "c_class_def", "c_rule_head", "c_derivation_rule", "c_action_def",
  "c_event_def", "c_process_def", "c_control", "c_durative_action_def",
  "c_da_def_body", "c_da_gd", "c_da_gds", "c_timed_gd", "c_args_head",
  "c_require_key", "c_domain_constants", "c_type_names", "c_problem",
  "c_problem_body", "c_objects", "c_initial_state", "c_goals",
  "c_goal_spec", "c_metric_spec", "c_length_spec", "c_optimization",
  "c_ground_f_exp", "c_binary_ground_f_exp", "c_binary_ground_f_pexps",
  "c_binary_ground_f_mexps", "c_plan", "c_step_t_d", "c_step_d", "c_step",
  "c_float", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   121,   122,   122,   122,   123,   123,   124,   124,   124,
     124,   124,   124,   124,   124,   125,   126,   127,   128,   129,
     129,   130,   130,   131,   131,   132,   132,   133,   133,   134,
     135,   135,   136,   137,   137,   138,   138,   139,   139,   140,
     141,   141,   141,   142,   142,   143,   143,   144,   144,   144,
     145,   145,   146,   146,   147,   147,   147,   148,   148,   148,
     149,   150,   150,   151,   152,   153,   154,   155,   156,   156,
     157,   157,   158,   158,   158,   158,   158,   158,   159,   160,
     160,   161,   162,   162,   162,   162,   163,   163,   163,   163,
     163,   164,   164,   165,   165,   165,   166,   166,   166,   166,
     167,   167,   168,   168,   168,   168,   168,   168,   169,   169,
     170,   170,   170,   170,   170,   171,   171,   171,   172,   172,
     172,   172,   173,   173,   174,   174,   175,   175,   175,   176,
     176,   176,   176,   177,   177,   177,   177,   177,   178,   178,
     178,   179,   179,   180,   180,   180,   180,   180,   181,   181,
     181,   181,   182,   182,   182,   182,   183,   183,   183,   184,
     185,   185,   186,   187,   188,   189,   190,   191,   192,   192,
     192,   192,   192,   193,   193,   193,   193,   193,   193,   193,
     193,   194,   194,   194,   195,   195,   196,   196,   196,   196,
     197,   197,   197,   198,   198,   198,   198,   198,   199,   199,
     199,   199,   199,   200,   200,   200,   200,   200,   201,   201,
     201,   201,   202,   202,   203,   203,   203,   204,   204,   205,
     205,   205,   205,   205,   205,   205,   205,   205,   205,   205,
     205,   205,   205,   206,   206,   207,   207,   207,   207,   207,
     207,   207,   207,   208,   208,   209,   209,   210,   211,   212,
     213,   214,   215,   215,   216,   216,   217,   217,   218,   218,
     219,   219,   220,   220,   220,   220,   220,   220,   221,   222,
     223,   224,   224,   225,   225,   226,   226,   227,   227,   228,
     228,   229,   229,   229,   230,   230,   231,   231,   232,   232,
     232,   232,   232,   233,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   235,
     236,   237,   237,   238,   238,   238,   238,   238,   238,   238,
     238,   239,   240,   241,   242,   243,   243,   244,   244,   244,
     245,   245,   246,   246,   246,   246,   246,   246,   247,   247,
     247,   247,   248,   248,   249,   249,   250,   250,   250,   250,
     251,   251,   252,   252,   253,   254,   254
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     5,     4,     2,     2,     2,
       2,     2,     2,     2,     1,     4,     1,     1,     4,     2,
       0,     4,     4,     2,     0,     2,     1,     4,     3,     1,
       1,     1,     1,     2,     0,     5,     3,     2,     0,     1,
       4,     4,     1,     4,     0,     3,     0,     4,     4,     1,
       2,     0,     2,     0,     4,     4,     1,     2,     3,     0,
       1,     1,     1,     1,     1,     4,     1,     1,     2,     0,
       2,     0,     6,     2,     2,     2,     2,     0,     5,     4,
       3,     4,     2,     2,     2,     0,     1,     1,     1,     1,
       1,     4,     1,     1,     1,     1,     2,     2,     2,     0,
       4,     4,     4,     7,     5,     5,     1,     1,     2,     0,
       4,     4,     5,     5,     3,     5,     5,     3,     4,     7,
       5,     1,     2,     0,     4,     1,     1,     1,     1,     2,
       2,     2,     0,     5,     5,     5,     5,     5,     5,     5,
       4,     2,     0,     1,     2,     1,     1,     2,     5,     5,
       5,     5,     4,     6,     9,     9,     1,     1,     1,     1,
       2,     0,     4,     1,     4,     1,     7,     5,     5,     5,
       5,     5,     5,     4,     5,     5,     5,     5,     1,     2,
       1,     5,     5,     1,     1,     1,     4,     4,     1,     6,
       4,     4,     1,     1,     1,     1,     1,     1,     1,     4,
       7,     3,     2,     4,     5,     4,     7,     1,     4,     5,
       4,     7,     2,     1,     4,     5,     1,     2,     1,     4,
       7,     4,     4,     4,     5,     4,     5,     5,     6,     6,
       5,     5,     5,     1,     1,     1,     4,     4,     4,     5,
       7,     7,     5,     2,     1,     2,     1,     1,     1,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       2,     1,     1,     1,     1,     1,     1,     1,     5,     1,
       5,    12,     4,    12,     4,    12,     4,     4,     0,    12,
       4,     3,     3,     0,     1,     4,     2,     0,     4,     4,
       4,     5,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       4,    12,     5,     2,     2,     2,     2,     2,     2,     2,
       0,     4,     4,     1,     4,     5,     4,     7,     5,     5,
       1,     1,     3,     1,     1,     1,     4,     3,     3,     3,
       3,     3,     1,     2,     1,     2,     2,     3,     3,     0,
       3,     1,     4,     1,     4,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     359,     0,     0,   366,   365,     0,     2,     3,     4,   359,
     361,   363,     0,     0,    51,   359,   359,     1,     0,   356,
       0,     0,     0,     0,    63,     0,    51,   358,   357,     0,
     360,     0,     0,     6,     0,     0,     0,     0,     0,     0,
       0,    14,   261,   267,   266,   262,   263,   264,   265,     0,
       0,   364,    50,   362,     0,   322,     0,    20,     0,     0,
       0,     0,     0,     0,     0,   269,    53,     0,     0,    69,
       0,     5,    13,     7,    10,    11,    12,     0,   260,     9,
       8,    15,     0,    16,    20,     0,    17,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    64,     0,    49,    53,     0,     0,     0,    26,     0,
       0,     0,    56,     0,     0,     0,    19,    18,     0,     0,
      22,    21,   308,   294,   295,   309,   297,   296,   298,   299,
     300,   310,   301,   302,   306,   307,   305,   304,   303,   311,
     312,   313,   314,   315,   316,   317,   318,    23,   257,     0,
       0,   247,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   256,   272,   293,     0,   276,     0,
     274,     0,   280,     0,   319,     0,    52,   253,     0,    29,
      46,   252,    25,   255,     0,   254,    33,   320,    66,     0,
      68,    30,    31,    46,     0,     0,   235,     0,   268,     0,
       0,   218,     0,     0,   184,   185,     0,     0,     0,     0,
       0,     0,     0,   234,     0,   233,     0,    46,    46,    46,
      46,    46,     0,    67,    53,    53,    28,     0,     0,    42,
       0,    39,    46,    69,    69,     0,     0,     0,   248,     0,
       0,   197,   193,   194,   195,   196,    59,     0,     0,     0,
     270,     0,   221,   219,   217,   222,   223,     0,   225,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    71,    48,    47,    60,    46,    27,     0,    36,     0,
      55,    54,   250,   246,     0,     0,     0,     0,     0,     0,
       0,   188,     0,   178,   180,    46,    46,   330,   224,   226,
     227,     0,     0,   230,   231,   232,     0,     0,     0,     0,
     278,     0,    45,    46,    46,    38,   237,   245,   238,     0,
     236,   249,     0,    57,    59,    59,     0,     0,     0,     0,
       0,   179,     0,     0,     0,     0,   330,   330,     0,   330,
     330,   330,   330,   330,   228,   229,     0,     0,     0,     0,
       0,     0,    65,    70,    41,    40,     0,    35,   239,    62,
      61,    58,     0,     0,     0,     0,     0,     0,     0,   242,
       0,     0,     0,    77,    53,   333,     0,     0,     0,   323,
     327,   321,   324,   325,   326,   328,   329,   220,     0,     0,
     198,   216,     0,     0,    44,     0,    37,   187,   186,     0,
     173,     0,     0,     0,    59,     0,     0,     0,     0,     0,
     207,     0,     0,     0,     0,     0,   340,   341,     0,     0,
     202,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     283,   174,   175,   177,   176,     0,   240,   241,   259,     0,
       0,     0,   258,     0,   332,    76,    75,    74,    73,   165,
     331,     0,     0,   336,     0,   345,   192,   344,   343,     0,
     334,     0,     0,   201,   244,   216,     0,    46,     0,     0,
      86,    88,    87,    90,    89,   163,     0,     0,     0,   277,
       0,     0,     0,   161,   158,   157,   156,     0,     0,   189,
       0,     0,   213,     0,   207,    46,     0,     0,     0,    32,
      77,    59,   338,     0,   339,     0,     0,    59,    59,     0,
       0,     0,     0,     0,   335,     0,   214,   199,   243,     0,
       0,     0,     0,     0,   271,   142,     0,     0,   275,   273,
      44,     0,     0,     0,     0,   279,     0,     0,     0,   203,
     205,   212,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   347,     0,     0,     0,     0,     0,     0,     0,   342,
     215,     0,     0,     0,     0,    85,    92,    93,    94,    85,
      85,    95,     0,     0,    85,    46,     0,     0,     0,    43,
       0,     0,   152,   160,     0,     0,   282,   284,     0,   281,
     106,   107,   204,     0,   164,     0,     0,    81,   251,   337,
     346,   191,   190,   352,   348,   349,   351,   354,   350,     0,
       0,   101,    99,     0,     0,     0,     0,     0,   100,    82,
      84,    83,   162,     0,     0,   140,   141,     0,   183,     0,
       0,     0,     0,     0,   159,     0,     0,     0,     0,   287,
       0,     0,     0,   109,     0,     0,     0,     0,     0,     0,
       0,    72,     0,    78,    85,     0,   353,   355,   200,     0,
       0,     0,     0,     0,     0,   167,     0,     0,   138,   139,
       0,     0,   153,     0,     0,     0,     0,     0,     0,   114,
       0,     0,   125,   128,   126,   127,     0,     0,     0,     0,
       0,     0,    46,     0,     0,     0,   206,     0,    85,     0,
      91,    96,    97,    98,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   292,   288,   289,   290,   285,
     286,   132,     0,     0,     0,     0,     0,   110,   111,   102,
     108,     0,     0,   121,     0,     0,     0,     0,     0,     0,
       0,     0,    46,    80,     0,   169,   170,   171,   172,   168,
     166,     0,     0,     0,     0,   291,     0,     0,     0,     0,
       0,     0,   104,     0,   123,     0,     0,     0,     0,   105,
       0,   112,   113,     0,     0,   208,   210,     0,    79,   181,
     182,   154,   155,     0,   124,   131,   129,   130,     0,     0,
       0,   143,   145,   146,     0,     0,     0,     0,   117,     0,
       0,     0,     0,    46,     0,     0,   209,     0,     0,     0,
       0,     0,   144,   147,   134,   135,   136,   137,   133,   118,
     122,     0,     0,     0,     0,   103,     0,     0,     0,     0,
       0,   120,   115,   116,     0,   211,     0,     0,     0,     0,
       0,   148,   149,   151,   150,   119
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,    35,    23,    84,   330,    36,    85,    37,
      89,   107,   108,   180,   246,   501,   110,   186,   357,   232,
     228,   427,   229,   102,    25,   103,   111,   288,   275,   361,
     323,   104,   224,   190,   225,   112,   311,   411,   445,   653,
     446,   564,   469,   565,   566,   659,   470,   589,   687,   590,
     733,   734,   799,   681,   682,   756,   683,   477,   576,   790,
     791,   430,   487,   633,   533,   567,   568,   447,   448,   569,
     570,   571,   634,   629,   293,   294,   458,   247,   389,   492,
     650,   493,   390,   200,   346,   214,   391,   466,   284,   523,
     249,   196,   114,   449,    38,    39,    40,   337,    41,    42,
      43,    70,    44,    45,    46,    47,   351,    48,   488,   586,
     678,   587,   167,   147,    49,    50,     7,   338,   339,   340,
     378,   341,   342,   343,   418,   603,   513,   604,   608,     8,
       9,    10,    11,    12
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -744
static const yytype_int16 yypact[] =
{
      33,    23,    -3,  -744,  -744,    35,  -744,  -744,  -744,    85,
    -744,    49,   -33,    72,   -32,    85,    85,  -744,   -16,  -744,
     226,   154,    13,   266,  -744,   175,   -32,  -744,  -744,   186,
    -744,   115,    32,  -744,   782,   236,   249,   249,   249,   249,
     249,   261,  -744,  -744,  -744,  -744,  -744,  -744,  -744,   249,
     249,  -744,  -744,  -744,   244,  -744,   264,   172,   177,   447,
     295,    67,    75,    86,    98,  -744,   180,   304,   443,  -744,
     292,  -744,  -744,  -744,  -744,  -744,  -744,   474,  -744,  -744,
    -744,  -744,   315,  -744,   172,   321,  -744,   325,   346,   550,
     363,   662,   372,   403,   375,   430,   375,   441,   375,   451,
     375,  -744,   493,   324,   180,   502,   106,   530,   534,   539,
     394,   542,   117,   -57,   536,   479,  -744,  -744,   514,   589,
    -744,  -744,  -744,  -744,  -744,  -744,  -744,  -744,  -744,  -744,
    -744,  -744,  -744,  -744,  -744,  -744,  -744,  -744,  -744,  -744,
    -744,  -744,  -744,  -744,  -744,  -744,  -744,  -744,  -744,   536,
     593,  -744,   536,   536,   318,   536,   536,   536,   318,   318,
     318,    47,   506,   621,  -744,  -744,  -744,   623,  -744,   625,
    -744,   634,  -744,   651,  -744,    50,  -744,  -744,   626,  -744,
     568,  -744,  -744,  -744,   113,  -744,  -744,  -744,  -744,    50,
    -744,  -744,  -744,   568,   579,   658,  -744,   562,  -744,   676,
     487,  -744,   684,   689,  -744,  -744,   536,   695,   536,   536,
     536,   318,   536,  -744,    47,  -744,   536,   568,   568,   568,
     568,   568,   637,  -744,   180,   180,  -744,   598,   711,   600,
     712,  -744,   568,  -744,  -744,   714,   536,   536,  -744,   536,
     536,   216,  -744,  -744,  -744,  -744,  -744,    71,   717,   719,
    -744,   732,  -744,  -744,  -744,  -744,  -744,   733,  -744,   735,
     746,   536,   536,   748,   749,   750,   751,   765,   766,   767,
     777,  -744,  -744,  -744,  -744,   568,  -744,    50,  -744,   778,
    -744,  -744,  -744,  -744,   491,   505,   536,   779,   227,   411,
     612,  -744,    71,  -744,  -744,   568,   568,   781,  -744,  -744,
    -744,   789,   790,  -744,  -744,  -744,   593,   753,   754,   755,
     699,   114,  -744,   568,   568,   679,  -744,  -744,  -744,   803,
    -744,  -744,   331,  -744,   800,  -744,    71,    71,    71,    71,
     801,  -744,   806,   807,   808,   470,   781,   781,   810,   781,
     781,   781,   781,   781,  -744,  -744,   811,   813,   536,   536,
     826,   775,  -744,  -744,  -744,  -744,   737,  -744,  -744,  -744,
    -744,  -744,   231,   234,    71,    24,    71,    71,   726,  -744,
     536,   536,   380,  -744,   180,  -744,   456,   252,   813,  -744,
    -744,  -744,  -744,  -744,  -744,  -744,  -744,  -744,   273,   788,
    -744,  -744,   796,   802,    -8,   837,  -744,  -744,  -744,   850,
    -744,   851,   852,   853,  -744,   854,   855,   856,   630,   857,
    -744,   556,   858,   752,   756,   859,  -744,  -744,    82,   860,
    -744,    70,   583,   863,   864,   865,   864,   866,   757,   233,
    -744,  -744,  -744,  -744,  -744,   237,  -744,  -744,  -744,    77,
     868,   869,  -744,   301,  -744,  -744,  -744,  -744,  -744,  -744,
    -744,   204,   871,  -744,   686,  -744,  -744,  -744,  -744,   872,
    -744,   536,   873,  -744,  -744,  -744,   586,   568,   349,   874,
    -744,  -744,  -744,  -744,  -744,  -744,   335,   875,   876,  -744,
     787,   870,   879,  -744,  -744,  -744,  -744,   791,   223,  -744,
     593,   880,  -744,   595,  -744,   568,   882,     7,   776,  -744,
    -744,  -744,  -744,   773,  -744,   884,   780,  -744,  -744,    82,
      82,    82,    82,   885,  -744,   886,  -744,  -744,  -744,   888,
     500,   890,   536,   891,  -744,  -744,     7,     7,  -744,  -744,
      -8,   190,   190,   599,   814,  -744,   893,   894,   895,  -744,
    -744,  -744,   896,   792,   897,   498,   318,   536,   608,   274,
     898,  -744,   900,   280,   281,    82,    82,    82,    82,  -744,
    -744,   813,   901,   434,   902,   904,  -744,  -744,  -744,   904,
     904,  -744,   -57,   905,   904,   568,   628,    59,    59,  -744,
     816,   818,  -744,  -744,    71,   312,  -744,  -744,   535,  -744,
    -744,  -744,  -744,   908,  -744,   909,    19,  -744,  -744,  -744,
    -744,  -744,  -744,    82,  -744,  -744,  -744,    82,  -744,   910,
     854,  -744,  -744,     7,     7,     7,     7,     7,  -744,  -744,
    -744,  -744,  -744,   911,   912,  -744,  -744,   793,  -744,   913,
     914,   817,   838,   916,  -744,   102,   536,   536,   536,  -744,
     917,   919,   919,  -744,   893,   536,     7,     7,   920,   646,
     921,  -744,   245,  -744,   904,   318,  -744,  -744,  -744,   632,
      71,    71,    71,    71,    71,  -744,   864,    90,  -744,  -744,
      71,    71,  -744,   923,   924,   925,   926,   927,   642,  -744,
     627,   928,  -744,  -744,  -744,  -744,   929,   644,   894,   931,
     159,   159,   568,   105,   868,   932,  -744,   933,   904,   342,
    -744,  -744,  -744,  -744,   934,   935,   936,   937,   938,   939,
      71,   844,   940,   941,   942,  -744,  -744,  -744,  -744,  -744,
    -744,  -744,     7,     7,     7,     7,     7,  -744,  -744,  -744,
    -744,   943,   316,  -744,   944,   716,   945,   946,   947,   593,
     948,   647,   568,  -744,   949,  -744,  -744,  -744,  -744,  -744,
    -744,   950,   951,   952,   953,  -744,   668,   109,   109,   109,
     109,   109,  -744,   954,  -744,   536,     7,     7,   956,  -744,
      90,  -744,  -744,   894,   957,  -744,  -744,   958,  -744,  -744,
    -744,  -744,  -744,   702,  -744,  -744,  -744,  -744,   725,   -22,
     959,  -744,  -744,  -744,   960,   961,   962,   963,  -744,   692,
     931,    59,    59,   568,   202,   964,  -744,   908,   109,   109,
     109,   109,  -744,  -744,  -744,  -744,  -744,  -744,  -744,  -744,
    -744,   965,   966,   967,   968,  -744,   969,   109,   109,   109,
     109,  -744,  -744,  -744,   931,  -744,   970,   971,   972,   973,
     974,  -744,  -744,  -744,  -744,  -744
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -744,  -744,  -744,   513,  -744,  -744,   878,  -744,   843,   437,
    -744,   877,  -744,  -744,   847,  -744,  -744,  -744,  -744,  -744,
    -154,   449,  -264,  -194,   955,   883,   464,  -301,  -744,  -744,
      56,  -744,  -106,  -744,  -176,  -744,  -744,   480,  -744,  -744,
    -744,  -523,  -417,  -744,  -744,  -744,  -744,  -476,  -744,  -744,
    -744,  -743,  -744,   340,  -744,  -744,   228,   407,  -744,  -145,
    -744,   453,   170,    36,  -744,  -412,  -409,  -744,  -744,  -406,
    -405,  -511,  -175,  -546,  -153,  -371,  -744,  -744,  -374,  -364,
     181,   296,  -744,  -744,   -60,   783,  -112,  -744,   758,   -88,
    -744,  -355,  -744,   495,  -744,   906,  -744,  -744,  -744,   975,
    -744,  -744,  -744,  -744,  -744,  -744,  -744,  -744,  -744,  -592,
    -744,  -558,   527,  -744,  -744,  -744,  -744,   509,  -744,  -744,
    -744,  -744,  -744,  -744,  -744,  -389,  -744,   386,   385,   408,
    -744,   977,  -744,   976
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -86
static const yytype_int16 yytable[] =
{
      92,   206,   195,   163,   419,   210,   211,   212,   409,   478,
     545,   312,   471,   234,   471,   472,   191,   472,   473,   474,
     473,   474,   652,   362,   363,    31,   591,   289,   400,   459,
     272,   273,   630,    55,    13,    17,     1,   199,   655,   235,
     202,   203,   619,   207,   208,   209,   620,   621,   464,   215,
     194,   623,   688,   222,   192,    20,   820,   821,   262,   812,
      21,     2,   627,   266,   267,   268,   269,   270,    93,   475,
      26,   475,   292,   194,   289,    22,    95,   674,   279,    24,
      91,    32,    26,   233,   227,   454,   720,    97,    18,   813,
     201,   840,   518,   289,   257,    14,   259,   260,   261,    99,
     263,   314,   215,   435,   265,   652,   248,   178,    91,   -46,
      15,    16,   788,     2,   230,   714,   290,   332,   352,   291,
     555,   556,   557,   558,   283,   283,   546,   286,   287,   541,
     428,   697,   204,   205,    14,   353,   291,   204,   205,   628,
     254,   333,   334,    56,   736,   737,     3,     4,   703,   301,
     302,   364,   365,   366,   367,   577,   578,    18,   213,   354,
     355,   223,   735,   290,   455,   475,   573,   605,   606,   607,
     710,   313,   317,   317,   319,   744,   591,   591,    94,    51,
     412,   461,   290,   291,   204,   205,    96,   609,   490,   399,
     401,   402,   403,    53,   456,   204,   205,    98,     3,     4,
     549,   789,   291,   204,   205,   289,   553,   554,   502,   100,
     475,   730,   731,   673,   475,   475,   739,   179,   607,   475,
     -30,   291,   204,   205,   231,   223,    54,   535,   188,   684,
     684,   321,   685,   685,   189,   397,   392,   393,   398,   628,
      71,   489,   660,   661,   662,   663,   664,   701,    81,   709,
     702,   290,    34,   415,   471,   822,   823,   472,   405,   406,
     473,   474,   591,   484,    77,   457,   428,    33,    82,    34,
     536,   291,   204,   205,   537,   690,   691,   420,   598,   485,
     503,   486,   752,    83,   601,   602,   475,   475,    86,   481,
     482,   101,   483,   635,   290,   113,    90,   805,    91,   475,
     423,   636,   637,   638,   475,   105,   484,   106,   -30,   462,
     465,   475,   410,   519,   291,   204,   205,   763,   115,   322,
     441,   421,   485,   322,   486,   117,   322,   -30,   118,   322,
     416,   417,   422,   237,   238,   151,   239,   240,    24,     3,
       4,   542,    24,   475,   786,    24,   241,   787,    24,   515,
     120,   757,   758,   759,   760,   761,   457,   457,   457,   457,
     635,   242,   243,   244,   245,   496,   322,   148,   636,   637,
     638,   639,   322,   322,   497,   764,   164,   541,   151,   491,
     494,   407,   765,   408,   192,    24,   793,   793,   793,   793,
     793,    24,    24,   595,   525,   801,   802,   184,   185,   766,
     767,   475,   457,   457,   457,   457,   521,   165,   520,   498,
     574,   151,   499,   521,   522,   191,   500,    19,   526,   527,
     166,   624,   191,    27,    28,   613,   614,   615,   616,   617,
     538,   204,   205,   410,   168,   596,   359,   793,   793,   793,
     793,   175,   360,   654,   109,   170,   -34,   -34,    88,   610,
     457,   -24,   -24,   192,   457,   172,   793,   793,   793,   793,
     192,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,   -24,   -24,    59,    58,   704,   705,   706,   707,   708,
      91,   253,   711,   612,   194,   316,   151,   174,   521,   522,
     648,   562,   698,   563,   -85,   372,   177,   191,   194,   318,
      61,    62,    63,    64,    65,   704,   705,   613,   614,   615,
     616,   617,   324,   325,   675,   676,   677,   326,   327,   328,
     329,   413,   414,   689,   181,   751,   640,   106,   738,   194,
     373,   374,   375,   183,   376,   192,   187,   377,   197,    72,
      73,    74,    75,    76,   121,   122,   -24,    68,   -24,   443,
     444,   695,    79,    80,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   388,   463,   777,   388,
     517,   641,   642,   198,   643,   804,    91,   151,   408,   540,
     644,   645,   429,   582,   792,   792,   792,   792,   792,   324,
     325,   443,   597,   794,   795,   796,   797,   216,   646,   647,
     615,   616,   617,   169,   217,   171,   218,   173,   219,   403,
     226,   476,   625,   740,   494,   699,   700,   220,   236,   237,
     238,   151,   239,   240,   768,   585,   719,   588,   729,   824,
     408,   776,   241,   800,   221,   792,   792,   792,   792,   145,
     227,   146,   250,   827,   828,   829,   830,   242,   243,   244,
     245,   783,   784,   251,   792,   792,   792,   792,   439,   774,
     252,   410,   836,   837,   838,   839,   721,   149,   255,   440,
     192,   521,   151,   256,   693,   732,   819,   280,   281,   258,
     191,   580,   581,   149,   271,   694,   712,   713,   151,   274,
     722,   723,   724,   725,   726,   276,   278,   277,   282,   149,
     295,   150,   296,   331,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   336,   161,   297,   298,   192,   299,
     162,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     300,   161,   303,   304,   305,   306,   162,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   521,   161,   505,   307,
     308,   309,   162,   336,   336,   191,   336,   336,   336,   336,
     336,   310,   315,   320,   335,   722,   723,   724,   725,   726,
     506,    57,    58,   344,   345,    59,   356,   507,   508,   347,
     348,   349,   509,   510,   511,   512,   350,   358,   -17,   368,
     369,   370,   371,   192,   381,   387,   388,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,   324,   325,   394,
     395,   396,   326,   327,   328,   770,   324,   325,   404,   424,
     429,   808,   809,   810,   811,   379,   380,   425,   382,   383,
     384,   385,   386,   426,   431,   432,   433,   434,   436,   437,
     438,   442,   450,   453,   460,   451,   467,   468,   476,   452,
     479,   408,   495,   531,   480,   504,   514,   516,   524,   528,
     529,   530,   532,   534,   539,   543,   550,   547,   551,   559,
     560,   552,   561,   572,   575,   584,   585,   588,   670,   592,
     593,   594,   599,   499,   600,   611,   618,   563,   631,   622,
     632,   649,   667,   651,   658,   665,   666,   668,   669,   671,
     672,   679,   680,   692,   752,   696,   652,   116,   715,   716,
     717,   718,   727,   728,   732,   742,    87,   743,   745,   746,
     747,   748,   749,   750,   753,   754,   755,   762,   769,   771,
     772,   773,   775,   778,   779,   780,   781,   782,   798,   803,
     193,   806,   807,   814,   815,   816,   817,   818,   825,   831,
     832,   833,   834,   835,   841,   842,   843,   844,   845,   579,
     548,    52,   686,   626,   785,   182,   583,   176,   826,   656,
     741,   544,   657,   119,     0,   285,    29,   264,    30,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    78
};

static const yytype_int16 yycheck[] =
{
      60,   154,   114,    91,   378,   158,   159,   160,   372,   426,
       3,   275,   424,   189,   426,   424,    73,   426,   424,   424,
     426,   426,     3,   324,   325,    12,   537,     3,     4,   418,
     224,   225,   578,     1,    11,     0,     3,   149,   596,   193,
     152,   153,   565,   155,   156,   157,   569,   570,   422,   161,
       3,   574,   644,     3,   111,     6,   799,   800,   211,    81,
      93,    28,     3,   217,   218,   219,   220,   221,     1,   424,
      14,   426,   247,     3,     3,     3,     1,   635,   232,   111,
       3,    68,    26,   189,    92,     3,   678,     1,     3,   111,
     150,   834,   466,     3,   206,   111,   208,   209,   210,     1,
     212,   277,   214,   404,   216,     3,   194,     1,     3,   117,
     113,   114,     3,    28,     1,   673,    92,   292,     4,   112,
     509,   510,   511,   512,   236,   237,   497,   239,   240,   493,
     394,   654,   113,   114,   111,   311,   112,   113,   114,    80,
     200,   295,   296,   111,   690,   691,   113,   114,   659,   261,
     262,   326,   327,   328,   329,   526,   527,     3,   111,   313,
     314,   111,     3,    92,    82,   520,   521,   556,   557,   558,
      80,   277,   284,   285,   286,   698,   687,   688,   111,     4,
     374,   111,    92,   112,   113,   114,   111,   561,   111,   364,
     365,   366,   367,     7,   112,   113,   114,   111,   113,   114,
     501,    92,   112,   113,   114,     3,   507,   508,     4,   111,
     565,   687,   688,   111,   569,   570,   111,   111,   607,   574,
       4,   112,   113,   114,   111,   111,   111,     4,   111,   641,
     642,     4,   641,   642,   117,     4,   348,   349,     4,    80,
       4,     4,   613,   614,   615,   616,   617,   659,     4,   666,
     659,    92,     3,     1,   666,   801,   802,   666,   370,   371,
     666,   666,   773,    73,     3,   418,   530,     1,     4,     3,
      47,   112,   113,   114,    51,   646,   647,     4,     4,    89,
      76,    91,    80,   111,     4,     4,   641,   642,   111,    56,
      57,   111,    59,    48,    92,     3,     1,   773,     3,   654,
     388,    56,    57,    58,   659,     1,    73,     3,    92,   421,
     422,   666,   372,   467,   112,   113,   114,     1,     3,    92,
     408,    48,    89,    92,    91,     4,    92,   111,     3,    92,
      78,    79,    59,    60,    61,    62,    63,    64,   111,   113,
     114,   495,   111,   698,   756,   111,    73,   756,   111,   461,
       4,   722,   723,   724,   725,   726,   509,   510,   511,   512,
      48,    88,    89,    90,    91,    64,    92,     4,    56,    57,
      58,    59,    92,    92,    73,    59,     4,   741,    62,   439,
     440,     1,    66,     3,   111,   111,   757,   758,   759,   760,
     761,   111,   111,   546,    59,   766,   767,     3,     4,    83,
      84,   756,   555,   556,   557,   558,    64,     4,    59,   108,
     522,    62,   111,    64,    65,    73,   115,     9,    83,    84,
      45,   575,    73,    15,    16,    83,    84,    85,    86,    87,
     490,   113,   114,   493,     4,   547,   105,   808,   809,   810,
     811,   117,   111,   596,     1,     4,     3,     4,     1,   561,
     603,     4,     5,   111,   607,     4,   827,   828,   829,   830,
     111,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    13,    10,   660,   661,   662,   663,   664,
       3,     4,   667,    59,     3,     4,    62,     4,    64,    65,
     588,     1,   655,     3,     4,    35,     4,    73,     3,     4,
      36,    37,    38,    39,    40,   690,   691,    83,    84,    85,
      86,    87,   111,   112,   636,   637,   638,   116,   117,   118,
     119,    75,    76,   645,     4,   710,     1,     3,   692,     3,
      70,    71,    72,     4,    74,   111,     4,    77,    69,    36,
      37,    38,    39,    40,     4,     5,   109,    43,   111,     3,
       4,   649,    49,    50,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,     3,     4,   742,     3,
       4,    56,    57,     4,    59,   770,     3,    62,     3,     4,
      65,    66,     3,     4,   757,   758,   759,   760,   761,   111,
     112,     3,     4,   758,   759,   760,   761,   111,    83,    84,
      85,    86,    87,    96,     3,    98,     3,   100,     3,   804,
       4,     3,     4,   693,   694,     3,     4,     3,    59,    60,
      61,    62,    63,    64,   732,     3,     4,     3,     4,   803,
       3,     4,    73,   765,     3,   808,   809,   810,   811,   109,
      92,   111,     4,   808,   809,   810,   811,    88,    89,    90,
      91,     3,     4,   111,   827,   828,   829,   830,    48,   739,
       4,   741,   827,   828,   829,   830,    59,    57,     4,    59,
     111,    64,    62,     4,    48,     3,     4,   233,   234,     4,
      73,   531,   532,    57,    67,    59,   670,   671,    62,   111,
      83,    84,    85,    86,    87,     4,     4,   117,     4,    57,
       3,    59,     3,   111,    62,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   297,   105,     4,     4,   111,     4,
     110,    95,    96,    97,    98,    99,   100,   101,   102,   103,
       4,   105,     4,     4,     4,     4,   110,    95,    96,    97,
      98,    99,   100,   101,   102,   103,    64,   105,    82,     4,
       4,     4,   110,   336,   337,    73,   339,   340,   341,   342,
     343,     4,     4,     4,     3,    83,    84,    85,    86,    87,
     104,     9,    10,     4,     4,    13,   117,   111,   112,    46,
      46,    46,   116,   117,   118,   119,   107,     4,     8,     8,
       4,     4,     4,   111,     4,     4,     3,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,   111,   112,     3,
      55,    94,   116,   117,   118,   119,   111,   112,   112,    51,
       3,   116,   117,   118,   119,   336,   337,    51,   339,   340,
     341,   342,   343,    51,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,   113,     3,     3,     3,   113,
       4,     3,     3,     3,   117,     4,     4,     4,     4,     4,
       4,    94,     3,    92,     4,     3,   113,   111,     4,     4,
       4,   111,     4,     3,     3,    81,     3,     3,    81,     4,
       4,     4,     4,   111,     4,     4,     4,     3,    92,     4,
      92,     3,   119,     4,     4,     4,     4,     4,     4,    81,
       4,     4,     3,     3,    80,     4,     3,    84,     4,     4,
       4,     4,     4,     4,     3,     3,    58,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     3,
     113,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,   530,
     500,    26,   642,   576,   756,   108,   533,   104,   807,   603,
     694,   496,   607,    87,    -1,   237,    20,   214,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    28,   113,   114,   122,   123,   237,   250,   251,
     252,   253,   254,    11,   111,   113,   114,     0,     3,   250,
       6,    93,     3,   125,   111,   145,   151,   250,   250,   254,
     252,    12,    68,     1,     3,   124,   128,   130,   215,   216,
     217,   219,   220,   221,   223,   224,   225,   226,   228,   235,
     236,     4,   145,     7,   111,     1,   111,     9,    10,    13,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
     222,     4,   124,   124,   124,   124,   124,     3,   220,   124,
     124,     4,     4,   111,   126,   129,   111,   127,     1,   131,
       1,     3,   205,     1,   111,     1,   111,     1,   111,     1,
     111,   111,   144,   146,   152,     1,     3,   132,   133,     1,
     137,   147,   156,     3,   213,     3,   129,     4,     3,   216,
       4,     4,     5,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,   109,   111,   234,     4,    57,
      59,    62,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   105,   110,   210,     4,     4,    45,   233,     4,   233,
       4,   233,     4,   233,     4,   117,   146,     4,     1,   111,
     134,     4,   132,     4,     3,     4,   138,     4,   111,   117,
     154,    73,   111,   135,     3,   207,   212,    69,     4,   207,
     204,   205,   207,   207,   113,   114,   195,   207,   207,   207,
     195,   195,   195,   111,   206,   207,   111,     3,     3,     3,
       3,     3,     3,   111,   153,   155,     4,    92,   141,   143,
       1,   111,   140,   153,   155,   141,    59,    60,    61,    63,
      64,    73,    88,    89,    90,    91,   135,   198,   210,   211,
       4,   111,     4,     4,   205,     4,     4,   207,     4,   207,
     207,   207,   195,   207,   206,   207,   141,   141,   141,   141,
     141,    67,   144,   144,   111,   149,     4,   117,     4,   141,
     147,   147,     4,   207,   209,   209,   207,   207,   148,     3,
      92,   112,   193,   195,   196,     3,     3,     4,     4,     4,
       4,   207,   207,     4,     4,     4,     4,     4,     4,     4,
       4,   157,   143,   153,   155,     4,     4,   207,     4,   207,
       4,     4,    92,   151,   111,   112,   116,   117,   118,   119,
     127,   111,   193,   141,   141,     3,   130,   218,   238,   239,
     240,   242,   243,   244,     4,     4,   205,    46,    46,    46,
     107,   227,     4,   155,   141,   141,   117,   139,     4,   105,
     111,   150,   148,   148,   193,   193,   193,   193,     8,     4,
       4,     4,    35,    70,    71,    72,    74,    77,   241,   238,
     238,     4,   238,   238,   238,   238,   238,     4,     3,   199,
     203,   207,   207,   207,     3,    55,    94,     4,     4,   193,
       4,   193,   193,   193,   112,   207,   207,     1,     3,   200,
     205,   158,   144,    75,    76,     1,    78,    79,   245,   199,
       4,    48,    59,   210,    51,    51,    51,   142,   143,     3,
     182,     4,     4,     4,     4,   148,     4,     4,     4,    48,
      59,   210,     4,     3,     4,   159,   161,   188,   189,   214,
       4,   113,   113,     4,     3,    82,   112,   195,   197,   246,
       4,   111,   207,     4,   199,   207,   208,     3,     3,   163,
     167,   186,   187,   190,   191,   212,     3,   178,   163,     4,
     117,    56,    57,    59,    73,    89,    91,   183,   229,     4,
     111,   205,   200,   202,   205,     3,    64,    73,   108,   111,
     115,   136,     4,    76,     4,    82,   104,   111,   112,   116,
     117,   118,   119,   247,     4,   207,     4,     4,   199,   141,
      59,    64,    65,   210,     4,    59,    83,    84,     4,     4,
      94,     3,     3,   185,    92,     4,    47,    51,   205,     4,
       4,   200,   141,     3,   214,     3,   196,   111,   158,   148,
     113,     4,   111,   148,   148,   246,   246,   246,   246,     4,
       4,     4,     1,     3,   162,   164,   165,   186,   187,   190,
     191,   192,     3,   212,   207,     3,   179,   196,   196,   142,
     183,   183,     4,   182,    81,     3,   230,   232,     3,   168,
     170,   192,     4,     4,     4,   195,   207,     4,     4,     4,
       4,     4,     4,   246,   248,   246,   246,   246,   249,   199,
     207,     4,    59,    83,    84,    85,    86,    87,     4,   162,
     162,   162,     4,   162,   141,     4,   178,     3,    80,   194,
     194,    92,    92,   184,   193,    48,    56,    57,    58,    59,
       1,    56,    57,    59,    65,    66,    83,    84,   210,     3,
     201,     4,     3,   160,   195,   232,   248,   249,     4,   166,
     196,   196,   196,   196,   196,     4,     4,   119,     4,     4,
      81,    81,     4,   111,   232,   207,   207,   207,   231,     4,
       3,   174,   175,   177,   186,   187,   174,   169,   230,   207,
     196,   196,     3,    48,    59,   210,     4,   162,   195,     3,
       4,   186,   187,   192,   193,   193,   193,   193,   193,   163,
      80,   193,   184,   184,   232,     4,     4,     4,     4,     4,
     230,    59,    83,    84,    85,    86,    87,     4,     4,     4,
     168,   168,     3,   171,   172,     3,   194,   194,   141,   111,
     205,   202,     3,     4,   162,     4,     4,     4,     4,     4,
       4,   193,    80,     4,     4,     4,   176,   196,   196,   196,
     196,   196,     4,     1,    59,    66,    83,    84,   210,     4,
     119,     4,     4,     4,   205,     4,     4,   141,     4,     4,
       4,     4,     4,     3,     4,   177,   186,   187,     3,    92,
     180,   181,   195,   196,   180,   180,   180,   180,     4,   173,
     207,   196,   196,     3,   193,   168,     4,     4,   116,   117,
     118,   119,    81,   111,     4,     4,     4,     4,     4,     4,
     172,   172,   194,   194,   141,     4,   201,   180,   180,   180,
     180,     4,     4,     4,     4,     4,   180,   180,   180,   180,
     172,     4,     4,     4,     4,     4
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 255 "pddl+.y"
    {top_thing= (yyvsp[(1) - (1)].t_domain); current_analysis->the_domain= (yyvsp[(1) - (1)].t_domain);;}
    break;

  case 3:
#line 256 "pddl+.y"
    {top_thing= (yyvsp[(1) - (1)].t_problem); current_analysis->the_problem= (yyvsp[(1) - (1)].t_problem);;}
    break;

  case 4:
#line 257 "pddl+.y"
    {top_thing = (yyvsp[(1) - (1)].t_plan);;}
    break;

  case 5:
#line 263 "pddl+.y"
    {(yyval.t_domain)= (yyvsp[(4) - (5)].t_domain); (yyval.t_domain)->name= (yyvsp[(3) - (5)].cp);delete [] (yyvsp[(3) - (5)].cp);
	if (types_used && !types_defined) {
		yyerrok; log_error(E_FATAL,"Syntax error in domain - no :types section, but types used in definitions.");
	}
	;}
    break;

  case 6:
#line 270 "pddl+.y"
    {yyerrok; (yyval.t_domain)=static_cast<domain*>(NULL);
       	log_error(E_FATAL,"Syntax error in domain"); ;}
    break;

  case 7:
#line 276 "pddl+.y"
    {(yyval.t_domain)= (yyvsp[(2) - (2)].t_domain); (yyval.t_domain)->req= (yyvsp[(1) - (2)].t_pddl_req_flag);;}
    break;

  case 8:
#line 277 "pddl+.y"
    {types_defined = true; (yyval.t_domain)= (yyvsp[(2) - (2)].t_domain); (yyval.t_domain)->types= (yyvsp[(1) - (2)].t_type_list);;}
    break;

  case 9:
#line 278 "pddl+.y"
    {(yyval.t_domain)= (yyvsp[(2) - (2)].t_domain); (yyval.t_domain)->constants= (yyvsp[(1) - (2)].t_const_symbol_list);;}
    break;

  case 10:
#line 279 "pddl+.y"
    {(yyval.t_domain)= (yyvsp[(2) - (2)].t_domain);
                                       (yyval.t_domain)->predicates= (yyvsp[(1) - (2)].t_pred_decl_list); ;}
    break;

  case 11:
#line 281 "pddl+.y"
    {(yyval.t_domain)= (yyvsp[(2) - (2)].t_domain);
                                       (yyval.t_domain)->functions= (yyvsp[(1) - (2)].t_func_decl_list); ;}
    break;

  case 12:
#line 283 "pddl+.y"
    {(yyval.t_domain)= (yyvsp[(2) - (2)].t_domain);
   				       (yyval.t_domain)->constraints = (yyvsp[(1) - (2)].t_con_goal);;}
    break;

  case 13:
#line 285 "pddl+.y"
    {(yyval.t_domain) = (yyvsp[(2) - (2)].t_domain);;}
    break;

  case 14:
#line 286 "pddl+.y"
    {(yyval.t_domain)= new domain((yyvsp[(1) - (1)].t_structure_store)); ;}
    break;

  case 15:
#line 289 "pddl+.y"
    {(yyval.cp)=(yyvsp[(3) - (4)].cp);;}
    break;

  case 16:
#line 293 "pddl+.y"
    { (yyval.t_class)=current_analysis->classes_tab.new_symbol_put((yyvsp[(1) - (1)].cp));
       delete [] (yyvsp[(1) - (1)].cp); ;}
    break;

  case 17:
#line 296 "pddl+.y"
    { (yyval.t_class) = current_analysis->classes_tab.symbol_get((yyvsp[(1) - (1)].cp)); delete [] (yyvsp[(1) - (1)].cp);;}
    break;

  case 18:
#line 298 "pddl+.y"
    {(yyval.t_dummy) = 0;;}
    break;

  case 19:
#line 300 "pddl+.y"
    {(yyval.t_dummy) = 0;;}
    break;

  case 20:
#line 301 "pddl+.y"
    {(yyval.t_dummy) = 0;;}
    break;

  case 21:
#line 306 "pddl+.y"
    {
	// Stash in analysis object --- we need to refer to it during parse
	//   but domain object is not created yet,
	current_analysis->req |= (yyvsp[(3) - (4)].t_pddl_req_flag);
	(yyval.t_pddl_req_flag)=(yyvsp[(3) - (4)].t_pddl_req_flag);
    ;}
    break;

  case 22:
#line 313 "pddl+.y"
    {yyerrok;
       log_error(E_FATAL,"Syntax error in requirements declaration.");
       (yyval.t_pddl_req_flag)= 0; ;}
    break;

  case 23:
#line 319 "pddl+.y"
    { (yyval.t_pddl_req_flag)= (yyvsp[(1) - (2)].t_pddl_req_flag) | (yyvsp[(2) - (2)].t_pddl_req_flag); ;}
    break;

  case 24:
#line 320 "pddl+.y"
    { (yyval.t_pddl_req_flag)= 0; ;}
    break;

  case 25:
#line 326 "pddl+.y"
    {(yyval.t_pred_decl_list)=(yyvsp[(2) - (2)].t_pred_decl_list); (yyval.t_pred_decl_list)->push_front((yyvsp[(1) - (2)].t_pred_decl));;}
    break;

  case 26:
#line 328 "pddl+.y"
    {  (yyval.t_pred_decl_list)=new pred_decl_list;
           (yyval.t_pred_decl_list)->push_front((yyvsp[(1) - (1)].t_pred_decl)); ;}
    break;

  case 27:
#line 333 "pddl+.y"
    {(yyval.t_pred_decl)= new pred_decl((yyvsp[(2) - (4)].t_pred_symbol),(yyvsp[(3) - (4)].t_var_symbol_list),current_analysis->var_tab_stack.pop());;}
    break;

  case 28:
#line 335 "pddl+.y"
    {yyerrok;
        // hope someone makes this error someday
        log_error(E_FATAL,"Syntax error in predicate declaration.");
	(yyval.t_pred_decl)= static_cast<pred_decl*>(NULL); ;}
    break;

  case 29:
#line 343 "pddl+.y"
    { (yyval.t_pred_symbol)=current_analysis->pred_tab.new_symbol_put((yyvsp[(1) - (1)].cp));
           current_analysis->var_tab_stack.push(
           				current_analysis->buildPredTab());
           delete [] (yyvsp[(1) - (1)].cp); ;}
    break;

  case 30:
#line 350 "pddl+.y"
    { (yyval.t_pred_symbol)=current_analysis->pred_tab.symbol_ref("=");
	      requires(E_EQUALITY); ;}
    break;

  case 31:
#line 352 "pddl+.y"
    { (yyval.t_pred_symbol)=current_analysis->pred_tab.symbol_get((yyvsp[(1) - (1)].cp)); delete [] (yyvsp[(1) - (1)].cp); ;}
    break;

  case 32:
#line 360 "pddl+.y"
    { (yyval.t_pred_symbol)=current_analysis->pred_tab.symbol_get((yyvsp[(1) - (1)].cp)); delete [] (yyvsp[(1) - (1)].cp);;}
    break;

  case 33:
#line 366 "pddl+.y"
    {(yyval.t_func_decl_list)=(yyvsp[(1) - (2)].t_func_decl_list); (yyval.t_func_decl_list)->push_back((yyvsp[(2) - (2)].t_func_decl));;}
    break;

  case 34:
#line 367 "pddl+.y"
    { (yyval.t_func_decl_list)=new func_decl_list; ;}
    break;

  case 35:
#line 372 "pddl+.y"
    {(yyval.t_func_decl)= new func_decl((yyvsp[(2) - (5)].t_func_symbol),(yyvsp[(3) - (5)].t_var_symbol_list),current_analysis->var_tab_stack.pop());;}
    break;

  case 36:
#line 374 "pddl+.y"
    {yyerrok;
	 log_error(E_FATAL,"Syntax error in functor declaration.");
	 (yyval.t_func_decl)= NULL; ;}
    break;

  case 37:
#line 380 "pddl+.y"
    {(yyval.t_dummy) = (int) NULL;;}
    break;

  case 38:
#line 380 "pddl+.y"
    {(yyval.t_dummy)= (int) NULL;;}
    break;

  case 39:
#line 384 "pddl+.y"
    { (yyval.t_func_symbol)=current_analysis->func_tab.new_symbol_put((yyvsp[(1) - (1)].cp));
           current_analysis->var_tab_stack.push(
           		current_analysis->buildFuncTab());
           delete [] (yyvsp[(1) - (1)].cp); ;}
    break;

  case 40:
#line 397 "pddl+.y"
    {
      (yyval.t_var_symbol_list)= (yyvsp[(1) - (4)].t_var_symbol_list);
      (yyval.t_var_symbol_list)->set_types((yyvsp[(3) - (4)].t_type));           /* Set types for variables */
      (yyval.t_var_symbol_list)->splice((yyval.t_var_symbol_list)->end(),*(yyvsp[(4) - (4)].t_var_symbol_list));   /* Join lists */
      delete (yyvsp[(4) - (4)].t_var_symbol_list);                   /* Delete (now empty) list */
      requires(E_TYPING);
      types_used = true;
   ;}
    break;

  case 41:
#line 406 "pddl+.y"
    {
      (yyval.t_var_symbol_list)= (yyvsp[(1) - (4)].t_var_symbol_list);
      (yyval.t_var_symbol_list)->set_either_types((yyvsp[(3) - (4)].t_type_list));    /* Set types for variables */
      (yyval.t_var_symbol_list)->splice((yyval.t_var_symbol_list)->end(),*(yyvsp[(4) - (4)].t_var_symbol_list));   /* Join lists */
      delete (yyvsp[(4) - (4)].t_var_symbol_list);                   /* Delete (now empty) list */
      requires(E_TYPING);
      types_used = true;
   ;}
    break;

  case 42:
#line 415 "pddl+.y"
    {
       (yyval.t_var_symbol_list)= (yyvsp[(1) - (1)].t_var_symbol_list);
   ;}
    break;

  case 43:
#line 422 "pddl+.y"
    {
      (yyval.t_var_symbol_list)= (yyvsp[(1) - (4)].t_var_symbol_list);
      (yyval.t_var_symbol_list)->set_types(0);           /* Set types for variables */
      (yyval.t_var_symbol_list)->splice((yyval.t_var_symbol_list)->end(),*(yyvsp[(4) - (4)].t_var_symbol_list));   /* Join lists */
      delete (yyvsp[(4) - (4)].t_var_symbol_list);                   /* Delete (now empty) list */
   ;}
    break;

  case 44:
#line 427 "pddl+.y"
    {(yyval.t_var_symbol_list) = new var_symbol_list;;}
    break;

  case 45:
#line 435 "pddl+.y"
    {(yyval.t_var_symbol_list)=(yyvsp[(3) - (3)].t_var_symbol_list); (yyvsp[(3) - (3)].t_var_symbol_list)->push_front((yyvsp[(2) - (3)].t_var_symbol)); ;}
    break;

  case 46:
#line 436 "pddl+.y"
    {(yyval.t_var_symbol_list)= new var_symbol_list; ;}
    break;

  case 47:
#line 443 "pddl+.y"
    {
      (yyval.t_const_symbol_list)= (yyvsp[(1) - (4)].t_const_symbol_list);
      (yyvsp[(1) - (4)].t_const_symbol_list)->set_types((yyvsp[(3) - (4)].t_type));           /* Set types for constants */
      (yyvsp[(1) - (4)].t_const_symbol_list)->splice((yyvsp[(1) - (4)].t_const_symbol_list)->end(),*(yyvsp[(4) - (4)].t_const_symbol_list)); /* Join lists */
      delete (yyvsp[(4) - (4)].t_const_symbol_list);                   /* Delete (now empty) list */
      requires(E_TYPING);
      types_used = true;
   ;}
    break;

  case 48:
#line 452 "pddl+.y"
    {
      (yyval.t_const_symbol_list)= (yyvsp[(1) - (4)].t_const_symbol_list);
      (yyvsp[(1) - (4)].t_const_symbol_list)->set_either_types((yyvsp[(3) - (4)].t_type_list));
      (yyvsp[(1) - (4)].t_const_symbol_list)->splice((yyvsp[(1) - (4)].t_const_symbol_list)->end(),*(yyvsp[(4) - (4)].t_const_symbol_list));
      delete (yyvsp[(4) - (4)].t_const_symbol_list);
      requires(E_TYPING);
      types_used = true;
   ;}
    break;

  case 49:
#line 461 "pddl+.y"
    {(yyval.t_const_symbol_list)= (yyvsp[(1) - (1)].t_const_symbol_list);;}
    break;

  case 50:
#line 466 "pddl+.y"
    {(yyval.t_const_symbol_list)=(yyvsp[(2) - (2)].t_const_symbol_list); (yyvsp[(2) - (2)].t_const_symbol_list)->push_front((yyvsp[(1) - (2)].t_const_symbol));;}
    break;

  case 51:
#line 467 "pddl+.y"
    {(yyval.t_const_symbol_list)=new const_symbol_list;;}
    break;

  case 52:
#line 471 "pddl+.y"
    {(yyval.t_const_symbol_list)=(yyvsp[(2) - (2)].t_const_symbol_list); (yyvsp[(2) - (2)].t_const_symbol_list)->push_front((yyvsp[(1) - (2)].t_const_symbol));;}
    break;

  case 53:
#line 472 "pddl+.y"
    {(yyval.t_const_symbol_list)=new const_symbol_list;;}
    break;

  case 54:
#line 481 "pddl+.y"
    {
       (yyval.t_type_list)= (yyvsp[(1) - (4)].t_type_list);
       (yyval.t_type_list)->set_types((yyvsp[(3) - (4)].t_type));           /* Set types for constants */
       (yyval.t_type_list)->splice((yyval.t_type_list)->end(),*(yyvsp[(4) - (4)].t_type_list)); /* Join lists */
       delete (yyvsp[(4) - (4)].t_type_list);                   /* Delete (now empty) list */
   ;}
    break;

  case 55:
#line 488 "pddl+.y"
    {
   // This parse needs to be excluded, we think (DPL&MF: 6/9/01)
       (yyval.t_type_list)= (yyvsp[(1) - (4)].t_type_list);
       (yyval.t_type_list)->set_either_types((yyvsp[(3) - (4)].t_type_list));
       (yyval.t_type_list)->splice((yyvsp[(1) - (4)].t_type_list)->end(),*(yyvsp[(4) - (4)].t_type_list));
       delete (yyvsp[(4) - (4)].t_type_list);
   ;}
    break;

  case 56:
#line 497 "pddl+.y"
    { (yyval.t_type_list)= (yyvsp[(1) - (1)].t_type_list); ;}
    break;

  case 57:
#line 503 "pddl+.y"
    {(yyval.t_parameter_symbol_list)=(yyvsp[(1) - (2)].t_parameter_symbol_list); (yyval.t_parameter_symbol_list)->push_back((yyvsp[(2) - (2)].t_const_symbol)); ;}
    break;

  case 58:
#line 505 "pddl+.y"
    {(yyval.t_parameter_symbol_list)=(yyvsp[(1) - (3)].t_parameter_symbol_list); (yyval.t_parameter_symbol_list)->push_back((yyvsp[(3) - (3)].t_var_symbol)); ;}
    break;

  case 59:
#line 506 "pddl+.y"
    {(yyval.t_parameter_symbol_list)= new parameter_symbol_list;;}
    break;

  case 60:
#line 513 "pddl+.y"
    { (yyval.t_var_symbol)= current_analysis->var_tab_stack.top()->symbol_put((yyvsp[(1) - (1)].cp)); delete [] (yyvsp[(1) - (1)].cp); ;}
    break;

  case 61:
#line 519 "pddl+.y"
    { (yyval.t_var_symbol)= current_analysis->var_tab_stack.symbol_get((yyvsp[(1) - (1)].cp)); delete [] (yyvsp[(1) - (1)].cp); ;}
    break;

  case 62:
#line 520 "pddl+.y"
    { (yyval.t_var_symbol) = current_analysis->var_tab_stack.symbol_get("after");;}
    break;

  case 63:
#line 524 "pddl+.y"
    { (yyval.t_const_symbol)= current_analysis->const_tab.symbol_get((yyvsp[(1) - (1)].cp)); delete [] (yyvsp[(1) - (1)].cp); ;}
    break;

  case 64:
#line 528 "pddl+.y"
    { (yyval.t_const_symbol)= current_analysis->const_tab.new_symbol_put((yyvsp[(1) - (1)].cp)); delete [] (yyvsp[(1) - (1)].cp);;}
    break;

  case 65:
#line 533 "pddl+.y"
    { (yyval.t_type_list)= (yyvsp[(3) - (4)].t_type_list); ;}
    break;

  case 66:
#line 538 "pddl+.y"
    { (yyval.t_type)= current_analysis->pddl_type_tab.symbol_ref((yyvsp[(1) - (1)].cp)); delete [] (yyvsp[(1) - (1)].cp);;}
    break;

  case 67:
#line 545 "pddl+.y"
    { (yyval.t_type)= current_analysis->pddl_type_tab.symbol_ref((yyvsp[(1) - (1)].cp)); delete [] (yyvsp[(1) - (1)].cp);;}
    break;

  case 68:
#line 550 "pddl+.y"
    {(yyval.t_type_list)= (yyvsp[(1) - (2)].t_type_list); (yyval.t_type_list)->push_back((yyvsp[(2) - (2)].t_type));;}
    break;

  case 69:
#line 551 "pddl+.y"
    {(yyval.t_type_list)= new pddl_type_list;;}
    break;

  case 70:
#line 556 "pddl+.y"
    {(yyval.t_type_list)= (yyvsp[(1) - (2)].t_type_list); (yyval.t_type_list)->push_back((yyvsp[(2) - (2)].t_type));;}
    break;

  case 71:
#line 557 "pddl+.y"
    {(yyval.t_type_list)= new pddl_type_list;;}
    break;

  case 72:
#line 562 "pddl+.y"
    { (yyval.t_effect_lists)=(yyvsp[(1) - (6)].t_effect_lists);
	  (yyval.t_effect_lists)->assign_effects.push_back(new assignment((yyvsp[(4) - (6)].t_func_term),E_ASSIGN,(yyvsp[(5) - (6)].t_num_expression)));
          if((yyvsp[(4) - (6)].t_func_term)->getFunction()->getName()=="total-cost")
          {
          	requires(E_ACTIONCOSTS);
          	// Should also check that $5 is 0...
		  }
          else
          {
          	requires(E_NFLUENTS);
          }
	;}
    break;

  case 73:
#line 575 "pddl+.y"
    { (yyval.t_effect_lists)=(yyvsp[(1) - (2)].t_effect_lists); (yyval.t_effect_lists)->add_effects.push_back((yyvsp[(2) - (2)].t_simple_effect)); ;}
    break;

  case 74:
#line 577 "pddl+.y"
    { (yyval.t_effect_lists)=(yyvsp[(1) - (2)].t_effect_lists); (yyval.t_effect_lists)->del_effects.push_back((yyvsp[(2) - (2)].t_simple_effect)); ;}
    break;

  case 75:
#line 579 "pddl+.y"
    { (yyval.t_effect_lists)=(yyvsp[(1) - (2)].t_effect_lists); (yyval.t_effect_lists)->timed_effects.push_back((yyvsp[(2) - (2)].t_timed_effect)); ;}
    break;

  case 76:
#line 581 "pddl+.y"
    {(yyval.t_effect_lists) = (yyvsp[(1) - (2)].t_effect_lists); (yyval.t_effect_lists)->supplied_effects.push_back((yyvsp[(2) - (2)].t_supplied_effect)); ;}
    break;

  case 77:
#line 583 "pddl+.y"
    { (yyval.t_effect_lists)= new effect_lists;;}
    break;

  case 78:
#line 588 "pddl+.y"
    {(yyval.t_supplied_effect) = (yyvsp[(5) - (5)].t_supplied_effect); (yyvsp[(5) - (5)].t_supplied_effect)->sup = (yyvsp[(4) - (5)].t_goal); (yyvsp[(5) - (5)].t_supplied_effect)->name = current_analysis->op_tab.symbol_put((yyvsp[(3) - (5)].cp));
	delete [] (yyvsp[(3) - (5)].cp); requires(E_SUPPLYDEMAND);;}
    break;

  case 79:
#line 594 "pddl+.y"
    {(yyval.t_supplied_effect) = new supplied_effect(0,(yyvsp[(1) - (4)].t_goal),(yyvsp[(2) - (4)].t_num_expression)->double_value(),(yyvsp[(3) - (4)].t_effect_lists)); delete (yyvsp[(2) - (4)].t_num_expression);;}
    break;

  case 80:
#line 596 "pddl+.y"
    {(yyval.t_supplied_effect) = new supplied_effect(0,0,(yyvsp[(1) - (3)].t_num_expression)->double_value(),(yyvsp[(2) - (3)].t_effect_lists)); delete (yyvsp[(1) - (3)].t_num_expression);;}
    break;

  case 81:
#line 602 "pddl+.y"
    { requires(E_TIMED_INITIAL_LITERALS);
   		(yyval.t_timed_effect)=new timed_initial_literal((yyvsp[(3) - (4)].t_effect_lists),(yyvsp[(2) - (4)].fval));;}
    break;

  case 82:
#line 607 "pddl+.y"
    {(yyval.t_effect_lists)=(yyvsp[(2) - (2)].t_effect_lists); (yyval.t_effect_lists)->append_effects((yyvsp[(1) - (2)].t_effect_lists)); delete (yyvsp[(1) - (2)].t_effect_lists);;}
    break;

  case 83:
#line 608 "pddl+.y"
    {(yyval.t_effect_lists)=(yyvsp[(2) - (2)].t_effect_lists); (yyval.t_effect_lists)->cond_effects.push_front((yyvsp[(1) - (2)].t_cond_effect));
                                      requires(E_COND_EFFS);;}
    break;

  case 84:
#line 610 "pddl+.y"
    {(yyval.t_effect_lists)=(yyvsp[(2) - (2)].t_effect_lists); (yyval.t_effect_lists)->forall_effects.push_front((yyvsp[(1) - (2)].t_forall_effect));
                                      requires(E_COND_EFFS);;}
    break;

  case 85:
#line 612 "pddl+.y"
    {(yyval.t_effect_lists)=new effect_lists(); ;}
    break;

  case 86:
#line 621 "pddl+.y"
    {(yyval.t_effect_lists)= (yyvsp[(1) - (1)].t_effect_lists);;}
    break;

  case 87:
#line 622 "pddl+.y"
    {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->add_effects.push_front((yyvsp[(1) - (1)].t_simple_effect));;}
    break;

  case 88:
#line 623 "pddl+.y"
    {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->del_effects.push_front((yyvsp[(1) - (1)].t_simple_effect));;}
    break;

  case 89:
#line 624 "pddl+.y"
    {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->cond_effects.push_front((yyvsp[(1) - (1)].t_cond_effect));;}
    break;

  case 90:
#line 625 "pddl+.y"
    {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->forall_effects.push_front((yyvsp[(1) - (1)].t_forall_effect));;}
    break;

  case 91:
#line 629 "pddl+.y"
    {(yyval.t_effect_lists)= (yyvsp[(3) - (4)].t_effect_lists);;}
    break;

  case 92:
#line 630 "pddl+.y"
    {(yyval.t_effect_lists)= (yyvsp[(1) - (1)].t_effect_lists);;}
    break;

  case 93:
#line 635 "pddl+.y"
    {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->del_effects.push_front((yyvsp[(1) - (1)].t_simple_effect));;}
    break;

  case 94:
#line 637 "pddl+.y"
    {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->add_effects.push_front((yyvsp[(1) - (1)].t_simple_effect));;}
    break;

  case 95:
#line 639 "pddl+.y"
    {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->assign_effects.push_front((yyvsp[(1) - (1)].t_assignment));
         requires(E_NFLUENTS);;}
    break;

  case 96:
#line 645 "pddl+.y"
    {(yyval.t_effect_lists)= (yyvsp[(1) - (2)].t_effect_lists); (yyval.t_effect_lists)->del_effects.push_back((yyvsp[(2) - (2)].t_simple_effect));;}
    break;

  case 97:
#line 646 "pddl+.y"
    {(yyval.t_effect_lists)= (yyvsp[(1) - (2)].t_effect_lists); (yyval.t_effect_lists)->add_effects.push_back((yyvsp[(2) - (2)].t_simple_effect));;}
    break;

  case 98:
#line 647 "pddl+.y"
    {(yyval.t_effect_lists)= (yyvsp[(1) - (2)].t_effect_lists); (yyval.t_effect_lists)->assign_effects.push_back((yyvsp[(2) - (2)].t_assignment));
                                     requires(E_NFLUENTS); ;}
    break;

  case 99:
#line 649 "pddl+.y"
    { (yyval.t_effect_lists)= new effect_lists; ;}
    break;

  case 100:
#line 654 "pddl+.y"
    { (yyval.t_effect_lists)=(yyvsp[(3) - (4)].t_effect_lists); ;}
    break;

  case 101:
#line 656 "pddl+.y"
    {yyerrok; (yyval.t_effect_lists)=NULL;
	 log_error(E_FATAL,"Syntax error in (and ...)");
	;}
    break;

  case 102:
#line 664 "pddl+.y"
    { (yyval.t_effect_lists)=(yyvsp[(3) - (4)].t_effect_lists); ;}
    break;

  case 103:
#line 669 "pddl+.y"
    { (yyval.t_effect_lists)= new effect_lists;
          (yyval.t_effect_lists)->forall_effects.push_back(
	       new forall_effect((yyvsp[(6) - (7)].t_effect_lists), (yyvsp[(4) - (7)].t_var_symbol_list), current_analysis->var_tab_stack.pop()));
          requires(E_COND_EFFS);;}
    break;

  case 104:
#line 674 "pddl+.y"
    { (yyval.t_effect_lists)= new effect_lists;
	  (yyval.t_effect_lists)->cond_effects.push_back(
	       new cond_effect((yyvsp[(3) - (5)].t_goal),(yyvsp[(4) - (5)].t_effect_lists)));
          requires(E_COND_EFFS); ;}
    break;

  case 105:
#line 679 "pddl+.y"
    { (yyval.t_effect_lists)= new effect_lists;
	  (yyval.t_effect_lists)->cond_assign_effects.push_back(
	       new cond_effect((yyvsp[(3) - (5)].t_goal),(yyvsp[(4) - (5)].t_effect_lists)));
          requires(E_COND_EFFS); ;}
    break;

  case 106:
#line 684 "pddl+.y"
    { (yyval.t_effect_lists)=new effect_lists;
          (yyval.t_effect_lists)->timed_effects.push_back((yyvsp[(1) - (1)].t_timed_effect)); ;}
    break;

  case 107:
#line 687 "pddl+.y"
    { (yyval.t_effect_lists)= new effect_lists;
	  (yyval.t_effect_lists)->assign_effects.push_front((yyvsp[(1) - (1)].t_assignment));
          requires(E_NFLUENTS); ;}
    break;

  case 108:
#line 693 "pddl+.y"
    { (yyval.t_effect_lists)=(yyvsp[(1) - (2)].t_effect_lists); (yyvsp[(1) - (2)].t_effect_lists)->append_effects((yyvsp[(2) - (2)].t_effect_lists)); delete (yyvsp[(2) - (2)].t_effect_lists); ;}
    break;

  case 109:
#line 694 "pddl+.y"
    { (yyval.t_effect_lists)= new effect_lists; ;}
    break;

  case 110:
#line 700 "pddl+.y"
    {(yyval.t_timed_effect)=new timed_effect((yyvsp[(3) - (4)].t_effect_lists),E_AT_START);;}
    break;

  case 111:
#line 702 "pddl+.y"
    {(yyval.t_timed_effect)=new timed_effect((yyvsp[(3) - (4)].t_effect_lists),E_AT_END);;}
    break;

  case 112:
#line 704 "pddl+.y"
    {(yyval.t_timed_effect)=new timed_effect(new effect_lists,E_CONTINUOUS);
         (yyval.t_timed_effect)->effs->assign_effects.push_front(
	     new assignment((yyvsp[(3) - (5)].t_func_term),E_INCREASE,(yyvsp[(4) - (5)].t_expression))); ;}
    break;

  case 113:
#line 708 "pddl+.y"
    {(yyval.t_timed_effect)=new timed_effect(new effect_lists,E_CONTINUOUS);
         (yyval.t_timed_effect)->effs->assign_effects.push_front(
	     new assignment((yyvsp[(3) - (5)].t_func_term),E_DECREASE,(yyvsp[(4) - (5)].t_expression))); ;}
    break;

  case 114:
#line 712 "pddl+.y"
    {yyerrok; (yyval.t_timed_effect)=NULL;
	log_error(E_FATAL,"Syntax error in timed effect"); ;}
    break;

  case 115:
#line 718 "pddl+.y"
    {(yyval.t_timed_effect)=new timed_effect(new effect_lists,E_CONTINUOUS);
         (yyval.t_timed_effect)->effs->assign_effects.push_front(
	     new assignment((yyvsp[(3) - (5)].t_func_term),E_INCREASE,(yyvsp[(4) - (5)].t_expression))); ;}
    break;

  case 116:
#line 722 "pddl+.y"
    {(yyval.t_timed_effect)=new timed_effect(new effect_lists,E_CONTINUOUS);
         (yyval.t_timed_effect)->effs->assign_effects.push_front(
	     new assignment((yyvsp[(3) - (5)].t_func_term),E_DECREASE,(yyvsp[(4) - (5)].t_expression))); ;}
    break;

  case 117:
#line 726 "pddl+.y"
    {yyerrok; (yyval.t_timed_effect)=NULL;
	log_error(E_FATAL,"Syntax error in conditional continuous effect"); ;}
    break;

  case 118:
#line 732 "pddl+.y"
    { (yyval.t_effect_lists)=(yyvsp[(3) - (4)].t_effect_lists); ;}
    break;

  case 119:
#line 737 "pddl+.y"
    { (yyval.t_effect_lists)= new effect_lists;
          (yyval.t_effect_lists)->forall_effects.push_back(
	       new forall_effect((yyvsp[(6) - (7)].t_effect_lists), (yyvsp[(4) - (7)].t_var_symbol_list), current_analysis->var_tab_stack.pop()));
          requires(E_COND_EFFS);;}
    break;

  case 120:
#line 742 "pddl+.y"
    { (yyval.t_effect_lists)= new effect_lists;
	  (yyval.t_effect_lists)->cond_assign_effects.push_back(
	       new cond_effect((yyvsp[(3) - (5)].t_goal),(yyvsp[(4) - (5)].t_effect_lists)));
          requires(E_COND_EFFS); ;}
    break;

  case 121:
#line 747 "pddl+.y"
    { (yyval.t_effect_lists)=new effect_lists;
          (yyval.t_effect_lists)->timed_effects.push_back((yyvsp[(1) - (1)].t_timed_effect)); ;}
    break;

  case 122:
#line 752 "pddl+.y"
    { (yyval.t_effect_lists)=(yyvsp[(1) - (2)].t_effect_lists); (yyvsp[(1) - (2)].t_effect_lists)->append_effects((yyvsp[(2) - (2)].t_effect_lists)); delete (yyvsp[(2) - (2)].t_effect_lists); ;}
    break;

  case 123:
#line 753 "pddl+.y"
    { (yyval.t_effect_lists)= new effect_lists; ;}
    break;

  case 124:
#line 757 "pddl+.y"
    {(yyval.t_effect_lists)= (yyvsp[(3) - (4)].t_effect_lists);;}
    break;

  case 125:
#line 758 "pddl+.y"
    {(yyval.t_effect_lists)= (yyvsp[(1) - (1)].t_effect_lists);;}
    break;

  case 126:
#line 763 "pddl+.y"
    {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->del_effects.push_front((yyvsp[(1) - (1)].t_simple_effect));;}
    break;

  case 127:
#line 765 "pddl+.y"
    {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->add_effects.push_front((yyvsp[(1) - (1)].t_simple_effect));;}
    break;

  case 128:
#line 767 "pddl+.y"
    {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->assign_effects.push_front((yyvsp[(1) - (1)].t_assignment));
         requires(E_NFLUENTS);;}
    break;

  case 129:
#line 773 "pddl+.y"
    {(yyval.t_effect_lists)= (yyvsp[(1) - (2)].t_effect_lists); (yyval.t_effect_lists)->del_effects.push_back((yyvsp[(2) - (2)].t_simple_effect));;}
    break;

  case 130:
#line 774 "pddl+.y"
    {(yyval.t_effect_lists)= (yyvsp[(1) - (2)].t_effect_lists); (yyval.t_effect_lists)->add_effects.push_back((yyvsp[(2) - (2)].t_simple_effect));;}
    break;

  case 131:
#line 775 "pddl+.y"
    {(yyval.t_effect_lists)= (yyvsp[(1) - (2)].t_effect_lists); (yyval.t_effect_lists)->assign_effects.push_back((yyvsp[(2) - (2)].t_assignment));
                                     requires(E_NFLUENTS); ;}
    break;

  case 132:
#line 777 "pddl+.y"
    { (yyval.t_effect_lists)= new effect_lists; ;}
    break;

  case 133:
#line 783 "pddl+.y"
    { (yyval.t_assignment)= new assignment((yyvsp[(3) - (5)].t_func_term),E_ASSIGN,(yyvsp[(4) - (5)].t_expression)); ;}
    break;

  case 134:
#line 785 "pddl+.y"
    { (yyval.t_assignment)= new assignment((yyvsp[(3) - (5)].t_func_term),E_INCREASE,(yyvsp[(4) - (5)].t_expression)); ;}
    break;

  case 135:
#line 787 "pddl+.y"
    { (yyval.t_assignment)= new assignment((yyvsp[(3) - (5)].t_func_term),E_DECREASE,(yyvsp[(4) - (5)].t_expression)); ;}
    break;

  case 136:
#line 789 "pddl+.y"
    { (yyval.t_assignment)= new assignment((yyvsp[(3) - (5)].t_func_term),E_SCALE_UP,(yyvsp[(4) - (5)].t_expression)); ;}
    break;

  case 137:
#line 791 "pddl+.y"
    { (yyval.t_assignment)= new assignment((yyvsp[(3) - (5)].t_func_term),E_SCALE_DOWN,(yyvsp[(4) - (5)].t_expression)); ;}
    break;

  case 138:
#line 796 "pddl+.y"
    {(yyval.t_effect_lists)=new effect_lists;
         timed_effect * te = new timed_effect(new effect_lists,E_CONTINUOUS);
         (yyval.t_effect_lists)->timed_effects.push_front(te);
         te->effs->assign_effects.push_front(
	     new assignment((yyvsp[(3) - (5)].t_func_term),E_INCREASE,(yyvsp[(4) - (5)].t_expression))); ;}
    break;

  case 139:
#line 802 "pddl+.y"
    {(yyval.t_effect_lists)=new effect_lists;
         timed_effect * te = new timed_effect(new effect_lists,E_CONTINUOUS);
         (yyval.t_effect_lists)->timed_effects.push_front(te);
         te->effs->assign_effects.push_front(
	     new assignment((yyvsp[(3) - (5)].t_func_term),E_DECREASE,(yyvsp[(4) - (5)].t_expression))); ;}
    break;

  case 140:
#line 808 "pddl+.y"
    {(yyval.t_effect_lists) = (yyvsp[(3) - (4)].t_effect_lists);;}
    break;

  case 141:
#line 812 "pddl+.y"
    { (yyval.t_effect_lists)=(yyvsp[(1) - (2)].t_effect_lists); (yyvsp[(1) - (2)].t_effect_lists)->append_effects((yyvsp[(2) - (2)].t_effect_lists)); delete (yyvsp[(2) - (2)].t_effect_lists); ;}
    break;

  case 142:
#line 813 "pddl+.y"
    { (yyval.t_effect_lists)= new effect_lists; ;}
    break;

  case 143:
#line 817 "pddl+.y"
    {(yyval.t_expression)= (yyvsp[(1) - (1)].t_expression);;}
    break;

  case 144:
#line 818 "pddl+.y"
    {(yyval.t_expression)= new special_val_expr(E_DURATION_VAR);
                    requires( E_DURATION_INEQUALITIES );;}
    break;

  case 145:
#line 820 "pddl+.y"
    { (yyval.t_expression)=(yyvsp[(1) - (1)].t_num_expression); ;}
    break;

  case 146:
#line 821 "pddl+.y"
    { (yyval.t_expression)= (yyvsp[(1) - (1)].t_func_term); ;}
    break;

  case 147:
#line 822 "pddl+.y"
    { (yyval.t_expression) = current_analysis->getControlParam((yyvsp[(2) - (2)].cp)); delete [] (yyvsp[(2) - (2)].cp);;}
    break;

  case 148:
#line 827 "pddl+.y"
    { (yyval.t_expression)= new plus_expression((yyvsp[(3) - (5)].t_expression),(yyvsp[(4) - (5)].t_expression)); ;}
    break;

  case 149:
#line 829 "pddl+.y"
    { (yyval.t_expression)= new minus_expression((yyvsp[(3) - (5)].t_expression),(yyvsp[(4) - (5)].t_expression)); ;}
    break;

  case 150:
#line 831 "pddl+.y"
    { (yyval.t_expression)= new mul_expression((yyvsp[(3) - (5)].t_expression),(yyvsp[(4) - (5)].t_expression)); ;}
    break;

  case 151:
#line 833 "pddl+.y"
    { (yyval.t_expression)= new div_expression((yyvsp[(3) - (5)].t_expression),(yyvsp[(4) - (5)].t_expression)); ;}
    break;

  case 152:
#line 838 "pddl+.y"
    { (yyval.t_goal)= new conj_goal((yyvsp[(3) - (4)].t_goal_list)); ;}
    break;

  case 153:
#line 840 "pddl+.y"
    { (yyval.t_goal)= new timed_goal(new comparison((yyvsp[(2) - (6)].t_comparison_op),
        			new special_val_expr(E_DURATION_VAR),(yyvsp[(5) - (6)].t_expression)),E_AT_START); ;}
    break;

  case 154:
#line 843 "pddl+.y"
    { (yyval.t_goal) = new timed_goal(new comparison((yyvsp[(4) - (9)].t_comparison_op),
					new special_val_expr(E_DURATION_VAR),(yyvsp[(7) - (9)].t_expression)),E_AT_START);;}
    break;

  case 155:
#line 846 "pddl+.y"
    { (yyval.t_goal) = new timed_goal(new comparison((yyvsp[(4) - (9)].t_comparison_op),
					new special_val_expr(E_DURATION_VAR),(yyvsp[(7) - (9)].t_expression)),E_AT_END);;}
    break;

  case 156:
#line 851 "pddl+.y"
    {(yyval.t_comparison_op)= E_LESSEQ; requires(E_DURATION_INEQUALITIES);;}
    break;

  case 157:
#line 852 "pddl+.y"
    {(yyval.t_comparison_op)= E_GREATEQ; requires(E_DURATION_INEQUALITIES);;}
    break;

  case 158:
#line 853 "pddl+.y"
    {(yyval.t_comparison_op)= E_EQUALS; ;}
    break;

  case 159:
#line 861 "pddl+.y"
    {(yyval.t_expression)= (yyvsp[(1) - (1)].t_expression); ;}
    break;

  case 160:
#line 866 "pddl+.y"
    { (yyval.t_goal_list)=(yyvsp[(1) - (2)].t_goal_list); (yyval.t_goal_list)->push_back((yyvsp[(2) - (2)].t_goal)); ;}
    break;

  case 161:
#line 868 "pddl+.y"
    { (yyval.t_goal_list)= new goal_list; ;}
    break;

  case 162:
#line 873 "pddl+.y"
    { (yyval.t_simple_effect)= new simple_effect((yyvsp[(3) - (4)].t_proposition)); ;}
    break;

  case 163:
#line 878 "pddl+.y"
    { (yyval.t_simple_effect)= new simple_effect((yyvsp[(1) - (1)].t_proposition)); ;}
    break;

  case 164:
#line 885 "pddl+.y"
    { (yyval.t_simple_effect)= new simple_effect((yyvsp[(3) - (4)].t_proposition)); ;}
    break;

  case 165:
#line 890 "pddl+.y"
    { (yyval.t_simple_effect)= new simple_effect((yyvsp[(1) - (1)].t_proposition)); ;}
    break;

  case 166:
#line 895 "pddl+.y"
    { (yyval.t_forall_effect)= new forall_effect((yyvsp[(6) - (7)].t_effect_lists), (yyvsp[(4) - (7)].t_var_symbol_list), current_analysis->var_tab_stack.pop());;}
    break;

  case 167:
#line 900 "pddl+.y"
    { (yyval.t_cond_effect)= new cond_effect((yyvsp[(3) - (5)].t_goal),(yyvsp[(4) - (5)].t_effect_lists)); ;}
    break;

  case 168:
#line 905 "pddl+.y"
    { (yyval.t_assignment)= new assignment((yyvsp[(3) - (5)].t_func_term),E_ASSIGN,(yyvsp[(4) - (5)].t_expression)); ;}
    break;

  case 169:
#line 907 "pddl+.y"
    { (yyval.t_assignment)= new assignment((yyvsp[(3) - (5)].t_func_term),E_INCREASE,(yyvsp[(4) - (5)].t_expression)); ;}
    break;

  case 170:
#line 909 "pddl+.y"
    { (yyval.t_assignment)= new assignment((yyvsp[(3) - (5)].t_func_term),E_DECREASE,(yyvsp[(4) - (5)].t_expression)); ;}
    break;

  case 171:
#line 911 "pddl+.y"
    { (yyval.t_assignment)= new assignment((yyvsp[(3) - (5)].t_func_term),E_SCALE_UP,(yyvsp[(4) - (5)].t_expression)); ;}
    break;

  case 172:
#line 913 "pddl+.y"
    { (yyval.t_assignment)= new assignment((yyvsp[(3) - (5)].t_func_term),E_SCALE_DOWN,(yyvsp[(4) - (5)].t_expression)); ;}
    break;

  case 173:
#line 918 "pddl+.y"
    { (yyval.t_expression)= new uminus_expression((yyvsp[(3) - (4)].t_expression)); requires(E_NFLUENTS); ;}
    break;

  case 174:
#line 920 "pddl+.y"
    { (yyval.t_expression)= new plus_expression((yyvsp[(3) - (5)].t_expression),(yyvsp[(4) - (5)].t_expression)); requires(E_NFLUENTS); ;}
    break;

  case 175:
#line 922 "pddl+.y"
    { (yyval.t_expression)= new minus_expression((yyvsp[(3) - (5)].t_expression),(yyvsp[(4) - (5)].t_expression)); requires(E_NFLUENTS); ;}
    break;

  case 176:
#line 924 "pddl+.y"
    { (yyval.t_expression)= new mul_expression((yyvsp[(3) - (5)].t_expression),(yyvsp[(4) - (5)].t_expression)); requires(E_NFLUENTS); ;}
    break;

  case 177:
#line 926 "pddl+.y"
    { (yyval.t_expression)= new div_expression((yyvsp[(3) - (5)].t_expression),(yyvsp[(4) - (5)].t_expression)); requires(E_NFLUENTS); ;}
    break;

  case 178:
#line 927 "pddl+.y"
    { (yyval.t_expression)=(yyvsp[(1) - (1)].t_num_expression); ;}
    break;

  case 179:
#line 928 "pddl+.y"
    { (yyval.t_expression) = current_analysis->getControlParam((yyvsp[(2) - (2)].cp)); delete [] (yyvsp[(2) - (2)].cp);;}
    break;

  case 180:
#line 929 "pddl+.y"
    { (yyval.t_expression)= (yyvsp[(1) - (1)].t_func_term); requires(E_NFLUENTS); ;}
    break;

  case 181:
#line 934 "pddl+.y"
    { (yyval.t_expression)= new mul_expression(new special_val_expr(E_HASHT),(yyvsp[(4) - (5)].t_expression)); ;}
    break;

  case 182:
#line 936 "pddl+.y"
    { (yyval.t_expression)= new mul_expression((yyvsp[(3) - (5)].t_expression), new special_val_expr(E_HASHT)); ;}
    break;

  case 183:
#line 938 "pddl+.y"
    { (yyval.t_expression)= new special_val_expr(E_HASHT); ;}
    break;

  case 184:
#line 943 "pddl+.y"
    { (yyval.t_num_expression)=new int_expression((yyvsp[(1) - (1)].ival));   ;}
    break;

  case 185:
#line 944 "pddl+.y"
    { (yyval.t_num_expression)=new float_expression((yyvsp[(1) - (1)].fval)); ;}
    break;

  case 186:
#line 948 "pddl+.y"
    { (yyval.t_func_term)=new func_term( current_analysis->func_tab.symbol_get((yyvsp[(2) - (4)].cp)), (yyvsp[(3) - (4)].t_parameter_symbol_list)); delete [] (yyvsp[(2) - (4)].cp); ;}
    break;

  case 187:
#line 951 "pddl+.y"
    { (yyval.t_func_term)=new func_term( current_analysis->func_tab.symbol_get((yyvsp[(2) - (4)].cp)), (yyvsp[(3) - (4)].t_parameter_symbol_list)); delete [] (yyvsp[(2) - (4)].cp); ;}
    break;

  case 188:
#line 953 "pddl+.y"
    { (yyval.t_func_term)=new func_term( current_analysis->func_tab.symbol_get((yyvsp[(1) - (1)].cp)),
                            new parameter_symbol_list); delete [] (yyvsp[(1) - (1)].cp);;}
    break;

  case 189:
#line 956 "pddl+.y"
    { (yyval.t_func_term) = new class_func_term( (yyvsp[(2) - (6)].t_class), current_analysis->func_tab.symbol_get((yyvsp[(4) - (6)].cp)), (yyvsp[(5) - (6)].t_parameter_symbol_list)); delete [] (yyvsp[(4) - (6)].cp);;}
    break;

  case 190:
#line 973 "pddl+.y"
    { (yyval.t_func_term)=new func_term( current_analysis->func_tab.symbol_get((yyvsp[(2) - (4)].cp)), (yyvsp[(3) - (4)].t_parameter_symbol_list)); delete [] (yyvsp[(2) - (4)].cp); ;}
    break;

  case 191:
#line 975 "pddl+.y"
    { (yyval.t_func_term)=new func_term( current_analysis->func_tab.symbol_get((yyvsp[(2) - (4)].cp)), (yyvsp[(3) - (4)].t_parameter_symbol_list)); delete [] (yyvsp[(2) - (4)].cp); ;}
    break;

  case 192:
#line 977 "pddl+.y"
    { (yyval.t_func_term)=new func_term( current_analysis->func_tab.symbol_get((yyvsp[(1) - (1)].cp)),
                            new parameter_symbol_list); delete [] (yyvsp[(1) - (1)].cp);;}
    break;

  case 193:
#line 982 "pddl+.y"
    { (yyval.t_comparison_op)= E_GREATER; ;}
    break;

  case 194:
#line 983 "pddl+.y"
    { (yyval.t_comparison_op)= E_GREATEQ; ;}
    break;

  case 195:
#line 984 "pddl+.y"
    { (yyval.t_comparison_op)= E_LESS; ;}
    break;

  case 196:
#line 985 "pddl+.y"
    { (yyval.t_comparison_op)= E_LESSEQ; ;}
    break;

  case 197:
#line 986 "pddl+.y"
    { (yyval.t_comparison_op)= E_EQUALS; ;}
    break;

  case 198:
#line 999 "pddl+.y"
    {(yyval.t_goal)= (yyvsp[(1) - (1)].t_goal);;}
    break;

  case 199:
#line 1006 "pddl+.y"
    {(yyval.t_goal) = new conj_goal((yyvsp[(3) - (4)].t_goal_list));;}
    break;

  case 200:
#line 1009 "pddl+.y"
    {(yyval.t_goal)= new qfied_goal(E_FORALL,(yyvsp[(4) - (7)].t_var_symbol_list),(yyvsp[(6) - (7)].t_goal),current_analysis->var_tab_stack.pop());
        requires(E_UNIV_PRECS);;}
    break;

  case 201:
#line 1011 "pddl+.y"
    {(yyval.t_goal) = new conj_goal(new goal_list);;}
    break;

  case 202:
#line 1012 "pddl+.y"
    {(yyval.t_goal) = new conj_goal(new goal_list);;}
    break;

  case 203:
#line 1017 "pddl+.y"
    {(yyval.t_con_goal) = new preference((yyvsp[(3) - (4)].t_con_goal));requires(E_PREFERENCES);;}
    break;

  case 204:
#line 1019 "pddl+.y"
    {(yyval.t_con_goal) = new preference((yyvsp[(3) - (5)].cp),(yyvsp[(4) - (5)].t_con_goal));requires(E_PREFERENCES);;}
    break;

  case 205:
#line 1021 "pddl+.y"
    {(yyval.t_con_goal) = new conj_goal((yyvsp[(3) - (4)].t_goal_list));;}
    break;

  case 206:
#line 1024 "pddl+.y"
    {(yyval.t_con_goal)= new qfied_goal(E_FORALL,(yyvsp[(4) - (7)].t_var_symbol_list),(yyvsp[(6) - (7)].t_con_goal),current_analysis->var_tab_stack.pop());
                requires(E_UNIV_PRECS);;}
    break;

  case 207:
#line 1027 "pddl+.y"
    {(yyval.t_con_goal) = (yyvsp[(1) - (1)].t_con_goal);;}
    break;

  case 208:
#line 1032 "pddl+.y"
    {(yyval.t_con_goal) = new preference((yyvsp[(3) - (4)].t_con_goal));requires(E_PREFERENCES);;}
    break;

  case 209:
#line 1034 "pddl+.y"
    {(yyval.t_con_goal) = new preference((yyvsp[(3) - (5)].cp),(yyvsp[(4) - (5)].t_con_goal));requires(E_PREFERENCES);;}
    break;

  case 210:
#line 1036 "pddl+.y"
    {(yyval.t_con_goal) = new conj_goal((yyvsp[(3) - (4)].t_goal_list));;}
    break;

  case 211:
#line 1039 "pddl+.y"
    {(yyval.t_con_goal)= new qfied_goal(E_FORALL,(yyvsp[(4) - (7)].t_var_symbol_list),(yyvsp[(6) - (7)].t_con_goal),current_analysis->var_tab_stack.pop());
                requires(E_UNIV_PRECS);;}
    break;

  case 212:
#line 1045 "pddl+.y"
    {(yyval.t_goal_list)=(yyvsp[(1) - (2)].t_goal_list); if((yyvsp[(2) - (2)].t_con_goal)) {(yyvsp[(1) - (2)].t_goal_list)->push_back((yyvsp[(2) - (2)].t_con_goal));};;}
    break;

  case 213:
#line 1047 "pddl+.y"
    {(yyval.t_goal_list)= new goal_list; if((yyvsp[(1) - (1)].t_con_goal)) {(yyval.t_goal_list)->push_back((yyvsp[(1) - (1)].t_con_goal));};;}
    break;

  case 214:
#line 1052 "pddl+.y"
    {(yyval.t_goal)= new preference((yyvsp[(3) - (4)].t_goal)); requires(E_PREFERENCES);;}
    break;

  case 215:
#line 1054 "pddl+.y"
    {(yyval.t_goal)= new preference((yyvsp[(3) - (5)].cp),(yyvsp[(4) - (5)].t_goal)); requires(E_PREFERENCES);;}
    break;

  case 216:
#line 1058 "pddl+.y"
    {(yyval.t_goal)=(yyvsp[(1) - (1)].t_goal);;}
    break;

  case 217:
#line 1063 "pddl+.y"
    {(yyval.t_goal_list) = (yyvsp[(1) - (2)].t_goal_list); if((yyvsp[(2) - (2)].t_con_goal)) {(yyval.t_goal_list)->push_back((yyvsp[(2) - (2)].t_con_goal));}; ;}
    break;

  case 218:
#line 1065 "pddl+.y"
    {(yyval.t_goal_list) = new goal_list; if((yyvsp[(1) - (1)].t_con_goal)) {(yyval.t_goal_list)->push_back((yyvsp[(1) - (1)].t_con_goal));};}
    break;

  case 219:
#line 1070 "pddl+.y"
    {(yyval.t_con_goal)= new conj_goal((yyvsp[(3) - (4)].t_goal_list));;}
    break;

  case 220:
#line 1072 "pddl+.y"
    {(yyval.t_con_goal) = new qfied_goal(E_FORALL,(yyvsp[(4) - (7)].t_var_symbol_list),(yyvsp[(6) - (7)].t_con_goal),current_analysis->var_tab_stack.pop());
        requires(E_UNIV_PRECS);;}
    break;

  case 221:
#line 1075 "pddl+.y"
    {(yyval.t_con_goal) = new constraint_goal(E_ATEND,(yyvsp[(3) - (4)].t_goal));;}
    break;

  case 222:
#line 1077 "pddl+.y"
    {(yyval.t_con_goal) = new constraint_goal(E_ALWAYS,(yyvsp[(3) - (4)].t_goal));;}
    break;

  case 223:
#line 1079 "pddl+.y"
    {(yyval.t_con_goal) = new constraint_goal(E_SOMETIME,(yyvsp[(3) - (4)].t_goal));;}
    break;

  case 224:
#line 1081 "pddl+.y"
    {(yyval.t_con_goal) = new constraint_goal(E_WITHIN,(yyvsp[(4) - (5)].t_goal),NULL,(yyvsp[(3) - (5)].t_num_expression)->double_value(),0.0);delete (yyvsp[(3) - (5)].t_num_expression);;}
    break;

  case 225:
#line 1083 "pddl+.y"
    {(yyval.t_con_goal) = new constraint_goal(E_ATMOSTONCE,(yyvsp[(3) - (4)].t_goal));;}
    break;

  case 226:
#line 1085 "pddl+.y"
    {(yyval.t_con_goal) = new constraint_goal(E_SOMETIMEAFTER,(yyvsp[(4) - (5)].t_goal),(yyvsp[(3) - (5)].t_goal));;}
    break;

  case 227:
#line 1087 "pddl+.y"
    {(yyval.t_con_goal) = new constraint_goal(E_SOMETIMEBEFORE,(yyvsp[(4) - (5)].t_goal),(yyvsp[(3) - (5)].t_goal));;}
    break;

  case 228:
#line 1089 "pddl+.y"
    {(yyval.t_con_goal) = new constraint_goal(E_ALWAYSWITHIN,(yyvsp[(5) - (6)].t_goal),(yyvsp[(4) - (6)].t_goal),(yyvsp[(3) - (6)].t_num_expression)->double_value(),0.0);delete (yyvsp[(3) - (6)].t_num_expression);;}
    break;

  case 229:
#line 1091 "pddl+.y"
    {(yyval.t_con_goal) = new constraint_goal(E_HOLDDURING,(yyvsp[(5) - (6)].t_goal),NULL,(yyvsp[(4) - (6)].t_num_expression)->double_value(),(yyvsp[(3) - (6)].t_num_expression)->double_value());delete (yyvsp[(3) - (6)].t_num_expression);delete (yyvsp[(4) - (6)].t_num_expression);;}
    break;

  case 230:
#line 1093 "pddl+.y"
    {(yyval.t_con_goal) = new constraint_goal(E_HOLDAFTER,(yyvsp[(4) - (5)].t_goal),NULL,0.0,(yyvsp[(3) - (5)].t_num_expression)->double_value());delete (yyvsp[(3) - (5)].t_num_expression);;}
    break;

  case 231:
#line 1095 "pddl+.y"
    {(yyval.t_con_goal) = new constraint_goal(E_AFTER,(yyvsp[(4) - (5)].t_goal),(yyvsp[(3) - (5)].t_goal));;}
    break;

  case 232:
#line 1097 "pddl+.y"
    {(yyval.t_con_goal) = 0;
		 current_analysis->goalnames[(yyvsp[(3) - (5)].cp)] = (yyvsp[(4) - (5)].t_goal);
		 delete [] (yyvsp[(3) - (5)].cp);;}
    break;

  case 233:
#line 1104 "pddl+.y"
    {(yyval.t_goal) = (yyvsp[(1) - (1)].t_goal);;}
    break;

  case 234:
#line 1106 "pddl+.y"
    {(yyval.t_goal) = new named_goal(current_analysis->goalnames[(yyvsp[(1) - (1)].cp)]); delete [] (yyvsp[(1) - (1)].cp);;}
    break;

  case 235:
#line 1111 "pddl+.y"
    {(yyval.t_goal)= new simple_goal((yyvsp[(1) - (1)].t_proposition),E_POS);;}
    break;

  case 236:
#line 1113 "pddl+.y"
    {(yyval.t_goal)= new neg_goal((yyvsp[(3) - (4)].t_goal));simple_goal * s = dynamic_cast<simple_goal *>((yyvsp[(3) - (4)].t_goal));
       if(s && s->getProp()->head->getName()=="=") {requires(E_EQUALITY);}
       else{requires(E_NEGATIVE_PRECONDITIONS);};;}
    break;

  case 237:
#line 1117 "pddl+.y"
    {(yyval.t_goal)= new conj_goal((yyvsp[(3) - (4)].t_goal_list));;}
    break;

  case 238:
#line 1119 "pddl+.y"
    {(yyval.t_goal)= new disj_goal((yyvsp[(3) - (4)].t_goal_list));
        requires(E_DISJUNCTIVE_PRECONDS);;}
    break;

  case 239:
#line 1122 "pddl+.y"
    {(yyval.t_goal)= new imply_goal((yyvsp[(3) - (5)].t_goal),(yyvsp[(4) - (5)].t_goal));
        requires(E_DISJUNCTIVE_PRECONDS);;}
    break;

  case 240:
#line 1126 "pddl+.y"
    {(yyval.t_goal)= new qfied_goal((yyvsp[(2) - (7)].t_quantifier),(yyvsp[(4) - (7)].t_var_symbol_list),(yyvsp[(6) - (7)].t_goal),current_analysis->var_tab_stack.pop());;}
    break;

  case 241:
#line 1129 "pddl+.y"
    {(yyval.t_goal)= new qfied_goal((yyvsp[(2) - (7)].t_quantifier),(yyvsp[(4) - (7)].t_var_symbol_list),(yyvsp[(6) - (7)].t_goal),current_analysis->var_tab_stack.pop());;}
    break;

  case 242:
#line 1131 "pddl+.y"
    {(yyval.t_goal)= new comparison((yyvsp[(2) - (5)].t_comparison_op),(yyvsp[(3) - (5)].t_expression),(yyvsp[(4) - (5)].t_expression));
        requires(E_NFLUENTS);;}
    break;

  case 243:
#line 1137 "pddl+.y"
    {(yyval.t_goal_list)=(yyvsp[(1) - (2)].t_goal_list); (yyvsp[(1) - (2)].t_goal_list)->push_back((yyvsp[(2) - (2)].t_goal));;}
    break;

  case 244:
#line 1139 "pddl+.y"
    {(yyval.t_goal_list)= new goal_list; (yyval.t_goal_list)->push_back((yyvsp[(1) - (1)].t_goal));;}
    break;

  case 245:
#line 1144 "pddl+.y"
    {(yyval.t_goal_list)=(yyvsp[(1) - (2)].t_goal_list); (yyvsp[(1) - (2)].t_goal_list)->push_back((yyvsp[(2) - (2)].t_goal));;}
    break;

  case 246:
#line 1146 "pddl+.y"
    {(yyval.t_goal_list)= new goal_list; (yyval.t_goal_list)->push_back((yyvsp[(1) - (1)].t_goal));;}
    break;

  case 247:
#line 1156 "pddl+.y"
    {(yyval.t_quantifier)=E_FORALL;
        current_analysis->var_tab_stack.push(
        		current_analysis->buildForallTab());;}
    break;

  case 248:
#line 1163 "pddl+.y"
    {(yyval.t_quantifier)=E_EXISTS;
        current_analysis->var_tab_stack.push(
        	current_analysis->buildExistsTab());;}
    break;

  case 249:
#line 1170 "pddl+.y"
    {(yyval.t_proposition)=new proposition((yyvsp[(2) - (4)].t_pred_symbol),(yyvsp[(3) - (4)].t_parameter_symbol_list));;}
    break;

  case 250:
#line 1175 "pddl+.y"
    {(yyval.t_proposition) = new proposition((yyvsp[(2) - (4)].t_pred_symbol),(yyvsp[(3) - (4)].t_var_symbol_list));;}
    break;

  case 251:
#line 1180 "pddl+.y"
    {(yyval.t_proposition)=new proposition((yyvsp[(2) - (4)].t_pred_symbol),(yyvsp[(3) - (4)].t_parameter_symbol_list));;}
    break;

  case 252:
#line 1185 "pddl+.y"
    {(yyval.t_pred_decl_list)= (yyvsp[(3) - (4)].t_pred_decl_list);;}
    break;

  case 253:
#line 1187 "pddl+.y"
    {yyerrok; (yyval.t_pred_decl_list)=NULL;
	 log_error(E_FATAL,"Syntax error in (:predicates ...)");
	;}
    break;

  case 254:
#line 1194 "pddl+.y"
    {(yyval.t_func_decl_list)= (yyvsp[(3) - (4)].t_func_decl_list);;}
    break;

  case 255:
#line 1196 "pddl+.y"
    {yyerrok; (yyval.t_func_decl_list)=NULL;
	 log_error(E_FATAL,"Syntax error in (:functions ...)");
	;}
    break;

  case 256:
#line 1203 "pddl+.y"
    {(yyval.t_con_goal) = (yyvsp[(3) - (4)].t_con_goal);;}
    break;

  case 257:
#line 1205 "pddl+.y"
    {yyerrok; (yyval.t_con_goal)=NULL;
      log_error(E_FATAL,"Syntax error in (:constraints ...)");
      ;}
    break;

  case 258:
#line 1212 "pddl+.y"
    {(yyval.t_con_goal) = (yyvsp[(3) - (4)].t_con_goal);;}
    break;

  case 259:
#line 1214 "pddl+.y"
    {yyerrok; (yyval.t_con_goal)=NULL;
      log_error(E_FATAL,"Syntax error in (:constraints ...)");
      ;}
    break;

  case 260:
#line 1220 "pddl+.y"
    { (yyval.t_structure_store)=(yyvsp[(1) - (2)].t_structure_store); (yyval.t_structure_store)->push_back((yyvsp[(2) - (2)].t_structure_def)); ;}
    break;

  case 261:
#line 1221 "pddl+.y"
    { (yyval.t_structure_store)= new structure_store; (yyval.t_structure_store)->push_back((yyvsp[(1) - (1)].t_structure_def)); ;}
    break;

  case 262:
#line 1225 "pddl+.y"
    { (yyval.t_structure_def)= (yyvsp[(1) - (1)].t_action_def); ;}
    break;

  case 263:
#line 1226 "pddl+.y"
    { (yyval.t_structure_def)= (yyvsp[(1) - (1)].t_event_def); requires(E_TIME); ;}
    break;

  case 264:
#line 1227 "pddl+.y"
    { (yyval.t_structure_def)= (yyvsp[(1) - (1)].t_process_def); requires(E_TIME); ;}
    break;

  case 265:
#line 1228 "pddl+.y"
    { (yyval.t_structure_def)= (yyvsp[(1) - (1)].t_durative_action_def); requires(E_DURATIVE_ACTIONS); ;}
    break;

  case 266:
#line 1229 "pddl+.y"
    { (yyval.t_structure_def)= (yyvsp[(1) - (1)].t_derivation_rule); requires(E_DERIVED_PREDICATES);;}
    break;

  case 267:
#line 1230 "pddl+.y"
    { (yyval.t_structure_def) = (yyvsp[(1) - (1)].t_class_def); requires(E_MODULES);;}
    break;

  case 268:
#line 1238 "pddl+.y"
    {(yyval.t_class_def) = new class_def((yyvsp[(3) - (5)].t_class),(yyvsp[(4) - (5)].t_func_decl_list));;}
    break;

  case 269:
#line 1242 "pddl+.y"
    {(yyval.t_dummy)= 0;
    	current_analysis->var_tab_stack.push(
    					current_analysis->buildRuleTab());;}
    break;

  case 270:
#line 1253 "pddl+.y"
    {(yyval.t_derivation_rule) = new derivation_rule((yyvsp[(3) - (5)].t_proposition),(yyvsp[(4) - (5)].t_goal),current_analysis->var_tab_stack.pop());;}
    break;

  case 271:
#line 1265 "pddl+.y"
    { (yyval.t_action_def)= current_analysis->buildAction(current_analysis->op_tab.new_symbol_put((yyvsp[(3) - (12)].cp)),
			(yyvsp[(6) - (12)].t_var_symbol_list),(yyvsp[(9) - (12)].t_goal),(yyvsp[(11) - (12)].t_effect_lists),
			current_analysis->var_tab_stack.pop()); delete [] (yyvsp[(3) - (12)].cp); ;}
    break;

  case 272:
#line 1269 "pddl+.y"
    {yyerrok;
	 log_error(E_FATAL,"Syntax error in action declaration.");
	 (yyval.t_action_def)= NULL; ;}
    break;

  case 273:
#line 1282 "pddl+.y"
    {(yyval.t_event_def)= current_analysis->buildEvent(current_analysis->op_tab.new_symbol_put((yyvsp[(3) - (12)].cp)),
		   (yyvsp[(6) - (12)].t_var_symbol_list),(yyvsp[(9) - (12)].t_goal),(yyvsp[(11) - (12)].t_effect_lists),
		   current_analysis->var_tab_stack.pop()); delete [] (yyvsp[(3) - (12)].cp);;}
    break;

  case 274:
#line 1287 "pddl+.y"
    {yyerrok;
	 log_error(E_FATAL,"Syntax error in event declaration.");
	 (yyval.t_event_def)= NULL; ;}
    break;

  case 275:
#line 1299 "pddl+.y"
    {(yyval.t_process_def)= current_analysis->buildProcess(current_analysis->op_tab.new_symbol_put((yyvsp[(3) - (12)].cp)),
		     (yyvsp[(6) - (12)].t_var_symbol_list),(yyvsp[(9) - (12)].t_goal),(yyvsp[(11) - (12)].t_effect_lists),
                     current_analysis->var_tab_stack.pop()); delete [] (yyvsp[(3) - (12)].cp);;}
    break;

  case 276:
#line 1303 "pddl+.y"
    {yyerrok;
	 log_error(E_FATAL,"Syntax error in process declaration.");
	 (yyval.t_process_def)= NULL; ;}
    break;

  case 277:
#line 1309 "pddl+.y"
    {(yyval.t_var_symbol_list) = (yyvsp[(3) - (4)].t_var_symbol_list); current_analysis->setControlParams((yyval.t_var_symbol_list));;}
    break;

  case 278:
#line 1310 "pddl+.y"
    {(yyval.t_var_symbol_list) = NULL; current_analysis->setControlParams((yyval.t_var_symbol_list));;}
    break;

  case 279:
#line 1321 "pddl+.y"
    { (yyval.t_durative_action_def)= (yyvsp[(11) - (12)].t_durative_action_def);
      (yyval.t_durative_action_def)->name= current_analysis->op_tab.new_symbol_put((yyvsp[(3) - (12)].cp));
      (yyval.t_durative_action_def)->symtab= current_analysis->var_tab_stack.pop();
      (yyval.t_durative_action_def)->control_parameters = current_analysis->getControlParams();
      (yyval.t_durative_action_def)->parameters= (yyvsp[(6) - (12)].t_var_symbol_list);
      (yyval.t_durative_action_def)->dur_constraint= (yyvsp[(10) - (12)].t_goal);
      delete [] (yyvsp[(3) - (12)].cp);
      delete (yyvsp[(8) - (12)].t_var_symbol_list);
    ;}
    break;

  case 280:
#line 1332 "pddl+.y"
    {yyerrok;
	 log_error(E_FATAL,"Syntax error in durative-action declaration.");
	 (yyval.t_durative_action_def)= NULL; ;}
    break;

  case 281:
#line 1339 "pddl+.y"
    {(yyval.t_durative_action_def)=(yyvsp[(1) - (3)].t_durative_action_def); (yyval.t_durative_action_def)->effects=(yyvsp[(3) - (3)].t_effect_lists);;}
    break;

  case 282:
#line 1341 "pddl+.y"
    {(yyval.t_durative_action_def)=(yyvsp[(1) - (3)].t_durative_action_def); (yyval.t_durative_action_def)->precondition=(yyvsp[(3) - (3)].t_goal);;}
    break;

  case 283:
#line 1342 "pddl+.y"
    {(yyval.t_durative_action_def)= current_analysis->buildDurativeAction();;}
    break;

  case 284:
#line 1347 "pddl+.y"
    { (yyval.t_goal)=(yyvsp[(1) - (1)].t_goal); ;}
    break;

  case 285:
#line 1349 "pddl+.y"
    { (yyval.t_goal)= new conj_goal((yyvsp[(3) - (4)].t_goal_list)); ;}
    break;

  case 286:
#line 1354 "pddl+.y"
    { (yyval.t_goal_list)=(yyvsp[(1) - (2)].t_goal_list); (yyval.t_goal_list)->push_back((yyvsp[(2) - (2)].t_goal)); ;}
    break;

  case 287:
#line 1356 "pddl+.y"
    { (yyval.t_goal_list)= new goal_list; ;}
    break;

  case 288:
#line 1361 "pddl+.y"
    {(yyval.t_goal)= new timed_goal((yyvsp[(3) - (4)].t_goal),E_AT_START);;}
    break;

  case 289:
#line 1363 "pddl+.y"
    {(yyval.t_goal)= new timed_goal((yyvsp[(3) - (4)].t_goal),E_AT_END);;}
    break;

  case 290:
#line 1365 "pddl+.y"
    {(yyval.t_goal)= new timed_goal((yyvsp[(3) - (4)].t_goal),E_OVER_ALL);;}
    break;

  case 291:
#line 1367 "pddl+.y"
    {timed_goal * tg = dynamic_cast<timed_goal *>((yyvsp[(4) - (5)].t_goal));
		(yyval.t_goal) = new timed_goal(new preference((yyvsp[(3) - (5)].cp),tg->clearGoal()),tg->getTime());
			delete tg;
			requires(E_PREFERENCES);;}
    break;

  case 292:
#line 1372 "pddl+.y"
    {(yyval.t_goal) = new preference((yyvsp[(3) - (4)].t_goal));requires(E_PREFERENCES);;}
    break;

  case 293:
#line 1376 "pddl+.y"
    {(yyval.t_dummy)= 0; current_analysis->var_tab_stack.push(
    				current_analysis->buildOpTab());;}
    break;

  case 294:
#line 1381 "pddl+.y"
    {(yyval.t_pddl_req_flag)= E_EQUALITY;;}
    break;

  case 295:
#line 1382 "pddl+.y"
    {(yyval.t_pddl_req_flag)= E_STRIPS;;}
    break;

  case 296:
#line 1384 "pddl+.y"
    {(yyval.t_pddl_req_flag)= E_TYPING;;}
    break;

  case 297:
#line 1386 "pddl+.y"
    {(yyval.t_pddl_req_flag)= E_NEGATIVE_PRECONDITIONS;;}
    break;

  case 298:
#line 1388 "pddl+.y"
    {(yyval.t_pddl_req_flag)= E_DISJUNCTIVE_PRECONDS;;}
    break;

  case 299:
#line 1389 "pddl+.y"
    {(yyval.t_pddl_req_flag)= E_EXT_PRECS;;}
    break;

  case 300:
#line 1390 "pddl+.y"
    {(yyval.t_pddl_req_flag)= E_UNIV_PRECS;;}
    break;

  case 301:
#line 1391 "pddl+.y"
    {(yyval.t_pddl_req_flag)= E_COND_EFFS;;}
    break;

  case 302:
#line 1392 "pddl+.y"
    {(yyval.t_pddl_req_flag)= E_NFLUENTS | E_OFLUENTS;;}
    break;

  case 303:
#line 1394 "pddl+.y"
    {(yyval.t_pddl_req_flag)= E_DURATIVE_ACTIONS;;}
    break;

  case 304:
#line 1395 "pddl+.y"
    {(yyval.t_pddl_req_flag)= E_TIME |
                      E_NFLUENTS |
                      E_DURATIVE_ACTIONS; ;}
    break;

  case 305:
#line 1398 "pddl+.y"
    {(yyval.t_pddl_req_flag)=E_ACTIONCOSTS | E_NFLUENTS;;}
    break;

  case 306:
#line 1401 "pddl+.y"
    {(yyval.t_pddl_req_flag)=E_OFLUENTS;;}
    break;

  case 307:
#line 1402 "pddl+.y"
    {(yyval.t_pddl_req_flag)=E_NFLUENTS;;}
    break;

  case 308:
#line 1403 "pddl+.y"
    {(yyval.t_pddl_req_flag)=E_MODULES;;}
    break;

  case 309:
#line 1405 "pddl+.y"
    {(yyval.t_pddl_req_flag)= E_STRIPS |
		      E_TYPING |
		      E_NEGATIVE_PRECONDITIONS |
		      E_DISJUNCTIVE_PRECONDS |
		      E_EQUALITY |
		      E_EXT_PRECS |
		      E_UNIV_PRECS |
		      E_COND_EFFS;;}
    break;

  case 310:
#line 1414 "pddl+.y"
    {(yyval.t_pddl_req_flag)= E_EXT_PRECS |
		      E_UNIV_PRECS;;}
    break;

  case 311:
#line 1418 "pddl+.y"
    {(yyval.t_pddl_req_flag)= E_DURATION_INEQUALITIES;;}
    break;

  case 312:
#line 1421 "pddl+.y"
    {(yyval.t_pddl_req_flag)= E_CONTINUOUS_EFFECTS;;}
    break;

  case 313:
#line 1423 "pddl+.y"
    {(yyval.t_pddl_req_flag) = E_DERIVED_PREDICATES;;}
    break;

  case 314:
#line 1425 "pddl+.y"
    {(yyval.t_pddl_req_flag) = E_TIMED_INITIAL_LITERALS;;}
    break;

  case 315:
#line 1427 "pddl+.y"
    {(yyval.t_pddl_req_flag) = E_PREFERENCES;;}
    break;

  case 316:
#line 1429 "pddl+.y"
    {(yyval.t_pddl_req_flag) = E_CONSTRAINTS;;}
    break;

  case 317:
#line 1430 "pddl+.y"
    {(yyval.t_pddl_req_flag) = E_SUPPLYDEMAND;;}
    break;

  case 318:
#line 1432 "pddl+.y"
    {log_error(E_WARNING,"Unrecognised requirements declaration ");
       (yyval.t_pddl_req_flag)= 0; delete [] (yyvsp[(1) - (1)].cp);;}
    break;

  case 319:
#line 1438 "pddl+.y"
    {(yyval.t_const_symbol_list)=(yyvsp[(3) - (4)].t_const_symbol_list);;}
    break;

  case 320:
#line 1442 "pddl+.y"
    {(yyval.t_type_list)=(yyvsp[(3) - (4)].t_type_list); requires(E_TYPING);;}
    break;

  case 321:
#line 1452 "pddl+.y"
    {(yyval.t_problem)=(yyvsp[(11) - (12)].t_problem); (yyval.t_problem)->name = (yyvsp[(5) - (12)].cp); (yyval.t_problem)->domain_name = (yyvsp[(9) - (12)].cp);
		if (types_used && !types_defined) {
			yyerrok; log_error(E_FATAL,"Syntax error in problem file - types used, but no :types section in domain file.");
		}

	;}
    break;

  case 322:
#line 1460 "pddl+.y"
    {yyerrok; (yyval.t_problem)=NULL;
       	log_error(E_FATAL,"Syntax error in problem definition."); ;}
    break;

  case 323:
#line 1466 "pddl+.y"
    {(yyval.t_problem)=(yyvsp[(2) - (2)].t_problem); (yyval.t_problem)->req= (yyvsp[(1) - (2)].t_pddl_req_flag);;}
    break;

  case 324:
#line 1467 "pddl+.y"
    {(yyval.t_problem)=(yyvsp[(2) - (2)].t_problem); (yyval.t_problem)->objects= (yyvsp[(1) - (2)].t_const_symbol_list);;}
    break;

  case 325:
#line 1468 "pddl+.y"
    {(yyval.t_problem)=(yyvsp[(2) - (2)].t_problem); (yyval.t_problem)->initial_state= (yyvsp[(1) - (2)].t_effect_lists);;}
    break;

  case 326:
#line 1469 "pddl+.y"
    {(yyval.t_problem)=(yyvsp[(2) - (2)].t_problem); (yyval.t_problem)->the_goal= (yyvsp[(1) - (2)].t_goal);;}
    break;

  case 327:
#line 1471 "pddl+.y"
    {(yyval.t_problem)=(yyvsp[(2) - (2)].t_problem); (yyval.t_problem)->constraints = (yyvsp[(1) - (2)].t_con_goal);;}
    break;

  case 328:
#line 1472 "pddl+.y"
    {(yyval.t_problem)=(yyvsp[(2) - (2)].t_problem); if((yyval.t_problem)->metric == 0) {(yyval.t_problem)->metric= (yyvsp[(1) - (2)].t_metric);}
											else {(yyval.t_problem)->metric->add((yyvsp[(1) - (2)].t_metric));};}
    break;

  case 329:
#line 1474 "pddl+.y"
    {(yyval.t_problem)=(yyvsp[(2) - (2)].t_problem); (yyval.t_problem)->length= (yyvsp[(1) - (2)].t_length_spec);;}
    break;

  case 330:
#line 1475 "pddl+.y"
    {(yyval.t_problem)=new problem;;}
    break;

  case 331:
#line 1478 "pddl+.y"
    {(yyval.t_const_symbol_list)=(yyvsp[(3) - (4)].t_const_symbol_list);;}
    break;

  case 332:
#line 1481 "pddl+.y"
    {(yyval.t_effect_lists)=(yyvsp[(3) - (4)].t_effect_lists);;}
    break;

  case 333:
#line 1484 "pddl+.y"
    {(yyval.vtab) = current_analysis->buildOpTab();;}
    break;

  case 334:
#line 1487 "pddl+.y"
    {(yyval.t_goal)=(yyvsp[(3) - (4)].t_goal);delete (yyvsp[(2) - (4)].vtab);;}
    break;

  case 335:
#line 1492 "pddl+.y"
    { (yyval.t_metric)= new metric_spec((yyvsp[(3) - (5)].t_optimization),(yyvsp[(4) - (5)].t_expression)); ;}
    break;

  case 336:
#line 1494 "pddl+.y"
    {yyerrok;
        log_error(E_FATAL,"Syntax error in metric declaration.");
        (yyval.t_metric)= NULL; ;}
    break;

  case 337:
#line 1501 "pddl+.y"
    {(yyval.t_length_spec)= new length_spec(E_BOTH,(yyvsp[(4) - (7)].ival),(yyvsp[(6) - (7)].ival));;}
    break;

  case 338:
#line 1504 "pddl+.y"
    {(yyval.t_length_spec) = new length_spec(E_SERIAL,(yyvsp[(4) - (5)].ival));;}
    break;

  case 339:
#line 1508 "pddl+.y"
    {(yyval.t_length_spec) = new length_spec(E_PARALLEL,(yyvsp[(4) - (5)].ival));;}
    break;

  case 340:
#line 1514 "pddl+.y"
    {(yyval.t_optimization)= E_MINIMIZE;;}
    break;

  case 341:
#line 1515 "pddl+.y"
    {(yyval.t_optimization)= E_MAXIMIZE;;}
    break;

  case 342:
#line 1520 "pddl+.y"
    {(yyval.t_expression)= (yyvsp[(2) - (3)].t_expression);;}
    break;

  case 343:
#line 1521 "pddl+.y"
    {(yyval.t_expression)= (yyvsp[(1) - (1)].t_func_term);;}
    break;

  case 344:
#line 1522 "pddl+.y"
    {(yyval.t_expression)= (yyvsp[(1) - (1)].t_num_expression);;}
    break;

  case 345:
#line 1523 "pddl+.y"
    { (yyval.t_expression)= new special_val_expr(E_TOTAL_TIME); ;}
    break;

  case 346:
#line 1525 "pddl+.y"
    {(yyval.t_expression) = new violation_term((yyvsp[(3) - (4)].cp));;}
    break;

  case 347:
#line 1526 "pddl+.y"
    { (yyval.t_expression)= new special_val_expr(E_TOTAL_TIME); ;}
    break;

  case 348:
#line 1530 "pddl+.y"
    { (yyval.t_expression)= new plus_expression((yyvsp[(2) - (3)].t_expression),(yyvsp[(3) - (3)].t_expression)); ;}
    break;

  case 349:
#line 1531 "pddl+.y"
    { (yyval.t_expression)= new minus_expression((yyvsp[(2) - (3)].t_expression),(yyvsp[(3) - (3)].t_expression)); ;}
    break;

  case 350:
#line 1532 "pddl+.y"
    { (yyval.t_expression)= new mul_expression((yyvsp[(2) - (3)].t_expression),(yyvsp[(3) - (3)].t_expression)); ;}
    break;

  case 351:
#line 1533 "pddl+.y"
    { (yyval.t_expression)= new div_expression((yyvsp[(2) - (3)].t_expression),(yyvsp[(3) - (3)].t_expression)); ;}
    break;

  case 352:
#line 1537 "pddl+.y"
    {(yyval.t_expression) = (yyvsp[(1) - (1)].t_expression);;}
    break;

  case 353:
#line 1539 "pddl+.y"
    {(yyval.t_expression) = new plus_expression((yyvsp[(1) - (2)].t_expression),(yyvsp[(2) - (2)].t_expression));;}
    break;

  case 354:
#line 1543 "pddl+.y"
    {(yyval.t_expression) = (yyvsp[(1) - (1)].t_expression);;}
    break;

  case 355:
#line 1545 "pddl+.y"
    {(yyval.t_expression) = new mul_expression((yyvsp[(1) - (2)].t_expression),(yyvsp[(2) - (2)].t_expression));;}
    break;

  case 356:
#line 1551 "pddl+.y"
    {(yyval.t_plan)= (yyvsp[(2) - (2)].t_plan);
         (yyval.t_plan)->push_front((yyvsp[(1) - (2)].t_step)); ;}
    break;

  case 357:
#line 1554 "pddl+.y"
    {(yyval.t_plan) = (yyvsp[(3) - (3)].t_plan);(yyval.t_plan)->insertTime((yyvsp[(2) - (3)].fval));;}
    break;

  case 358:
#line 1556 "pddl+.y"
    {(yyval.t_plan) = (yyvsp[(3) - (3)].t_plan);(yyval.t_plan)->insertTime((yyvsp[(2) - (3)].ival));;}
    break;

  case 359:
#line 1558 "pddl+.y"
    {(yyval.t_plan)= new plan;;}
    break;

  case 360:
#line 1563 "pddl+.y"
    {(yyval.t_step)=(yyvsp[(3) - (3)].t_step);
         (yyval.t_step)->start_time_given=1;
         (yyval.t_step)->start_time=(yyvsp[(1) - (3)].fval);;}
    break;

  case 361:
#line 1567 "pddl+.y"
    {(yyval.t_step)=(yyvsp[(1) - (1)].t_step);
	 (yyval.t_step)->start_time_given=0;;}
    break;

  case 362:
#line 1573 "pddl+.y"
    {(yyval.t_step)= (yyvsp[(1) - (4)].t_step);
	 (yyval.t_step)->duration_given=1;
         (yyval.t_step)->duration= (yyvsp[(3) - (4)].fval);;}
    break;

  case 363:
#line 1577 "pddl+.y"
    {(yyval.t_step)= (yyvsp[(1) - (1)].t_step);
         (yyval.t_step)->duration_given=0;;}
    break;

  case 364:
#line 1583 "pddl+.y"
    {(yyval.t_step)= new plan_step(
              current_analysis->op_tab.symbol_get((yyvsp[(2) - (4)].cp)),
	      (yyvsp[(3) - (4)].t_const_symbol_list)); delete [] (yyvsp[(2) - (4)].cp);
      ;}
    break;

  case 365:
#line 1590 "pddl+.y"
    {(yyval.fval)= (yyvsp[(1) - (1)].fval);;}
    break;

  case 366:
#line 1591 "pddl+.y"
    {(yyval.fval)= (float) (yyvsp[(1) - (1)].ival);;}
    break;


/* Line 1267 of yacc.c.  */
#line 4557 "pddl+.cpp"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 1594 "pddl+.y"


#include <cstdio>
#include <iostream>
int line_no= 1;
using std::istream;
#include "pddl+.lex.yy.h"

namespace VAL {
extern yyFlexLexer* yfl;
};


int yyerror(char * s)
{
    return 0;
}

int yylex()
{
    return yfl->yylex();
}

