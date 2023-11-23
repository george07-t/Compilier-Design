
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "1907114.y"

    #include<stdio.h>
    #include<math.h>
    #include<string.h>
    #include<limits.h>
    #include<float.h>
    void yyerror(char *);
    extern int yylex();
    extern int yyparse();
    extern FILE *yyin;
    extern FILE *yyout;

    typedef struct {
        char name[100];
        char vas[100];
        int val;
        float vall;

    }store ;
    store symbol_table[200];

    typedef struct{
        char array_name[100];
        int arr[1000];
        int limit;
    }listt;
    listt list[50];
    
    typedef struct{
    	char func_name[100];
    }funlists;
    funlists funlist[50];	

    int count,sw,dv,iff,array_counter,case_state,fun_counter;
    store find_value(char **sym);
    int add_value(char **sym);
    int find_array_value(char **sym,int j);
    int add_array_value(char **sym,int j);


/* Line 189 of yacc.c  */
#line 114 "1907114.tab.c"

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT = 258,
     INTT = 259,
     FL = 260,
     FLOAT = 261,
     ID = 262,
     STRING = 263,
     STT = 264,
     VOID = 265,
     AN = 266,
     INIT = 267,
     EQ = 268,
     NEQ = 269,
     GEQ = 270,
     LEQ = 271,
     STOP = 272,
     GOING = 273,
     LOOP = 274,
     FUN = 275,
     MAIN = 276,
     HED = 277,
     FF = 278,
     FFE = 279,
     FFND = 280,
     FOR = 281,
     SWIT = 282,
     ALT = 283,
     WHILE = 284,
     COL = 285,
     INC = 286,
     DEC = 287,
     MIN = 288,
     MAX = 289,
     GCD = 290,
     SHOWI = 291,
     DO = 292,
     PRIME = 293,
     NON = 294,
     POW = 295,
     SHOWF = 296,
     PFA = 297,
     SINE = 298,
     COS = 299,
     TAN = 300,
     CMT = 301,
     HEAD = 302,
     ABS = 303,
     FLOOR = 304,
     CEIL = 305,
     RET = 306,
     SHOWS = 307,
     PFSN = 308,
     LEN = 309,
     CMP = 310,
     CAT = 311,
     CPY = 312,
     END = 313,
     GIVEI = 314,
     GIVEF = 315
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 41 "1907114.y"

    struct use
    {
        int ival;
        float fval;
        char *str;
        char *st;
    }variable;



