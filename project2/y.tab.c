/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "test.y" /* yacc.c:339  */


  #include <stdlib.h>
  #include "stdio.h"
  #include "proj2.h"
  extern ILTree dummy;
  tree type_g = &dummy;
  int flag = 0;
/*  typedef union 
  {
   int intg;
   tree tptr;
  } YYSTYPE;
  */

  

#line 84 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ANDnum = 258,
    CLASSnum = 259,
    ASSGNnum = 260,
    COMMAnum = 261,
    DECLARATIONnum = 262,
    DIVIDEnum = 263,
    DOTnum = 264,
    ELSEnum = 265,
    ENDDECLARATIONSnum = 266,
    EQnum = 267,
    EQUALnum = 268,
    GEnum = 269,
    GTnum = 270,
    ICONSTnum = 271,
    IDnum = 272,
    IFnum = 273,
    INTnum = 274,
    LBRACEnum = 275,
    LBRACnum = 276,
    LEnum = 277,
    LPARENnum = 278,
    LTnum = 279,
    METHODnum = 280,
    MINUSnum = 281,
    NEnum = 282,
    NOTnum = 283,
    ORnum = 284,
    PLUSnum = 285,
    PROGRAMnum = 286,
    RBRACEnum = 287,
    RBRACnum = 288,
    RETURNnum = 289,
    RPARENnum = 290,
    SCONSTnum = 291,
    SEMInum = 292,
    TIMESnum = 293,
    VALnum = 294,
    VOIDnum = 295,
    WHILEnum = 296,
    EOFnum = 297
  };
#endif
/* Tokens.  */
#define ANDnum 258
#define CLASSnum 259
#define ASSGNnum 260
#define COMMAnum 261
#define DECLARATIONnum 262
#define DIVIDEnum 263
#define DOTnum 264
#define ELSEnum 265
#define ENDDECLARATIONSnum 266
#define EQnum 267
#define EQUALnum 268
#define GEnum 269
#define GTnum 270
#define ICONSTnum 271
#define IDnum 272
#define IFnum 273
#define INTnum 274
#define LBRACEnum 275
#define LBRACnum 276
#define LEnum 277
#define LPARENnum 278
#define LTnum 279
#define METHODnum 280
#define MINUSnum 281
#define NEnum 282
#define NOTnum 283
#define ORnum 284
#define PLUSnum 285
#define PROGRAMnum 286
#define RBRACEnum 287
#define RBRACnum 288
#define RETURNnum 289
#define RPARENnum 290
#define SCONSTnum 291
#define SEMInum 292
#define TIMESnum 293
#define VALnum 294
#define VOIDnum 295
#define WHILEnum 296
#define EOFnum 297

/* Value type.  */


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 214 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   202

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  112
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  191

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   297

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    34,    34,    38,    39,    42,    46,    47,    50,    51,
      54,    55,    58,    60,    63,    66,    68,    73,    74,    78,
      79,    83,    84,    85,    88,    91,    96,    98,   102,   106,
     108,   111,   112,   115,   120,   125,   130,   137,   140,   141,
     144,   148,   154,   155,   160,   163,   164,   167,   170,   173,
     176,   181,   182,   187,   188,   191,   194,   195,   198,   199,
     200,   201,   202,   203,   206,   210,   212,   216,   218,   222,
     224,   227,   228,   229,   231,   234,   238,   239,   242,   246,
     247,   251,   253,   255,   257,   259,   261,   265,   266,   267,
     269,   271,   275,   276,   279,   280,   281,   282,   285,   286,
     287,   288,   289,   292,   293,   296,   297,   300,   301,   304,
     305,   308,   309
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ANDnum", "CLASSnum", "ASSGNnum",
  "COMMAnum", "DECLARATIONnum", "DIVIDEnum", "DOTnum", "ELSEnum",
  "ENDDECLARATIONSnum", "EQnum", "EQUALnum", "GEnum", "GTnum", "ICONSTnum",
  "IDnum", "IFnum", "INTnum", "LBRACEnum", "LBRACnum", "LEnum",
  "LPARENnum", "LTnum", "METHODnum", "MINUSnum", "NEnum", "NOTnum",
  "ORnum", "PLUSnum", "PROGRAMnum", "RBRACEnum", "RBRACnum", "RETURNnum",
  "RPARENnum", "SCONSTnum", "SEMInum", "TIMESnum", "VALnum", "VOIDnum",
  "WHILEnum", "EOFnum", "$accept", "Program", "ClassDecl_m", "ClassDecl",
  "ClassBody", "Decls", "FieldDecl_m", "FieldDecl", "Field_1",
  "VariableDeclId", "BRACKET_m", "VariableInitializer", "ArrayInitializer",
  "VariableInitializer_c", "ArrayCreationExpression", "Array_c",
  "MethodDecl_m", "MethodDecl", "FormalParameterList", "Formal_c_m",
  "Formal_c", "IDnum_m", "Block", "Type", "Type_c", "Type_cc",
  "StatementList", "Statement_m", "Statement", "AssignmentStatement",
  "MethodCallStatement", "Expression_m", "ReturnStatement", "IfStatement",
  "If_c", "If_cc", "WhileStatement", "Expression", "Sim_c",
  "SimpleExpression", "AOrMT", "Term", "Factor", "UnsignedConstant",
  "Variable", "ID_c_m", "ID_c", "Expres_c", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297
};
# endif