/* Line 214 of yacc.c  */
#line 222 "1907114.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 234 "1907114.tab.c"

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
# if YYENABLE_NLS
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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   656

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  76
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  116
/* YYNRULES -- Number of states.  */
#define YYNSTATES  393

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   315

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    75,     2,     2,
      65,    66,    63,    61,    70,    62,     2,    64,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    67,     2,
      71,     2,    72,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    73,     2,    74,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    68,     2,    69,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    37,
      39,    41,    43,    50,    56,    59,    61,    68,    75,    80,
      85,    90,    99,   101,   108,   114,   123,   137,   142,   149,
     156,   161,   168,   175,   182,   187,   192,   197,   204,   209,
     214,   216,   217,   224,   229,   233,   235,   237,   239,   241,
     245,   247,   249,   254,   259,   264,   269,   274,   276,   278,
     280,   282,   286,   290,   294,   298,   302,   306,   310,   314,
     318,   323,   328,   333,   338,   343,   348,   352,   356,   360,
     364,   368,   372,   374,   376,   378,   380,   388,   397,   406,
     415,   424,   429,   434,   436,   443,   451,   455,   472,   489,
     503,   512,   526,   541,   556,   566,   571
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      77,     0,    -1,    -1,    77,    78,    -1,    82,    -1,    83,
      -1,    84,    -1,    85,    -1,   108,    -1,   111,    -1,   112,
      -1,   115,    -1,   116,    -1,   117,    -1,    86,    -1,    87,
      -1,    89,    -1,    88,    -1,    80,    -1,    81,    -1,    79,
      -1,    22,    -1,    92,    21,    65,    66,    67,    68,    -1,
      51,    65,    94,    66,    69,    -1,    12,    83,    -1,    91,
      -1,    59,    65,    93,    70,     3,    66,    -1,    60,    65,
      93,    70,     6,    66,    -1,    36,    65,    94,    66,    -1,
      41,    65,    94,    66,    -1,    52,    65,    94,    66,    -1,
      42,    65,    71,    11,    70,     3,    72,    66,    -1,    58,
      -1,    11,    67,    92,    73,    94,    74,    -1,    68,    11,
      70,    94,    69,    -1,    68,    11,    70,    94,    69,    71,
      71,    94,    -1,    92,    20,    65,    94,    70,    94,    70,
      66,    67,    68,    94,    90,    69,    -1,    54,    65,    94,
      66,    -1,    55,    65,    94,    70,    94,    66,    -1,    56,
      65,    94,    70,    94,    66,    -1,    38,    65,    94,    66,
      -1,    33,    65,    94,    70,    94,    66,    -1,    34,    65,
      94,    70,    94,    66,    -1,    35,    65,    94,    70,    94,
      66,    -1,    43,    65,    94,    66,    -1,    44,    65,    94,
      66,    -1,    45,    65,    94,    66,    -1,    40,    65,    94,
      70,    94,    66,    -1,    49,    65,    94,    66,    -1,    50,
      65,    94,    66,    -1,    51,    -1,    -1,    93,    67,    92,
      71,    71,    94,    -1,    93,    71,    71,    94,    -1,    93,
      67,    92,    -1,     4,    -1,     5,    -1,     9,    -1,    10,
      -1,    93,    70,     7,    -1,     7,    -1,   107,    -1,    61,
      65,    95,    66,    -1,    62,    65,    96,    66,    -1,    63,
      65,    97,    66,    -1,    64,    65,    98,    66,    -1,    75,
      65,    99,    66,    -1,   100,    -1,    86,    -1,    88,    -1,
     115,    -1,    94,    70,    94,    -1,    94,    70,    61,    -1,
      61,    70,    94,    -1,    94,    70,    94,    -1,    94,    70,
      62,    -1,    62,    70,    94,    -1,    94,    70,    94,    -1,
      94,    70,    94,    -1,    94,    70,    94,    -1,    72,    65,
     101,    66,    -1,    71,    65,   102,    66,    -1,    13,    65,
     103,    66,    -1,    14,    65,   104,    66,    -1,    15,    65,
     105,    66,    -1,    16,    65,   106,    66,    -1,    94,    70,
     107,    -1,    94,    70,   107,    -1,    94,    70,   107,    -1,
      94,    70,   107,    -1,    94,    70,   107,    -1,    94,    70,
     107,    -1,     3,    -1,     6,    -1,     8,    -1,     7,    -1,
      23,    73,   100,    74,    68,    94,    69,    -1,    23,    73,
     100,    74,    68,    94,    69,   109,    -1,    23,    73,   100,
      74,    68,    94,    69,   110,    -1,    24,    73,   100,    74,
      68,    94,    69,   109,    -1,    24,    73,   100,    74,    68,
      94,    69,   110,    -1,    25,    68,    94,    69,    -1,    27,
      73,    94,    74,    -1,   113,    -1,    28,    73,    94,    74,
      67,    94,    -1,    28,    73,    94,    74,    67,    94,   114,
      -1,    39,    67,    94,    -1,    26,    73,    94,    70,    71,
      65,    94,    70,    94,    66,    70,    94,    74,    68,    94,
      69,    -1,    26,    73,    94,    70,    72,    65,    94,    70,
      94,    66,    70,    94,    74,    68,    94,    69,    -1,    29,
      73,    71,    65,    94,    70,    94,    66,    74,    68,    94,
     118,    69,    -1,    29,    73,    94,    74,    68,    94,   118,
      69,    -1,    29,    73,    72,    65,    94,    70,    94,    66,
      74,    68,    94,   118,    69,    -1,    37,    68,    94,   118,
      69,    19,    73,    71,    65,    94,    70,    94,    66,    74,
      -1,    37,    68,    94,   118,    69,    19,    73,    71,    65,
      94,    70,    94,    66,    74,    -1,    37,    68,    94,   118,
      69,    19,    73,    94,    74,    -1,    17,    65,    94,    66,
      -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    60,    60,    61,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    83,    86,    90,    93,    97,   101,   105,   112,   115,
     118,   121,   122,   126,   143,   147,   151,   157,   158,   159,
     160,   189,   200,   211,   230,   231,   232,   233,   234,   235,
     239,   240,   244,   266,   285,   296,   297,   298,   299,   303,
     304,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   320,   321,   322,   325,   326,   327,   330,   333,   336,
     340,   341,   342,   343,   344,   345,   349,   352,   355,   358,
     361,   364,   368,   369,   370,   371,   377,   384,   391,   404,
     411,   423,   430,   438,   448,   456,   466,   472,   480,   489,
     500,   511,   523,   534,   545,   558,   559
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "INTT", "FL", "FLOAT", "ID",
  "STRING", "STT", "VOID", "AN", "INIT", "EQ", "NEQ", "GEQ", "LEQ", "STOP",
  "GOING", "LOOP", "FUN", "MAIN", "HED", "FF", "FFE", "FFND", "FOR",
  "SWIT", "ALT", "WHILE", "COL", "INC", "DEC", "MIN", "MAX", "GCD",
  "SHOWI", "DO", "PRIME", "NON", "POW", "SHOWF", "PFA", "SINE", "COS",
  "TAN", "CMT", "HEAD", "ABS", "FLOOR", "CEIL", "RET", "SHOWS", "PFSN",
  "LEN", "CMP", "CAT", "CPY", "END", "GIVEI", "GIVEF", "'+'", "'-'", "'*'",
  "'/'", "'('", "')'", "':'", "'{'", "'}'", "','", "'<'", "'>'", "'['",
  "']'", "'%'", "$accept", "program", "statement", "hed", "main", "end",
  "declaration", "assignments", "input", "display", "array",
  "array_assignment", "function", "built_func", "return", "assignment",
  "type", "var", "expr", "add", "sub", "mul", "div", "mod", "condition",
  "great", "less", "equal", "notequal", "eqgreat", "eqless", "factor",
  "if_else", "elseif", "else", "switch_", "case", "cases", "df", "for",
  "while", "do_while", "break_con", 0
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
     315,    43,    45,    42,    47,    40,    41,    58,   123,   125,
      44,    60,    62,    91,    93,    37
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    76,    77,    77,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    79,    80,    81,    82,    83,    84,    84,    85,    85,
      85,    85,    85,    86,    86,    87,    88,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      90,    90,    91,    91,    91,    92,    92,    92,    92,    93,
      93,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    95,    95,    95,    96,    96,    96,    97,    98,    99,
     100,   100,   100,   100,   100,   100,   101,   102,   103,   104,
     105,   106,   107,   107,   107,   107,   108,   108,   108,   109,
     109,   110,   111,   112,   113,   113,   114,   115,   115,   116,
     116,   116,   117,   117,   117,   118,   118
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     6,     5,     2,     1,     6,     6,     4,     4,
       4,     8,     1,     6,     5,     8,    13,     4,     6,     6,
       4,     6,     6,     6,     4,     4,     4,     6,     4,     4,
       1,     0,     6,     4,     3,     1,     1,     1,     1,     3,
       1,     1,     4,     4,     4,     4,     4,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       4,     4,     4,     4,     4,     4,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     1,     7,     8,     8,     8,
       8,     4,     4,     1,     6,     7,     3,    16,    16,    13,
       8,    13,    14,    14,     9,     4,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,    55,    56,    60,    57,    58,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    32,     0,     0,     0,     3,
      20,    18,    19,     4,     5,     6,     7,    14,    15,    17,
      16,    25,     0,     0,     8,     9,    10,   103,    11,    12,
      13,     0,    24,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,    93,    95,    94,     0,     0,     0,
       0,     0,     0,    68,    69,     0,     0,    67,    61,    70,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   116,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    54,
      59,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   102,     0,     0,
       0,     0,     0,     0,     0,    28,     0,     0,    40,     0,
      29,     0,    44,    45,    46,    48,    49,     0,    30,    37,
       0,     0,     0,     0,     0,     0,     0,     0,    53,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    23,
       0,     0,     0,     0,    34,     0,     0,     0,    33,     0,
      82,     0,    83,     0,    84,     0,    85,     0,    81,     0,
      80,     0,     0,     0,    62,     0,     0,    63,     0,    64,
       0,    65,     0,     0,    66,     0,     0,   104,     0,     0,
     116,    41,    42,    43,     0,     0,    47,     0,    38,    39,
      26,    27,     0,     0,    22,    52,    88,    89,    90,    91,
      87,    86,    96,    73,    72,    71,    76,    75,    74,    77,
      78,    34,    79,     0,     0,     0,   105,     0,    61,     0,
      61,     0,   115,     0,     0,     0,     0,     0,     0,    97,
      98,     0,     0,     0,     0,     0,   110,     0,     0,    31,
      35,     0,     0,     0,     0,     0,   106,     0,     0,     0,
     114,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   101,     0,     0,   116,   116,     0,    51,     0,     0,
       0,     0,     0,     0,    50,     0,     0,     0,     0,   109,
     111,     0,    36,     0,     0,     0,   112,    99,   100,     0,
       0,   107,   108
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    39,    40,    41,    42,    43,    44,    45,    46,
     113,    48,   114,    50,   375,    51,   115,    53,   116,   215,
     218,   220,   222,   225,   117,   211,   209,   201,   203,   205,
     207,   118,    54,   329,   330,    55,    56,    57,   316,   119,
      59,    60,   177
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -254
static const yytype_int16 yypact[] =
{
    -254,   588,  -254,  -254,  -254,  -254,  -254,  -254,   -44,    22,
    -254,   -38,   -26,    -9,    -4,    -3,     6,     7,     8,     9,
     -12,    10,    11,    12,    13,    14,    15,    18,    19,    38,
      45,    48,    50,    53,    54,  -254,    55,    57,    83,  -254,
    -254,  -254,  -254,  -254,  -254,  -254,  -254,  -254,  -254,  -254,
    -254,  -254,    40,   -13,  -254,  -254,  -254,  -254,  -254,  -254,
    -254,    29,  -254,    30,   180,   180,   180,   301,   180,   180,
     180,   180,   180,   180,   180,   180,    28,   180,   180,   180,
     180,   180,   180,   180,   180,   180,   180,    22,    22,    36,
      58,    59,    29,   110,    60,    61,    62,    63,    64,    65,
      67,    68,    47,  -254,  -254,  -254,  -254,    70,    71,    72,
      73,   129,    76,  -254,  -254,   122,    74,  -254,  -254,  -254,
      69,    75,    80,    81,    77,    78,    82,    84,    87,   133,
      89,    86,    91,   148,    94,    95,    96,    98,    99,   101,
     102,   103,   104,   105,   106,   107,   180,   180,   112,   100,
    -254,   180,   180,   180,   180,   180,   180,   180,   180,   111,
     325,   398,   180,   180,   132,   180,   -22,  -254,   114,   180,
     180,   124,   180,   180,   180,  -254,   108,   130,  -254,   180,
    -254,   134,  -254,  -254,  -254,  -254,  -254,   138,  -254,  -254,
     180,   180,    52,    56,   140,   142,   149,   144,  -254,   143,
     150,   152,   151,   153,   154,   156,   155,   157,   158,   160,
     159,   161,   180,   -34,   162,   164,   -17,   163,   165,   166,
     168,   167,   169,   180,   170,   172,   174,   181,   180,   175,
     177,   180,   183,   184,   187,   180,   235,   190,   254,  -254,
     193,   195,   196,   197,   194,   180,   201,   180,  -254,    34,
    -254,    34,  -254,    34,  -254,    34,  -254,    34,  -254,    34,
    -254,   202,   180,   422,  -254,   180,   495,  -254,   180,  -254,
     180,  -254,   203,   180,  -254,   180,   180,   225,   180,   180,
     133,  -254,  -254,  -254,   204,   200,  -254,   205,  -254,  -254,
    -254,  -254,   208,   206,  -254,  -254,  -254,  -254,  -254,  -254,
    -254,  -254,    41,  -254,    70,  -254,  -254,    71,  -254,  -254,
    -254,  -254,  -254,   210,   211,   207,  -254,   209,  -254,   216,
    -254,   214,  -254,   519,   219,   180,   220,   215,   221,  -254,
    -254,   180,   180,   180,   213,   222,  -254,   228,   226,  -254,
    -254,   232,    30,   180,   229,   236,  -254,   245,   250,   180,
    -254,   253,   248,   255,   256,   267,   180,   180,   272,   180,
     257,  -254,   180,   180,   133,   133,   180,   121,   180,   249,
     269,   275,   276,   280,  -254,   278,   279,   281,   282,  -254,
    -254,   283,  -254,    41,   180,   180,  -254,  -254,  -254,   284,
     285,  -254,  -254
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -254,  -254,  -254,  -254,  -254,  -254,  -254,   343,  -254,  -254,
     354,  -254,   355,  -254,  -254,  -254,    24,   -20,   -65,  -254,
    -254,  -254,  -254,  -254,   -52,  -254,  -254,  -254,  -254,  -254,
    -254,  -227,  -254,   -25,   -24,  -254,  -254,  -254,  -254,   359,
    -254,  -254,  -253
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
     120,   121,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   102,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   296,    61,   297,    52,   298,   321,   299,     5,
     300,   160,   301,     3,     4,    63,   262,   103,     6,     7,
     104,   105,   106,    96,    97,    98,    99,    64,   161,   226,
     227,   318,   320,   265,    92,   242,    72,    93,    94,   150,
      90,    91,   243,   150,    65,   327,   328,   144,   145,    66,
      67,    68,    69,    70,    71,    73,    74,    75,    76,    77,
      78,   194,   195,    79,    80,    95,   198,   199,   200,   202,
     204,   206,   208,   210,    89,   214,   217,   219,   221,   133,
     224,   100,   101,    81,   229,   230,   146,   232,   233,   234,
      82,   371,   372,    83,   237,    84,   149,   150,    85,    86,
      87,   159,    88,   147,   148,   240,   241,   153,   154,   155,
     156,   151,   157,   158,   152,   160,   161,   162,   163,   318,
     164,   165,    90,   167,   166,   169,   170,   261,   172,   168,
     176,   171,   173,   175,   174,   178,   179,   180,   272,   181,
     182,   183,   184,   277,   185,   186,   280,   187,   188,   189,
     284,   197,   374,   235,   190,   191,   192,   193,   196,   212,
     293,   228,   295,   103,     3,     4,   104,   105,   106,     6,
       7,     8,   231,    96,    97,    98,    99,   303,   305,   236,
     306,   308,   223,   309,   238,   310,    12,   239,   312,   244,
     313,   314,   245,   317,   319,   247,   246,   248,   250,   252,
     249,   251,   254,   256,   253,   255,   258,   260,   257,   259,
     264,   267,   263,   266,   269,   271,   268,   270,   274,   275,
     273,   107,   108,   109,   110,   278,   276,   279,   111,   281,
     282,   100,   101,   283,   285,   112,   286,   287,   338,   288,
     340,   289,   290,   291,   315,   292,   344,   345,   346,   294,
     322,   302,   311,   323,   333,   334,   326,   324,   353,   325,
     331,   332,   335,   336,   358,   339,   341,   347,   342,   343,
     352,   364,   365,   349,   367,   354,   348,   369,   370,   351,
     350,   373,   355,   376,   103,     3,     4,   104,   105,   106,
       6,     7,     8,   356,    96,    97,    98,    99,   357,   389,
     390,   359,   360,   377,   361,   368,   362,    12,   103,     3,
       4,   104,   105,   106,     6,     7,     8,   363,    96,    97,
      98,    99,   366,   378,   379,   380,   381,   382,   383,   384,
     385,    12,    62,   391,   392,    47,    49,   386,   387,   388,
      58,     0,   107,   108,   109,   110,     0,     0,     0,   111,
       0,     0,   122,   123,     0,     0,   112,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   213,   108,   109,   110,
       0,     0,     0,   111,     0,     0,   100,   101,     0,     0,
     112,   103,     3,     4,   104,   105,   106,     6,     7,     8,
       0,    96,    97,    98,    99,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,   103,     3,     4,   104,   105,
     106,     6,     7,     8,     0,    96,    97,    98,    99,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   107,
     216,   109,   110,     0,     0,     0,   111,     0,     0,   100,
     101,     0,     0,   112,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   304,   108,   109,   110,     0,     0,     0,
     111,     0,     0,   100,   101,     0,     0,   112,   103,     3,
       4,   104,   105,   106,     6,     7,     8,     0,    96,    97,
      98,    99,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,   103,     3,     4,   104,   105,   106,     6,     7,
       8,     0,    96,    97,    98,    99,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    12,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   107,   307,   109,   110,
       0,     0,     0,   111,     0,     0,   100,   101,     0,     0,
     112,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     107,   108,   109,   110,     0,     0,     0,   111,     2,     0,
     337,   101,     3,     4,   112,     5,     0,     6,     7,     8,
       9,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,    12,    13,    14,    15,     0,     0,
       0,    16,    17,    18,    19,    20,    21,     0,    22,    23,
      24,    25,    26,    27,     0,     0,     0,    28,    29,    30,
      31,     0,    32,    33,    34,     0,    35,    36,    37,     0,
       0,     0,     0,     0,     0,     0,    38
};