#define YYPACT_NINF -133

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-133)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -7,    17,    35,    31,  -133,    67,    65,    67,  -133,    64,
    -133,     1,  -133,    58,  -133,    61,  -133,    73,    73,   114,
    -133,    87,    47,    -5,  -133,    75,  -133,  -133,  -133,  -133,
      89,  -133,     0,    96,    98,  -133,  -133,   105,    84,   107,
      87,   104,  -133,   115,   116,   108,   110,  -133,   111,  -133,
    -133,    10,   122,   104,   119,   134,   134,   134,  -133,     8,
    -133,  -133,  -133,  -133,   149,  -133,     2,  -133,  -133,   123,
      41,    72,   105,    48,  -133,   120,   119,    10,  -133,   119,
     127,    86,   117,     2,  -133,     2,    87,  -133,  -133,  -133,
    -133,  -133,  -133,   134,  -133,   134,   134,   119,   134,   134,
     134,    62,   136,    63,   135,   131,   121,  -133,    63,   132,
    -133,  -133,  -133,  -133,     3,  -133,   139,   119,  -133,  -133,
      11,  -133,  -133,     2,     2,     2,   130,  -133,  -133,  -133,
    -133,     7,  -133,   148,    -2,   154,  -133,  -133,   151,    63,
      54,  -133,    63,   119,  -133,  -133,   144,   104,  -133,   119,
    -133,  -133,   152,   119,   119,   119,    40,  -133,  -133,  -133,
    -133,  -133,   170,   163,  -133,     5,  -133,   148,  -133,  -133,
    -133,  -133,  -133,  -133,  -133,  -133,   154,  -133,   154,  -133,
    -133,   154,   172,   119,   152,  -133,  -133,  -133,   154,  -133,
    -133
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     2,     4,     0,
       3,     0,     5,     0,     7,     0,     9,    49,    50,     0,
      11,     0,     0,     0,    32,     0,    47,    48,     8,    10,
      18,    12,     0,     0,     0,     6,    31,    54,     0,    17,
       0,     0,    15,     0,     0,     0,    51,    20,     0,    13,
     103,   106,     0,     0,     0,     0,     0,     0,   104,     0,
      22,    23,   100,    21,    79,    87,    88,    94,    98,    99,
       0,     0,    54,     0,    19,     0,     0,   105,   108,     0,
      28,     0,     0,    93,   102,    92,     0,    16,    83,    85,
      86,    81,    82,     0,    84,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    37,    39,     0,     0,
      53,    52,   110,   112,     0,   107,     0,     0,    25,    27,
       0,   101,    14,    90,    91,    89,    80,    97,    96,    95,
      65,     0,    68,    44,    63,     0,    36,    46,     0,     0,
       0,    34,     0,     0,   109,    30,     0,     0,    24,     0,
      66,    43,    41,     0,    70,     0,     0,    57,    58,    59,
      60,    61,    71,     0,    62,     0,    45,    44,    35,    38,
      33,   111,    29,    26,    67,    42,     0,    69,     0,    55,
      56,    77,    72,     0,    40,    75,    78,    74,    76,    64,
      73
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -133,  -133,  -133,   176,  -133,   173,  -133,   166,   -36,  -133,
    -133,   -51,  -133,  -133,  -133,  -133,  -133,   164,   118,  -133,
      46,    21,  -101,   -21,   174,   124,  -132,  -133,    34,  -133,
    -108,  -133,  -133,  -133,    28,  -133,  -133,   -54,  -133,    97,
    -133,   -34,   -45,  -133,  -105,  -133,   125,  -133
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     7,     8,    12,   135,    19,    20,    31,    32,
      39,    59,    60,   120,    61,    80,    23,    24,   105,   106,
     107,   152,   136,    21,    26,    46,   137,   156,   157,   158,
      62,   131,   160,   161,   162,   163,   164,    63,    97,    64,
      65,    66,    67,    68,    69,    77,    78,   114
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      82,    34,    81,   166,    49,    98,    40,   141,    13,   143,
      99,    84,    41,   149,    86,    51,   153,   147,   183,    75,
      22,    83,   113,    85,     1,   116,   159,    35,   101,   165,
     119,    76,   154,    14,     3,     4,   144,    42,   168,   155,
     100,   170,   150,   148,   185,    87,   186,   132,   159,   187,
     122,   165,   111,   127,   128,   129,   190,    51,   153,   123,
     102,   124,   125,   146,    17,    17,    18,    18,     5,    16,
      13,     6,   179,   102,   154,    17,   103,    18,    50,    51,
     104,   155,     9,   134,    11,    54,    22,    33,    55,   171,
      56,   102,    57,   104,    25,   174,   173,   130,    58,   176,
     177,   178,    50,    51,    30,    52,    53,   108,    37,    54,
      38,   104,    55,    43,    56,    44,    57,    47,   118,    73,
      50,    51,    58,    52,    53,    28,    45,    54,    48,   189,
      55,    17,    56,    18,    57,    50,    51,   112,    70,    71,
      58,    72,    54,    79,    74,    55,   101,    56,   117,    57,
      50,    51,   121,   133,   138,    58,    93,    54,   140,    95,
      96,    88,    56,    89,    90,   151,   139,   142,   167,   175,
      58,    91,   145,    92,   134,    93,    94,   172,    95,    96,
     181,   153,   188,    10,    15,    29,   169,    36,   184,   109,
     180,   182,    27,     0,   126,     0,   110,     0,     0,     0,
       0,     0,   115
};