static const yytype_int16 yycheck[] =
{
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    63,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,   249,    67,   251,     1,   253,   280,   255,     7,
     257,    65,   259,     4,     5,    73,    70,     3,     9,    10,
       6,     7,     8,    13,    14,    15,    16,    73,    65,    71,
      72,   278,   279,    70,    67,     3,    68,    70,    71,     7,
      20,    21,     6,     7,    73,    24,    25,    87,    88,    73,
      73,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,   146,   147,    65,    65,    61,   151,   152,   153,   154,
     155,   156,   157,   158,    11,   160,   161,   162,   163,    71,
     165,    71,    72,    65,   169,   170,    70,   172,   173,   174,
      65,   364,   365,    65,   179,    65,    92,     7,    65,    65,
      65,    74,    65,    65,    65,   190,   191,    65,    65,    65,
      65,    71,    65,    65,    73,    65,    65,    65,    65,   366,
      11,    65,    20,    74,    70,    65,    65,   212,    70,    74,
      17,    74,    70,    66,    70,    66,    70,    66,   223,    11,
      66,    66,    66,   228,    66,    66,   231,    66,    66,    66,
     235,    71,    51,    65,    70,    70,    70,    70,    66,    68,
     245,    67,   247,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    68,    13,    14,    15,    16,   262,   263,    69,
     265,   266,    70,   268,    70,   270,    26,    69,   273,    69,
     275,   276,    70,   278,   279,    71,    67,    74,    66,    66,
      70,    70,    66,    66,    70,    70,    66,    66,    70,    70,
      66,    66,    70,    70,    66,    66,    70,    70,    66,    65,
      70,    61,    62,    63,    64,    70,    65,    70,    68,    66,
      66,    71,    72,    66,    19,    75,    66,     3,   323,    66,
     325,    66,    66,    66,    39,    71,   331,   332,   333,    68,
      66,    69,    69,    73,    67,    66,    70,    72,   343,    71,
      70,    70,    66,    69,   349,    66,    66,    74,    73,    68,
     342,   356,   357,    65,   359,    66,    74,   362,   363,    67,
      74,   366,    66,   368,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    68,    13,    14,    15,    16,    68,   384,
     385,    68,    74,    74,    69,    68,    70,    26,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    70,    13,    14,
      15,    16,    70,    74,    69,    69,    66,    69,    69,    68,
      68,    26,     9,    69,    69,     1,     1,    74,   383,   383,
       1,    -1,    61,    62,    63,    64,    -1,    -1,    -1,    68,
      -1,    -1,    71,    72,    -1,    -1,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,
      -1,    -1,    -1,    68,    -1,    -1,    71,    72,    -1,    -1,
      75,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      -1,    13,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    -1,    13,    14,    15,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    -1,    -1,    -1,    68,    -1,    -1,    71,
      72,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    62,    63,    64,    -1,    -1,    -1,
      68,    -1,    -1,    71,    72,    -1,    -1,    75,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    -1,    13,    14,
      15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    -1,    13,    14,    15,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,
      -1,    -1,    -1,    68,    -1,    -1,    71,    72,    -1,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,    63,    64,    -1,    -1,    -1,    68,     0,    -1,
      71,    72,     4,     5,    75,     7,    -1,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    -1,    -1,    26,    27,    28,    29,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    38,    -1,    40,    41,
      42,    43,    44,    45,    -1,    -1,    -1,    49,    50,    51,
      52,    -1,    54,    55,    56,    -1,    58,    59,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    68
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    77,     0,     4,     5,     7,     9,    10,    11,    12,
      22,    23,    26,    27,    28,    29,    33,    34,    35,    36,
      37,    38,    40,    41,    42,    43,    44,    45,    49,    50,
      51,    52,    54,    55,    56,    58,    59,    60,    68,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    91,    92,    93,   108,   111,   112,   113,   115,   116,
     117,    67,    83,    73,    73,    73,    73,    73,    65,    65,
      65,    65,    68,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    11,
      20,    21,    67,    70,    71,    92,    13,    14,    15,    16,
      71,    72,   100,     3,     6,     7,     8,    61,    62,    63,
      64,    68,    75,    86,    88,    92,    94,   100,   107,   115,
      94,    94,    71,    72,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    71,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    93,    93,    70,    65,    65,    92,
       7,    71,    73,    65,    65,    65,    65,    65,    65,    74,
      65,    65,    65,    65,    11,    65,    70,    74,    74,    65,
      65,    74,    70,    70,    70,    66,    17,   118,    66,    70,
      66,    11,    66,    66,    66,    66,    66,    66,    66,    66,
      70,    70,    70,    70,    94,    94,    66,    71,    94,    94,
      94,   103,    94,   104,    94,   105,    94,   106,    94,   102,
      94,   101,    68,    61,    94,    95,    62,    94,    96,    94,
      97,    94,    98,    70,    94,    99,    71,    72,    67,    94,
      94,    68,    94,    94,    94,    65,    69,    94,    70,    69,
      94,    94,     3,     6,    69,    70,    67,    71,    74,    70,
      66,    70,    66,    70,    66,    70,    66,    70,    66,    70,
      66,    94,    70,    70,    66,    70,    70,    66,    70,    66,
      70,    66,    94,    70,    66,    65,    65,    94,    70,    70,
      94,    66,    66,    66,    94,    19,    66,     3,    66,    66,
      66,    66,    71,    94,    68,    94,   107,   107,   107,   107,
     107,   107,    69,    94,    61,    94,    94,    62,    94,    94,
      94,    69,    94,    94,    94,    39,   114,    94,   107,    94,
     107,   118,    66,    73,    72,    71,    70,    24,    25,   109,
     110,    70,    70,    67,    66,    66,    69,    71,    94,    66,
      94,    66,    73,    68,    94,    94,    94,    74,    74,    65,
      74,    67,   100,    94,    66,    66,    68,    68,    94,    68,
      74,    69,    70,    70,    94,    94,    70,    94,    68,    94,
      94,   118,   118,    94,    51,    90,    94,    74,    74,    69,
      69,    66,    69,    69,    68,    68,    74,   109,   110,    94,
      94,    69,    69
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
# if YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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
        case 7:

/* Line 1455 of yacc.c  */
#line 67 "1907114.y"
    {(yyval.variable).ival=(yyvsp[(1) - (1)].variable).ival;;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 101 "1907114.y"
    {
        
        symbol_table[(yyvsp[(3) - (6)].variable).ival].val =(yyvsp[(5) - (6)].variable).ival ;
    ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 105 "1907114.y"
    {

        symbol_table[(yyvsp[(3) - (6)].variable).ival].vall = (yyvsp[(5) - (6)].variable).fval;
    ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 112 "1907114.y"
    {
        printf("%d\n",(yyvsp[(3) - (4)].variable).ival);
    ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 115 "1907114.y"
    {
        printf("%f\n",(yyvsp[(3) - (4)].variable).fval);
    ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 118 "1907114.y"
    {
        printf("%s\n",(yyvsp[(3) - (4)].variable).st);
    ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 121 "1907114.y"
    {int a = find_array_value(&(yyvsp[(4) - (8)].variable).str,(yyvsp[(6) - (8)].variable).ival); printf("%d\n",a);;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 122 "1907114.y"
    {printf("\n");;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 126 "1907114.y"
    {
        char a[100];
        strcpy(a,(yyvsp[(1) - (6)].variable).str);
        int i=0;
        while(1)
        {
            if(a[i]==':')
            {
                break;
            }
            i++;
        }
        a[i]='\0';
        strcpy(list[array_counter].array_name,a);
        list[array_counter].limit=(yyvsp[(5) - (6)].variable).ival;
        array_counter++;
        ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 143 "1907114.y"
    {(yyval.variable).ival = find_array_value(&(yyvsp[(2) - (5)].variable).str,(yyvsp[(4) - (5)].variable).ival);;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 147 "1907114.y"
    {int i = add_array_value(&(yyvsp[(2) - (8)].variable).str,(yyvsp[(4) - (8)].variable).ival); list[i].arr[(yyvsp[(4) - (8)].variable).ival]=(yyvsp[(8) - (8)].variable).ival;;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 151 "1907114.y"
    { int val1 = (yyvsp[(4) - (13)].variable).ival;
								    int val2 = (yyvsp[(6) - (13)].variable).ival;
								    int val3 = (yyvsp[(11) - (13)].variable).ival;
								    (yyval.variable).ival = val1 + val2 + val3;;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 157 "1907114.y"
    {int a=strlen((yyvsp[(3) - (4)].variable).st);printf("Lenght of string: %d\n",a);(yyval.variable).ival=a;;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 158 "1907114.y"
    {store n = find_value(&(yyvsp[(3) - (6)].variable).str),m=find_value(&(yyvsp[(5) - (6)].variable).str);int a = strcmp(n.vas,m.vas);;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 159 "1907114.y"
    {int i = add_value(&(yyvsp[(3) - (6)].variable).str),j = add_value(&(yyvsp[(5) - (6)].variable).str);strcat(symbol_table[i].vas,symbol_table[j].vas);;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 160 "1907114.y"
    {
        int check(int n)
        {
            if(n==1)
            {
                return 0;
            }
            if(n==2)
            {
                return 1;
            }
            if(n%2==0)
            {
                return 0;
            }
            int m = sqrt(n);
            for(int i=3;i<=m+2;i+=2)
            {
                if(n%i==0)
                {
                    return 0;
                }
            }
            return 1;
        }
        int n=(yyvsp[(3) - (4)].variable).ival;
        (yyval.variable).ival = check(n);
        (yyval.variable).ival==0?printf("Not prime.\n"):printf("Prime.\n");
    ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 189 "1907114.y"
    {
        if((yyvsp[(3) - (6)].variable).ival>(yyvsp[(5) - (6)].variable).ival)
        {
            (yyval.variable).ival = (yyvsp[(5) - (6)].variable).ival;
        }
        else
        {
            (yyval.variable).ival = (yyvsp[(3) - (6)].variable).ival;
        }
        printf("%d\n",(yyval.variable).ival);
    ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 200 "1907114.y"
    {
        if((yyvsp[(3) - (6)].variable).ival>(yyvsp[(5) - (6)].variable).ival)
        {
            (yyval.variable).ival = (yyvsp[(3) - (6)].variable).ival;
        }
        else
        {
            (yyval.variable).ival = (yyvsp[(5) - (6)].variable).ival;
        }
        printf("%d\n",(yyval.variable).ival);
    ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 211 "1907114.y"
    {
       int c;
       int a = (yyvsp[(3) - (6)].variable).ival;
       int b = (yyvsp[(5) - (6)].variable).ival;
       if(a>b)
       {
           int temp = a;
           a=b;
           b=a;
       }
       while(a!=0)
       {
           int temp = b%a;
           b=a;
           a=temp;
       }
       (yyval.variable).ival = b;
       printf("%d\n",(yyval.variable).ival);
    ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 230 "1907114.y"
    {double x = (double)(yyvsp[(3) - (4)].variable).fval,ans = sin((x*3.1416)/180.0);printf("%f\n",(yyval.variable).fval=(float)ans);;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 231 "1907114.y"
    {double x = (double)(yyvsp[(3) - (4)].variable).fval,ans = cos((x*3.1416)/180.0); printf("%f\n",(yyval.variable).fval=(float)ans); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 232 "1907114.y"
    {double x = (double)(yyvsp[(3) - (4)].variable).fval,ans = tan((x*3.1416)/180.0); printf("%f\n",(yyval.variable).fval=(float)ans); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 233 "1907114.y"
    {double x = (double)(yyvsp[(3) - (6)].variable).fval,y = (double)(yyvsp[(5) - (6)].variable).fval;printf("%f\n",(yyval.variable).fval=(float)pow(x,y));;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 234 "1907114.y"
    {(yyval.variable).ival=(int)(yyvsp[(3) - (4)].variable).fval;printf("%d\n",(yyval.variable).ival);;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 235 "1907114.y"
    {(yyval.variable).ival=(int)(yyvsp[(3) - (4)].variable).fval+1;printf("%d\n",(yyval.variable).ival);;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 239 "1907114.y"
    {(yyval.variable).str = "RETURN";;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 240 "1907114.y"
    {(yyval.variable).str = "VOID";;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 244 "1907114.y"
    {
                    if((yyvsp[(6) - (6)].variable).ival==INT_MIN && (yyvsp[(6) - (6)].variable).fval==FLT_MIN && symbol_table[(yyvsp[(1) - (6)].variable).ival].val==INT_MAX && symbol_table[(yyvsp[(1) - (6)].variable).ival].vall==FLT_MAX)
                    {
                        strcpy(symbol_table[(yyvsp[(1) - (6)].variable).ival].vas,(yyvsp[(6) - (6)].variable).st);
                    }
                    else if((yyvsp[(6) - (6)].variable).ival==INT_MIN && (yyvsp[(6) - (6)].variable).fval!=FLT_MIN && symbol_table[(yyvsp[(1) - (6)].variable).ival].val==INT_MAX && symbol_table[(yyvsp[(1) - (6)].variable).ival].vas[0]=='\0')
                    {
                        symbol_table[(yyvsp[(1) - (6)].variable).ival].vall=(yyvsp[(6) - (6)].variable).fval;
                    }
                    else if((yyvsp[(6) - (6)].variable).ival!=INT_MIN && (yyvsp[(6) - (6)].variable).fval==FLT_MIN && symbol_table[(yyvsp[(1) - (6)].variable).ival].vall==FLT_MAX && symbol_table[(yyvsp[(1) - (6)].variable).ival].vas[0]=='\0')
                    {
                        symbol_table[(yyvsp[(1) - (6)].variable).ival].val=(yyvsp[(6) - (6)].variable).ival;

                    }
                    else
                    {
                        printf("Variable Type error.\n");\
                        
                    }
                    

    ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 266 "1907114.y"
    {
                    if((yyvsp[(4) - (4)].variable).ival==INT_MIN && (yyvsp[(4) - (4)].variable).fval==FLT_MIN && symbol_table[(yyvsp[(1) - (4)].variable).ival].val==INT_MAX && symbol_table[(yyvsp[(1) - (4)].variable).ival].vall==FLT_MAX)
                    {
                        strcpy(symbol_table[(yyvsp[(1) - (4)].variable).ival].vas,(yyvsp[(4) - (4)].variable).st);
                    }
                    else if((yyvsp[(4) - (4)].variable).ival==INT_MIN && (yyvsp[(4) - (4)].variable).fval!=FLT_MIN && symbol_table[(yyvsp[(1) - (4)].variable).ival].val==INT_MAX && symbol_table[(yyvsp[(1) - (4)].variable).ival].vas[0]=='\0')
                    {
                        symbol_table[(yyvsp[(1) - (4)].variable).ival].vall=(yyvsp[(4) - (4)].variable).fval;
                    }
                    else if((yyvsp[(4) - (4)].variable).ival!=INT_MIN && (yyvsp[(4) - (4)].variable).fval==FLT_MIN && symbol_table[(yyvsp[(1) - (4)].variable).ival].vall==FLT_MAX && symbol_table[(yyvsp[(1) - (4)].variable).ival].vas[0]=='\0')
                    {
                        symbol_table[(yyvsp[(1) - (4)].variable).ival].val=(yyvsp[(4) - (4)].variable).ival;
                    }
                    else
                    {
                        printf("Variable Type error.\n");

                    }
    ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 285 "1907114.y"
    {
    if (symbol_table[(yyvsp[(1) - (3)].variable).ival].val == INT_MAX && symbol_table[(yyvsp[(1) - (3)].variable).ival].vall == FLT_MAX && symbol_table[(yyvsp[(1) - (3)].variable).ival].vas[0] == '\0') {

    } else {
        printf("Variable %s already declared.\n", symbol_table[(yyvsp[(1) - (3)].variable).ival].name);
    }
;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 304 "1907114.y"
    {(yyval.variable).ival = add_value(&(yyvsp[(1) - (1)].variable).str);;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 307 "1907114.y"
    {(yyval.variable).ival=(yyvsp[(1) - (1)].variable).ival;(yyval.variable).fval=(yyvsp[(1) - (1)].variable).fval;if((yyvsp[(1) - (1)].variable).st!=NULL){strcpy((yyval.variable).st,(yyvsp[(1) - (1)].variable).st);};}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 308 "1907114.y"
    {(yyval.variable).ival=(yyvsp[(3) - (4)].variable).ival;(yyval.variable).fval=(yyvsp[(3) - (4)].variable).fval;if((yyvsp[(3) - (4)].variable).st!=NULL){strcpy((yyval.variable).st,(yyvsp[(3) - (4)].variable).st);};}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 309 "1907114.y"
    {(yyval.variable).ival=(yyvsp[(3) - (4)].variable).ival;(yyval.variable).fval=(yyvsp[(3) - (4)].variable).fval;if((yyvsp[(3) - (4)].variable).st!=NULL){strcpy((yyval.variable).st,(yyvsp[(3) - (4)].variable).st);};}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 310 "1907114.y"
    {(yyval.variable).ival=(yyvsp[(3) - (4)].variable).ival;(yyval.variable).fval=(yyvsp[(3) - (4)].variable).fval;if((yyvsp[(3) - (4)].variable).st!=NULL){strcpy((yyval.variable).st,(yyvsp[(3) - (4)].variable).st);};}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 311 "1907114.y"
    {(yyval.variable).ival=(yyvsp[(3) - (4)].variable).ival;(yyval.variable).fval=(yyvsp[(3) - (4)].variable).fval;if((yyvsp[(3) - (4)].variable).st!=NULL){strcpy((yyval.variable).st,(yyvsp[(3) - (4)].variable).st);};}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 312 "1907114.y"
    {(yyval.variable).ival=(yyvsp[(3) - (4)].variable).ival;(yyval.variable).fval=(yyvsp[(3) - (4)].variable).fval;if((yyvsp[(3) - (4)].variable).st!=NULL){strcpy((yyval.variable).st,(yyvsp[(3) - (4)].variable).st);};}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 320 "1907114.y"
    {if((yyvsp[(1) - (3)].variable).fval!=FLT_MIN){(yyval.variable).fval=(yyvsp[(1) - (3)].variable).fval+(yyvsp[(3) - (3)].variable).fval;}else{(yyval.variable).ival=(yyvsp[(1) - (3)].variable).ival+(yyvsp[(3) - (3)].variable).ival;};}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 321 "1907114.y"
    {(yyval.variable).ival=(yyvsp[(1) - (3)].variable).ival+1;;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 322 "1907114.y"
    {(yyval.variable).ival=(yyvsp[(3) - (3)].variable).ival+1;;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 325 "1907114.y"
    {if((yyvsp[(1) - (3)].variable).fval!=FLT_MIN){(yyval.variable).fval=(yyvsp[(1) - (3)].variable).fval-(yyvsp[(3) - (3)].variable).fval;}else{(yyval.variable).ival=(yyvsp[(1) - (3)].variable).ival-(yyvsp[(3) - (3)].variable).ival;};}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 326 "1907114.y"
    {(yyval.variable).ival=(yyvsp[(1) - (3)].variable).ival-1;;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 327 "1907114.y"
    {(yyval.variable).ival=(yyvsp[(3) - (3)].variable).ival-1;;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 330 "1907114.y"
    {if((yyvsp[(1) - (3)].variable).fval!=FLT_MIN){(yyval.variable).fval=(yyvsp[(1) - (3)].variable).fval*(yyvsp[(3) - (3)].variable).fval;}else{(yyval.variable).ival=(yyvsp[(1) - (3)].variable).ival*(yyvsp[(3) - (3)].variable).ival;};}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 333 "1907114.y"
    {if((yyvsp[(1) - (3)].variable).fval!=FLT_MIN){if((yyvsp[(3) - (3)].variable).fval!=0.0){(yyval.variable).fval=(yyvsp[(1) - (3)].variable).fval/(yyvsp[(3) - (3)].variable).fval;}}else{if((yyvsp[(3) - (3)].variable).ival!=0){(yyval.variable).ival=(yyvsp[(1) - (3)].variable).ival/(yyvsp[(3) - (3)].variable).ival;}};}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 336 "1907114.y"
    {(yyval.variable).ival = (yyvsp[(1) - (3)].variable).ival % (yyvsp[(3) - (3)].variable).ival;;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 340 "1907114.y"
    {(yyval.variable).ival=(yyvsp[(3) - (4)].variable).ival;(yyval.variable).fval=(yyvsp[(3) - (4)].variable).fval;;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 341 "1907114.y"
    {(yyval.variable).ival=(yyvsp[(3) - (4)].variable).ival;(yyval.variable).fval=(yyvsp[(3) - (4)].variable).fval;;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 342 "1907114.y"
    {(yyval.variable).ival=(yyvsp[(3) - (4)].variable).ival;(yyval.variable).fval=(yyvsp[(3) - (4)].variable).fval;;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 343 "1907114.y"
    {(yyval.variable).ival=(yyvsp[(3) - (4)].variable).ival;(yyval.variable).fval=(yyvsp[(3) - (4)].variable).fval;;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 344 "1907114.y"
    {(yyval.variable).ival=(yyvsp[(3) - (4)].variable).ival;(yyval.variable).fval=(yyvsp[(3) - (4)].variable).fval;;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 345 "1907114.y"
    {(yyval.variable).ival=(yyvsp[(3) - (4)].variable).ival;(yyval.variable).fval=(yyvsp[(3) - (4)].variable).fval;;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 349 "1907114.y"
    {if((yyvsp[(1) - (3)].variable).ival==INT_MIN){(yyval.variable).ival = (yyvsp[(1) - (3)].variable).fval > (yyvsp[(3) - (3)].variable).fval;}else{(yyval.variable).ival = (yyvsp[(1) - (3)].variable).ival > (yyvsp[(3) - (3)].variable).ival;};}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 352 "1907114.y"
    {if((yyvsp[(1) - (3)].variable).ival==INT_MIN){(yyval.variable).ival = (yyvsp[(1) - (3)].variable).fval < (yyvsp[(3) - (3)].variable).fval;}else{(yyval.variable).ival = (yyvsp[(1) - (3)].variable).ival < (yyvsp[(3) - (3)].variable).ival;};}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 355 "1907114.y"
    {if((yyvsp[(1) - (3)].variable).ival==INT_MIN){(yyval.variable).ival = (yyvsp[(1) - (3)].variable).fval == (yyvsp[(3) - (3)].variable).fval;}else{(yyval.variable).ival = (yyvsp[(1) - (3)].variable).ival == (yyvsp[(3) - (3)].variable).ival;};}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 358 "1907114.y"
    {if((yyvsp[(1) - (3)].variable).ival==INT_MIN){(yyval.variable).ival = (yyvsp[(1) - (3)].variable).fval != (yyvsp[(3) - (3)].variable).fval;}else{(yyval.variable).ival = (yyvsp[(1) - (3)].variable).ival != (yyvsp[(3) - (3)].variable).ival;};}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 361 "1907114.y"
    {if((yyvsp[(1) - (3)].variable).ival==INT_MIN){(yyval.variable).ival = (yyvsp[(1) - (3)].variable).fval >= (yyvsp[(3) - (3)].variable).fval;}else{(yyval.variable).ival = (yyvsp[(1) - (3)].variable).ival >= (yyvsp[(3) - (3)].variable).ival;};}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 364 "1907114.y"
    {if((yyvsp[(1) - (3)].variable).ival==INT_MIN){(yyval.variable).ival = (yyvsp[(1) - (3)].variable).fval <= (yyvsp[(3) - (3)].variable).fval;}else{(yyval.variable).ival = (yyvsp[(1) - (3)].variable).ival <= (yyvsp[(3) - (3)].variable).ival;};}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 368 "1907114.y"
    {(yyval.variable).ival=(yyvsp[(1) - (1)].variable).ival; (yyval.variable).fval=FLT_MIN;(yyval.variable).st=NULL;;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 369 "1907114.y"
    {(yyval.variable).fval = (yyvsp[(1) - (1)].variable).fval; (yyval.variable).ival=INT_MIN;(yyval.variable).st=NULL;;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 370 "1907114.y"
    {(yyval.variable).ival=INT_MIN;(yyval.variable).fval=FLT_MIN;strcpy((yyval.variable).st,(yyvsp[(1) - (1)].variable).st);;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 371 "1907114.y"
    {store pp = find_value(&(yyvsp[(1) - (1)].variable).str);if(pp.val==INT_MAX && pp.vall==FLT_MAX){(yyval.variable).ival=INT_MIN;(yyval.variable).fval=FLT_MIN;strcpy((yyval.variable).st,pp.vas);}
    else if(pp.val==INT_MAX && pp.vall!=FLT_MAX){(yyval.variable).fval=pp.vall;(yyval.variable).ival=INT_MIN;}
                                       else{(yyval.variable).ival=pp.val;(yyval.variable).fval=FLT_MIN;};}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 377 "1907114.y"
    {
                                if((yyvsp[(3) - (7)].variable).ival)
                                {
                                    printf("IF statement output1 %d\n", (yyvsp[(6) - (7)].variable).ival);
                                }

    ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 384 "1907114.y"
    {
                                if((yyvsp[(3) - (8)].variable).ival)
                                {
                                    printf("IF statement output2 %d\n", (yyvsp[(6) - (8)].variable).ival);
                                }

    ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 391 "1907114.y"
    {
                                if((yyvsp[(3) - (8)].variable).ival)
                                {
                                    printf("IF statement output3 %d\n", (yyvsp[(6) - (8)].variable).ival);
                                }
                                else 
                                {
                                    printf("ELSE statement output1 %d\n", (yyvsp[(8) - (8)].variable).ival);
                                }
    ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 404 "1907114.y"
    {
                                if((yyvsp[(3) - (8)].variable).ival)
                                {
                                    printf("ESIF statement output1 %d\n", (yyvsp[(6) - (8)].variable).ival);
                                }
                        
    ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 411 "1907114.y"
    {
                                if((yyvsp[(3) - (8)].variable).ival)
                                {
                                    printf("ESIF statement output2 %d\n", (yyvsp[(6) - (8)].variable).ival);
                                }
                                else 
                                {
                                    printf("ELSE statement output2 %d\n", (yyvsp[(8) - (8)].variable).ival);
                                }
    ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 424 "1907114.y"
    {
                         (yyval.variable).ival = (yyvsp[(3) - (4)].variable).ival;
                        ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 430 "1907114.y"
    {
        sw = (yyvsp[(3) - (4)].variable).ival;
        dv = -9999;
        printf("\nSwitch statement.\n");
    ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 439 "1907114.y"
    {
        if(sw!=INT_MIN && dv != -9999)
        {
            printf("Default %d\n",dv);
        }
    ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 448 "1907114.y"
    {
        if(sw==(yyvsp[(3) - (6)].variable).ival)
        {
            printf("Case %d: ouput: %d\n",(yyvsp[(3) - (6)].variable).ival,(yyvsp[(6) - (6)].variable).ival);
            sw = INT_MIN;
        }

    ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 456 "1907114.y"
    {
        if(sw==(yyvsp[(3) - (7)].variable).ival)
        {
            printf("Case %d: ouput: %d:\n",(yyvsp[(3) - (7)].variable).ival,(yyvsp[(6) - (7)].variable).ival);
            sw = INT_MIN;
        }

    ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 466 "1907114.y"
    {
       dv = (yyvsp[(3) - (3)].variable).ival;
    ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 472 "1907114.y"
    {
        printf("****FOR LOOP****\n");
                   for(int i=(yyvsp[(3) - (16)].variable).ival;i<(yyvsp[(9) - (16)].variable).ival;i=i+1)
                   {
                        printf("Output:%d\n",(yyvsp[(15) - (16)].variable).ival);
                   }
    ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 480 "1907114.y"
    {
        printf("****FOR LOOP****\n");
                   for(int i=(yyvsp[(3) - (16)].variable).ival;i>(yyvsp[(9) - (16)].variable).ival;i=i-1)
                   {
                        printf("output:%d\n",(yyvsp[(15) - (16)].variable).ival);
                   }
    ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 489 "1907114.y"
    {
        int i = (yyvsp[(5) - (13)].variable).ival;
        printf("****WHILE LOOP****\n");
        while(i < (yyvsp[(7) - (13)].variable).ival){
        	printf("Output:%d\n",(yyvsp[(11) - (13)].variable).ival);
        	if(i == (yyvsp[(12) - (13)].variable).ival)
        		break;
        	i = i + 1;
       } 		
    ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 500 "1907114.y"
    {
        int i = 1;
        printf("****WHILE LOOP****\n");
        while(i){
        	printf("Output:%d\n",(yyvsp[(6) - (8)].variable).ival);
        	if(i == (yyvsp[(7) - (8)].variable).ival)
        		break;
        	i = i + 1;
       } 		
    ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 511 "1907114.y"
    {
        int i = (yyvsp[(5) - (13)].variable).ival;
        printf("****WHILE LOOP****\n");
        while(i > (yyvsp[(7) - (13)].variable).ival){
        	printf("Output:%d\n",(yyvsp[(11) - (13)].variable).ival);
        	if(i == (yyvsp[(12) - (13)].variable).ival)
        		break;
        	i = i - 1;
       } 		
    ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 523 "1907114.y"
    {
        int i = (yyvsp[(10) - (14)].variable).ival;
        printf("****DO WHILE LOOP****\n");
        while(i < (yyvsp[(12) - (14)].variable).ival){
        	printf("Output:%d\n",(yyvsp[(3) - (14)].variable).ival);
        	if(i == (yyvsp[(4) - (14)].variable).ival)
        		break;
        	i = i + 1;
       } 
    ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 534 "1907114.y"
    {
        int i = (yyvsp[(10) - (14)].variable).ival;
        printf("****DO WHILE LOOP****\n");
        while(i > (yyvsp[(12) - (14)].variable).ival){
        	printf("Output:%d\n",(yyvsp[(3) - (14)].variable).ival);
        	if(i == (yyvsp[(4) - (14)].variable).ival)
        		break;
        	i = i + 1;
       } 
    ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 545 "1907114.y"
    {
        int i = 1;
        printf("****DO WHILE LOOP****\n");
        while(i){
        	printf("Output:%d\n",(yyvsp[(3) - (9)].variable).ival);
        	if(i == (yyvsp[(4) - (9)].variable).ival)
        		break;
        	i = i + 1;
       } 
    ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 558 "1907114.y"
    {(yyval.variable).ival = (yyvsp[(3) - (4)].variable).ival;;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 559 "1907114.y"
    {(yyval.variable).ival = -999999999;;}
    break;



/* Line 1455 of yacc.c  */
#line 2647 "1907114.tab.c"
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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



/* Line 1675 of yacc.c  */
#line 563 "1907114.y"

int add_value(char **sym)
{
    char a[100];
    int l=strlen(*sym);
    strcpy(a,*sym);
    int i=0;
    while((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z') || (a[i]>='0' && a[i]<='9'))
    {
        if(a[i]=='\0')
        {
            break;
        }
        i++;
    }
    a[i]='\0';
    for(int i=0;i<count;i++)
	{
		if(!strcmp(a,symbol_table[i].name))
		{
            return i;
		}
	}
    strcpy(symbol_table[count].name,a);
    symbol_table[count].val = INT_MAX;
    symbol_table[count].vall = FLT_MAX;
    count++;
    //printf("%d",count);
    return count-1;
}

store find_value(char **sym)
{
    char a[100];
    int l=strlen(*sym);
    strcpy(a,*sym);
    int i=0;
    while((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z') || (a[i]>='0' && a[i]<='9'))
    {
        if(a[i]=='\0')
        {
            break;
        }
        i++;
    }
    a[i]='\0';
	int p = 0;
	for(int i=0;i<count;i++)
	{
		if(!strcmp(a,symbol_table[i].name))
		{
            return symbol_table[i];
		}
	}
    store n;
    printf("Variable not declared\n");
	return n;
}

int find_array_value(char **sym,int j)
{
    char a[100];
    int l=strlen(*sym);
    strcpy(a,*sym);
    int i=0;
    //printf("%s \n",a);
    while(1)
    {
        if(a[i]==',')
        {
            break;
        }
        i++;
    }
    a[i]='\0';
	int p = 0;
	for(int i=0;i<array_counter;i++)
	{
		if(!strcmp(a,list[i].array_name))
		{
            return list[i].arr[j];
		}
	}
    printf("Array not declared\n");
	return -1;
}
int add_array_value(char **sym,int j)
{
        char a[100];
        strcpy(a,*sym);
        int i=0;
        while(1)
        {
            if(a[i]==',')
            {
                break;
            }
            i++;
        }
        a[i]='\0';
        int p=0;
        for(int i=0;i<array_counter;i++)
        {
            if(!strcmp(a,list[i].array_name)){
                if(j<list[i].limit)
                {
                    p=1;
                    return i;
                }
                else{
                    printf("Program is trying to access invalid memory location.\n");
                }
           
            }
        }
        if(!p)
        {
            printf("Invalid Statement.\n");
        }
}
void yyerror(char *s)
{
	fprintf(stderr, "error: %s\n",s);
}

int main(void) {
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
yyparse();

}