static const yytype_int16 yycheck[] =
{
      54,    22,    53,   135,    40,     3,     6,   108,     7,     6,
       8,    56,    12,     6,     6,    17,    18,     6,    13,     9,
      25,    55,    76,    57,    31,    79,   134,    32,    23,   134,
      81,    21,    34,    32,    17,     0,    33,    37,   139,    41,
      38,   142,    35,    32,   176,    37,   178,   101,   156,   181,
      86,   156,    73,    98,    99,   100,   188,    17,    18,    93,
      19,    95,    96,   117,    17,    17,    19,    19,    37,    11,
       7,     4,    32,    19,    34,    17,    35,    19,    16,    17,
      39,    41,    17,    20,    20,    23,    25,    40,    26,   143,
      28,    19,    30,    39,    21,   149,   147,    35,    36,   153,
     154,   155,    16,    17,    17,    19,    20,    35,    33,    23,
      21,    39,    26,    17,    28,    17,    30,    33,    32,     9,
      16,    17,    36,    19,    20,    11,    21,    23,    21,   183,
      26,    17,    28,    19,    30,    16,    17,    17,    23,    23,
      36,    33,    23,    21,    33,    26,    23,    28,    21,    30,
      16,    17,    35,    17,    19,    36,    26,    23,    37,    29,
      30,    12,    28,    14,    15,    17,    35,    35,    17,    17,
      36,    22,    33,    24,    20,    26,    27,    33,    29,    30,
      10,    18,    10,     7,    11,    19,   140,    23,   167,    71,
     156,   163,    18,    -1,    97,    -1,    72,    -1,    -1,    -1,
      -1,    -1,    77
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    31,    44,    17,     0,    37,     4,    45,    46,    17,
      46,    20,    47,     7,    32,    48,    11,    17,    19,    49,
      50,    66,    25,    59,    60,    21,    67,    67,    11,    50,
      17,    51,    52,    40,    66,    32,    60,    33,    21,    53,
       6,    12,    37,    17,    17,    21,    68,    33,    21,    51,
      16,    17,    19,    20,    23,    26,    28,    30,    36,    54,
      55,    57,    73,    80,    82,    83,    84,    85,    86,    87,
      23,    23,    33,     9,    33,     9,    21,    88,    89,    21,
      58,    54,    80,    84,    85,    84,     6,    37,    12,    14,
      15,    22,    24,    26,    27,    29,    30,    81,     3,     8,
      38,    23,    19,    35,    39,    61,    62,    63,    35,    61,
      68,    66,    17,    80,    90,    89,    80,    21,    32,    54,
      56,    35,    51,    84,    84,    84,    82,    85,    85,    85,
      35,    74,    80,    17,    20,    48,    65,    69,    19,    35,
      37,    65,    35,     6,    33,    33,    80,     6,    32,     6,
      35,    17,    64,    18,    34,    41,    70,    71,    72,    73,
      75,    76,    77,    78,    79,    87,    69,    17,    65,    63,
      65,    80,    33,    54,    80,    17,    80,    80,    80,    32,
      71,    10,    77,    13,    64,    69,    69,    69,    10,    80,
      69
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    43,    44,    45,    45,    46,    47,    47,    48,    48,
      49,    49,    50,    51,    51,    51,    51,    52,    52,    53,
      53,    54,    54,    54,    55,    55,    56,    56,    57,    58,
      58,    59,    59,    60,    60,    60,    60,    61,    62,    62,
      63,    63,    64,    64,    64,    65,    65,    66,    66,    66,
      66,    67,    67,    68,    68,    69,    70,    70,    71,    71,
      71,    71,    71,    71,    72,    73,    73,    74,    74,    75,
      75,    76,    76,    76,    76,    77,    78,    78,    79,    80,
      80,    81,    81,    81,    81,    81,    81,    82,    82,    82,
      82,    82,    83,    83,    84,    84,    84,    84,    85,    85,
      85,    85,    85,    86,    86,    87,    87,    88,    88,    89,
      89,    90,    90
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     2,     1,     3,     4,     2,     3,     2,
       2,     1,     2,     3,     5,     2,     4,     2,     1,     3,
       2,     1,     1,     1,     4,     3,     3,     1,     2,     4,
       3,     2,     1,     7,     6,     7,     6,     1,     3,     1,
       4,     3,     2,     1,     0,     2,     1,     2,     2,     1,
       1,     3,     5,     3,     0,     3,     2,     1,     1,     1,
       1,     1,     1,     0,     3,     3,     4,     3,     1,     2,
       1,     1,     2,     4,     3,     3,     3,     2,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     2,     2,     1,     3,     3,     3,     1,     1,
       1,     3,     2,     1,     1,     2,     1,     2,     1,     3,
       2,     3,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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
#line 34 "test.y" /* yacc.c:1646  */
    { printf("aaaaaa"); (yyval.tptr) =            
            MakeTree(ProgramOp, (yyvsp[0].tptr), MakeLeaf(IDNode, (yyvsp[-2].intg))); printtree((yyval.tptr), 0);}
#line 1442 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 38 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MakeTree(ClassOp, (yyvsp[-1].tptr), (yyvsp[0].tptr)); }
#line 1448 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 39 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MakeTree(ClassOp, NullExp(), (yyvsp[0].tptr)); }
#line 1454 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 42 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MakeTree(ClassDefOp, (yyvsp[0].tptr),
              MakeLeaf(IDNode, (yyvsp[-1].intg))); }
#line 1461 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 46 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MkLeftC((yyvsp[-2].tptr), (yyvsp[-1].tptr)); }
#line 1467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 47 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = NullExp(); }
#line 1473 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 50 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = (yyvsp[-1].tptr); }
#line 1479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 51 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = NullExp(); }
#line 1485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 54 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MakeTree( BodyOp, (yyvsp[-1].tptr), (yyvsp[0].tptr)); }
#line 1491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 55 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MakeTree(BodyOp, NullExp(), (yyvsp[0].tptr)); }
#line 1497 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 58 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = (yyvsp[0].tptr); }
#line 1503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 60 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MkLeftC(MakeTree(DeclOp,
            NullExp(), MakeTree(CommaOp, (yyvsp[-2].tptr), MakeTree(CommaOp, type_g, NullExp()))), 
            (yyvsp[0].tptr)); }
#line 1511 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 63 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) =
            MkLeftC(MakeTree(DeclOp, NullExp(), MakeTree(CommaOp, (yyvsp[-4].tptr),
            MakeTree(CommaOp, (yyvsp[-4].tptr), MakeTree(COMMAnum, type_g, (yyvsp[-2].tptr))))), (yyvsp[-2].tptr)); }
#line 1519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 66 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MakeTree(DeclOp, NullExp(),
            MakeTree(CommaOp, (yyvsp[-1].tptr), MakeTree(CommaOp, type_g, NullExp()))); }
#line 1526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 68 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) =
            MakeTree(DeclOp, NullExp(), MakeTree(CommaOp, (yyvsp[-3].tptr), MakeTree(CommaOp,
            type_g, (yyvsp[-1].tptr)))); }
#line 1534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 73 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MakeLeaf(IDNode, (yyvsp[-1].intg)); }
#line 1540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 74 "test.y" /* yacc.c:1646  */
    {  (yyval.tptr) = MakeLeaf(IDNode, (yyvsp[0].intg)); }
#line 1546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 85 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = (yyvsp[0].tptr); }
#line 1552 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 89 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MakeTree(ArrayTypeOp,
                     MkLeftC(MakeTree(CommaOp, NullExp(), (yyvsp[-2].tptr)), (yyvsp[-1].tptr)), type_g);}
#line 1559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 91 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) =
                     MakeTree(ArrayTypeOp, MakeTree(CommaOp, NullExp(), (yyvsp[-1].tptr)),
                     type_g); }
#line 1567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 96 "test.y" /* yacc.c:1646  */
    {
                          (yyval.tptr) = MakeTree(CommaOp, (yyvsp[-2].tptr), (yyvsp[0].tptr)); }
#line 1574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 98 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MakeTree(CommaOp,
                          NullExp(), (yyvsp[0].tptr)); }
#line 1581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 102 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MakeTree(ArrayTypeOp, (yyvsp[0].tptr),
                             MakeLeaf(INTEGERTNode, 0)); }
#line 1588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 106 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MakeTree(BodyOp, (yyvsp[-3].tptr),
            (yyvsp[-1].tptr)); }
#line 1595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 108 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MakeTree(BodyOp, NullExp(), (yyvsp[-1].tptr)); }
#line 1601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 111 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MakeTree(BodyOp, (yyvsp[-1].tptr), (yyvsp[0].tptr)); }
#line 1607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 112 "test.y" /* yacc.c:1646  */
    {(yyval.tptr) = MakeTree(BodyOp, NullExp(), (yyvsp[0].tptr)); }
#line 1613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 116 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MakeTree(MethodOp, MakeTree(HeadOp,
               MakeLeaf(IDNode, (yyvsp[-4].intg)), (yyvsp[-2].tptr)), (yyvsp[0].tptr)); 
               type_g = (yyvsp[-5].tptr);
               }
#line 1622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 120 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) =
               MakeTree(MethodOp, MakeTree(HeadOp, MakeLeaf(IDNode, (yyvsp[-3].intg)),
               NullExp()), (yyvsp[0].tptr)); 
               type_g = (yyvsp[-4].tptr);
               }
#line 1632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 126 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MakeTree(MethodOp, MakeTree(HeadOp, MakeLeaf(IDNode,
               (yyvsp[-4].intg)), (yyvsp[-2].tptr)), (yyvsp[0].tptr)); 
               type_g = NullExp();
               }
#line 1641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 130 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) =
               MakeTree(MethodOp, MakeTree(HeadOp, MakeLeaf(IDNode, (yyvsp[-3].intg)),
               NullExp()), (yyvsp[0].tptr)); 
               type_g = NullExp();
               }
#line 1651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 137 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MakeTree(SpecOp, (yyvsp[0].tptr), type_g); }
#line 1657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 140 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MkRightC((yyvsp[-2].tptr), (yyvsp[-1].intg)); }
#line 1663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 141 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = (yyvsp[0].tptr); }
#line 1669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 144 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MakeTree(VArgTypeOp,
            MakeTree(CommaOp, MakeLeaf(IDNode, (yyvsp[-1].intg)), MakeLeaf(INTEGERTNode, 0)), (yyvsp[0].tptr)); 
            flag = 1;
            }
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 148 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MakeTree(RArgTypeOp, MakeTree(CommaOp,
            MakeLeaf(IDNode, (yyvsp[-1].intg)), MakeLeaf(INTEGERTNode, 0)), (yyvsp[0].tptr)); 
            flag = 0;
            }
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 154 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MkRightC((yyvsp[-1].tptr), (yyvsp[0].intg)); }
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 155 "test.y" /* yacc.c:1646  */
    { 
            if (flag == 0) { (yyval.tptr) = MakeTree(RArgTypeOp, MakeTree(CommaOp,
            MakeLeaf(IDNode, (yyvsp[0].intg)), MakeLeaf(INTEGERTNode, 0)), NullExp()); }
            else { (yyval.tptr) = MakeTree(VArgTypeOp, MakeTree(CommaOp, MakeLeaf(IDNode,
            (yyvsp[0].intg)), MakeLeaf(INTEGERTNode, 0)), NullExp()); }}
#line 1703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 160 "test.y" /* yacc.c:1646  */
    {(yyval.tptr) = NullExp();}
#line 1709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 163 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MakeTree(BodyOp, (yyvsp[-1].tptr), (yyvsp[0].tptr)); }
#line 1715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 164 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MakeTree(BodyOp, NullExp(), (yyvsp[0].tptr)); }
#line 1721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 167 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MakeTree(TypeIdOp, MakeLeaf(IDNode, (yyvsp[-1].intg)), (yyvsp[0].tptr)); 
        type_g = (yyval.tptr);
        }
#line 1729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 170 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MakeTree(TypeIdOp, MakeLeaf(INTEGERTNode, (yyvsp[-1].intg)), (yyvsp[0].tptr)); 
        type_g = (yyval.tptr);
        }
#line 1737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 173 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MakeTree(TypeIdOp, MakeLeaf(IDNode, (yyvsp[0].intg)), NullExp()); 
        type_g = (yyval.tptr);
        }
#line 1745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 176 "test.y" /* yacc.c:1646  */
    {  (yyval.tptr) = MakeTree(TypeIdOp, MakeLeaf(INTEGERTNode, (yyvsp[0].intg)), NullExp()); 
        type_g = (yyval.tptr);
        }
#line 1753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 181 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = (yyvsp[0].tptr); }
#line 1759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 182 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) =
        MkRightC(MakeTree(IndexOp, NullExp(), MakeTree(FieldOp, (yyvsp[0].tptr), NullExp())),
        (yyvsp[-2].tptr)); }
#line 1767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 187 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MakeTree(IndexOp, NullExp(), (yyvsp[0].tptr)); }
#line 1773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 188 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = NullExp(); }
#line 1779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 191 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = (yyvsp[-1].tptr); }
#line 1785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 194 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MakeTree(StmtOp, (yyvsp[-1].tptr), (yyvsp[0].tptr)); }
#line 1791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 195 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MakeTree(StmtOp, NullExp(), (yyvsp[0].tptr)); }
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 203 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = NullExp();}
#line 1803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 206 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MakeTree(AssignOp,
                       MakeTree(AssignOp, NullExp(), (yyvsp[-2].tptr)), (yyvsp[0].tptr)); }
#line 1810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 210 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) =
                       MakeTree(RoutineCallOp, (yyvsp[-2].tptr), NullExp()); }
#line 1817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 212 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) =
                       MakeTree(RoutineCallOp, (yyvsp[-3].tptr), (yyvsp[-1].tptr)); }
#line 1824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 216 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MakeTree(CommaOp, (yyvsp[0].tptr),
                (yyvsp[-2].tptr));}
#line 1831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 218 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MakeTree(CommaOp, (yyvsp[0].tptr), NullExp()); }
#line 1837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 222 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MakeTree(ReturnOp, (yyvsp[0].tptr),
                   NullExp()); }
#line 1844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 224 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MakeTree(ReturnOp, NullExp(), NullExp()); }
#line 1850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 227 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = (yyvsp[0].tptr); }
#line 1856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 228 "test.y" /* yacc.c:1646  */
    { MkLeftC((yyvsp[-1].tptr), (yyvsp[0].tptr)); }
#line 1862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 229 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MakeTree(IfElseOp,
               MkLeftC((yyvsp[-3].tptr), (yyvsp[-2].tptr)), (yyvsp[0].tptr)); }
#line 1869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 231 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MakeTree(IfElseOp, (yyvsp[-2].tptr), (yyvsp[0].tptr)); }
#line 1875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 234 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MakeTree(IfElseOp, NullExp(),
        MakeTree(CommaOp, (yyvsp[-1].tptr), (yyvsp[0].tptr))); }
#line 1882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 238 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MkLeftC((yyvsp[-2].tptr), (yyvsp[-1].tptr)); }
#line 1888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 239 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = (yyvsp[-1].tptr); }
#line 1894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 242 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MakeTree(LoopOp, (yyvsp[-1].tptr),
                  (yyvsp[0].tptr)); }
#line 1901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 246 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = (yyvsp[0].tptr); }
#line 1907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 247 "test.y" /* yacc.c:1646  */
    { MkLeftC((yyvsp[-2].tptr), (yyvsp[-1].tptr)); (yyval.tptr)
              = MkRightC((yyvsp[0].tptr), (yyvsp[-1].tptr));}
#line 1914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 252 "test.y" /* yacc.c:1646  */
    {MakeTree(LEOp, NullExp(), NullExp()); }
#line 1920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 254 "test.y" /* yacc.c:1646  */
    {MakeTree(LTOp, NullExp(), NullExp()); }
#line 1926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 256 "test.y" /* yacc.c:1646  */
    {MakeTree(EQOp, NullExp(), NullExp()); }
#line 1932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 258 "test.y" /* yacc.c:1646  */
    {MakeTree(NEOp, NullExp(), NullExp()); }
#line 1938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 260 "test.y" /* yacc.c:1646  */
    {MakeTree(GEOp, NullExp(), NullExp()); }
#line 1944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 262 "test.y" /* yacc.c:1646  */
    {MakeTree(GTOp, NullExp(), NullExp()); }
#line 1950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 265 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = (yyvsp[0].tptr); }
#line 1956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 266 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = (yyvsp[0].tptr); }
#line 1962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 267 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MakeTree(AddOp, (yyvsp[-2].tptr),
                    (yyvsp[0].tptr)); }
#line 1969 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 269 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MakeTree(SubOp, (yyvsp[-2].tptr),
                    (yyvsp[0].tptr)); }
#line 1976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 271 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MakeTree(OrOp, (yyvsp[-2].tptr),
                    (yyvsp[0].tptr)); }
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 275 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = (yyvsp[0].tptr); }
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 276 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MakeTree(UnaryNegOp, (yyvsp[0].tptr), NullExp()); }
#line 1995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 279 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = (yyvsp[0].tptr); }
#line 2001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 280 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MakeTree(MultOp, (yyvsp[-2].tptr), (yyvsp[0].tptr)); }
#line 2007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 281 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MakeTree(DivOp, (yyvsp[-2].tptr), (yyvsp[0].tptr)); }
#line 2013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 282 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MakeTree(AndOp, (yyvsp[-2].tptr), (yyvsp[0].tptr)); }
#line 2019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 285 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = (yyvsp[0].tptr); }
#line 2025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 286 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = (yyvsp[0].tptr); }
#line 2031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 287 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = (yyvsp[0].tptr); }
#line 2037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 288 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = (yyvsp[-1].tptr); }
#line 2043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 289 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MakeTree(NotOp, (yyvsp[0].tptr), NullExp()); }
#line 2049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 292 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MakeLeaf(NUMNode, (yyvsp[0].intg)); }
#line 2055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 293 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MakeLeaf(STRINGNode, (yyvsp[0].intg)); }
#line 2061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 296 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MakeTree(VarOp, MakeLeaf(IDNode, (yyvsp[-1].intg)), (yyvsp[0].tptr)); }
#line 2067 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 297 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MakeTree(VarOp, MakeLeaf(IDNode, (yyvsp[0].intg)), NullExp()); }
#line 2073 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 300 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MakeTree(SelectOp, (yyvsp[0].tptr), (yyvsp[-1].tptr)); }
#line 2079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 301 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MakeTree(SelectOp, (yyvsp[0].tptr), NullExp()); }
#line 2085 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 304 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = (yyvsp[-1].tptr); }
#line 2091 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 305 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MakeTree(FieldOp, MakeLeaf(IDNode, (yyvsp[0].intg)), NullExp()); }
#line 2097 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 308 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MakeTree(IndexOp, (yyvsp[0].tptr), (yyvsp[-2].tptr)); }
#line 2103 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 309 "test.y" /* yacc.c:1646  */
    { (yyval.tptr) = MakeTree(IndexOp, (yyvsp[0].tptr), NullExp()); }
#line 2109 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2113 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 312 "test.y" /* yacc.c:1906  */

 int yyline, yycolumn;
 extern FILE *treelst;
 int main(void) {
   treelst = stdout;
   printf("test main function;\n");
   yyparse();
  }

 void yyerror(char *s) {
   printf("yyerror: %s at line %d \n", s, yyline);
 }

