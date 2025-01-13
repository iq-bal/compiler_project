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
     IDENTIFIER = 258,
     INTEGER_LITERAL = 259,
     STRING_LITERAL = 260,
     DHARMA = 261,
     ADHARMA = 262,
     TAPAS = 263,
     YATRA = 264,
     TYAGA = 265,
     NIVRITTI = 266,
     BHUMI = 267,
     NIYAM = 268,
     YAJNA = 269,
     AHVANA = 270,
     MOKSHA = 271,
     MANTRA = 272,
     SHRAVANA = 273,
     ARTHA = 274,
     JALA = 275,
     SATYA = 276,
     AKSHARA = 277,
     VANI = 278,
     YOGA = 279,
     VIYOGA = 280,
     BAL = 281,
     VIBHAJAN = 282,
     SHESHA = 283,
     SAMAVAYA = 284,
     VIBHAGA = 285,
     MAYA = 286,
     SEMICOLON = 287,
     ASSIGN = 288,
     LPAREN = 289,
     RPAREN = 290,
     LBRACE = 291,
     RBRACE = 292,
     LBRACKET = 293,
     RBRACKET = 294,
     COMMA = 295,
     SANKALPA = 296,
     EQ = 297,
     NE = 298,
     LT = 299,
     LE = 300,
     GT = 301,
     GE = 302,
     FLOAT_LITERAL = 303,
     PRAYASCHITTA = 304,
     SHANTI = 305,
     VIKALPA = 306
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define INTEGER_LITERAL 259
#define STRING_LITERAL 260
#define DHARMA 261
#define ADHARMA 262
#define TAPAS 263
#define YATRA 264
#define TYAGA 265
#define NIVRITTI 266
#define BHUMI 267
#define NIYAM 268
#define YAJNA 269
#define AHVANA 270
#define MOKSHA 271
#define MANTRA 272
#define SHRAVANA 273
#define ARTHA 274
#define JALA 275
#define SATYA 276
#define AKSHARA 277
#define VANI 278
#define YOGA 279
#define VIYOGA 280
#define BAL 281
#define VIBHAJAN 282
#define SHESHA 283
#define SAMAVAYA 284
#define VIBHAGA 285
#define MAYA 286
#define SEMICOLON 287
#define ASSIGN 288
#define LPAREN 289
#define RPAREN 290
#define LBRACE 291
#define RBRACE 292
#define LBRACKET 293
#define RBRACKET 294
#define COMMA 295
#define SANKALPA 296
#define EQ 297
#define NE 298
#define LT 299
#define LE 300
#define GT 301
#define GE 302
#define FLOAT_LITERAL 303
#define PRAYASCHITTA 304
#define SHANTI 305
#define VIKALPA 306




/* Copy the first part of user declarations.  */
#line 1 "parser.y"

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    void yyerror(const char *s);
    int yylex();

    FILE *output_file;


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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
#line 11 "parser.y"
{
    int ival;
    float fval;
    char *sval;
}
/* Line 193 of yacc.c.  */
#line 214 "parser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 227 "parser.tab.c"

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   500

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  79
/* YYNRULES -- Number of states.  */
#define YYNSTATES  176

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

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
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,    14,    15,    19,    22,    27,    28,
      31,    41,    42,    44,    46,    50,    53,    54,    57,    60,
      63,    65,    67,    69,    72,    75,    78,    82,    85,    87,
      99,   103,   111,   126,   139,   142,   144,   152,   160,   172,
     173,   175,   177,   178,   180,   181,   183,   185,   189,   193,
     197,   201,   205,   209,   213,   217,   221,   223,   227,   231,
     235,   239,   243,   245,   247,   249,   251,   253,   255,   260,
     261,   263,   265,   269,   274,   279,   281,   283,   285,   287
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      53,     0,    -1,    55,    57,    54,    -1,    41,    34,    35,
      36,    62,    37,    -1,    -1,    55,    56,    32,    -1,    82,
       3,    -1,    82,     3,    33,    74,    -1,    -1,    57,    58,
      -1,    14,    82,     3,    34,    59,    35,    36,    62,    37,
      -1,    -1,    60,    -1,    61,    -1,    60,    40,    61,    -1,
      82,     3,    -1,    -1,    62,    63,    -1,    56,    32,    -1,
      65,    32,    -1,    66,    -1,    69,    -1,    70,    -1,    10,
      32,    -1,    11,    32,    -1,    78,    32,    -1,    16,    74,
      32,    -1,    81,    32,    -1,    64,    -1,    49,    36,    62,
      37,    50,    34,     3,    35,    36,    62,    37,    -1,     3,
      33,    74,    -1,     6,    34,    74,    35,    36,    62,    37,
      -1,     6,    34,    74,    35,    36,    62,    37,     7,    34,
      74,    35,    36,    62,    37,    -1,     6,    34,    74,    35,
      36,    62,    37,    67,     7,    36,    62,    37,    -1,    67,
      68,    -1,    68,    -1,    51,    34,    74,    35,    36,    62,
      37,    -1,     8,    34,    74,    35,    36,    62,    37,    -1,
       9,    34,    71,    32,    72,    32,    73,    35,    36,    62,
      37,    -1,    -1,    65,    -1,    56,    -1,    -1,    74,    -1,
      -1,    65,    -1,    75,    -1,    74,    24,    75,    -1,    74,
      25,    75,    -1,    74,    30,    75,    -1,    74,    44,    75,
      -1,    74,    46,    75,    -1,    74,    45,    75,    -1,    74,
      47,    75,    -1,    74,    42,    75,    -1,    74,    43,    75,
      -1,    76,    -1,    75,    26,    76,    -1,    75,    27,    76,
      -1,    75,    28,    76,    -1,    75,    29,    76,    -1,    34,
      74,    35,    -1,     3,    -1,    77,    -1,    78,    -1,     4,
      -1,     5,    -1,    48,    -1,    15,    34,    79,    35,    -1,
      -1,    80,    -1,    74,    -1,    80,    40,    74,    -1,    18,
      34,     3,    35,    -1,    17,    34,    74,    35,    -1,    19,
      -1,    20,    -1,    21,    -1,    22,    -1,    23,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    34,    34,    37,    40,    40,    43,    44,    47,    48,
      52,    55,    56,    60,    61,    65,    69,    69,    73,    73,
      73,    73,    73,    73,    73,    73,    74,    74,    75,    77,
      80,    83,    84,    85,    88,    89,    91,    94,    97,   100,
     100,   100,   103,   103,   106,   106,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   121,   122,   123,   124,
     125,   128,   129,   130,   131,   134,   135,   136,   140,   143,
     144,   148,   149,   153,   154,   157,   158,   159,   160,   161
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "INTEGER_LITERAL",
  "STRING_LITERAL", "DHARMA", "ADHARMA", "TAPAS", "YATRA", "TYAGA",
  "NIVRITTI", "BHUMI", "NIYAM", "YAJNA", "AHVANA", "MOKSHA", "MANTRA",
  "SHRAVANA", "ARTHA", "JALA", "SATYA", "AKSHARA", "VANI", "YOGA",
  "VIYOGA", "BAL", "VIBHAJAN", "SHESHA", "SAMAVAYA", "VIBHAGA", "MAYA",
  "SEMICOLON", "ASSIGN", "LPAREN", "RPAREN", "LBRACE", "RBRACE",
  "LBRACKET", "RBRACKET", "COMMA", "SANKALPA", "EQ", "NE", "LT", "LE",
  "GT", "GE", "FLOAT_LITERAL", "PRAYASCHITTA", "SHANTI", "VIKALPA",
  "$accept", "program", "main_function", "declarations", "declaration",
  "functions", "function_declaration", "parameters", "parameter_list",
  "parameter", "statements", "statement", "try_catch_block", "assignment",
  "conditional", "else_if_blocks", "else_if_block", "loop", "for_loop",
  "for_initialization", "for_condition", "for_increment", "expression",
  "term", "factor", "literal", "function_call", "arguments",
  "argument_list", "input_output", "type", 0
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
     305,   306
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    54,    55,    55,    56,    56,    57,    57,
      58,    59,    59,    60,    60,    61,    62,    62,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    64,
      65,    66,    66,    66,    67,    67,    68,    69,    70,    71,
      71,    71,    72,    72,    73,    73,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    75,    75,    75,    75,
      75,    76,    76,    76,    76,    77,    77,    77,    78,    79,
      79,    80,    80,    81,    81,    82,    82,    82,    82,    82
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     6,     0,     3,     2,     4,     0,     2,
       9,     0,     1,     1,     3,     2,     0,     2,     2,     2,
       1,     1,     1,     2,     2,     2,     3,     2,     1,    11,
       3,     7,    14,    12,     2,     1,     7,     7,    11,     0,
       1,     1,     0,     1,     0,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     3,     3,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     4,     0,
       1,     1,     3,     4,     4,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     8,     1,    75,    76,    77,    78,    79,     0,
       0,     0,     5,     0,     0,     2,     9,     6,     0,     0,
       0,     0,     0,    62,    65,    66,     0,     0,    67,     7,
      46,    56,    63,    64,    11,    16,    69,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,    13,     0,     0,    71,     0,    70,    61,
      47,    48,    49,    54,    55,    50,    52,    51,    53,    57,
      58,    59,    60,     0,     0,    15,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     3,     0,     0,    17,    28,
       0,    20,    21,    22,     0,     0,    68,     0,    16,    14,
       0,     0,     0,    39,    23,    24,     0,     0,     0,    16,
      18,    19,    25,    27,    72,     0,    30,     0,     0,    41,
      40,     0,    26,     0,     0,     0,    10,     0,     0,    42,
      74,    73,     0,    16,    16,     0,    43,     0,     0,     0,
      44,     0,    31,    37,    45,     0,     0,     0,     0,     0,
      35,     0,     0,     0,     0,     0,    34,    16,    16,     0,
       0,    16,     0,     0,     0,     0,     0,    38,    29,    16,
      16,    33,     0,     0,    32,    36
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    15,     2,    87,    10,    16,    51,    52,    53,
      55,    88,    89,    90,    91,   149,   150,    92,    93,   121,
     135,   145,    29,    30,    31,    32,    33,    57,    58,    95,
      11
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -97
static const yytype_int16 yypact[] =
{
     -97,     4,    67,   -97,   -97,   -97,   -97,   -97,   -97,   -29,
      -3,    15,   -97,    67,   -15,   -97,   -97,   -12,    23,     7,
      44,    -6,     9,   -97,   -97,   -97,     5,    44,   -97,   444,
     -14,   -97,   -97,   -97,    67,   -97,    44,   310,    44,    44,
      44,    44,    44,    44,    44,    44,    44,    44,    44,    44,
      44,     8,     6,   -97,    47,    14,   444,    18,    16,   -97,
     -14,   -14,   -14,   -14,   -14,   -14,   -14,   -14,   -14,   -97,
     -97,   -97,   -97,    21,    67,   -97,    25,    26,    28,    32,
      37,    40,    44,    48,    49,   -97,    45,    59,   -97,   -97,
      61,   -97,   -97,   -97,    62,    68,   -97,    44,   -97,   -97,
      44,    44,    44,    76,   -97,   -97,   317,    44,    98,   -97,
     -97,   -97,   -97,   -97,   444,   114,   444,   341,   365,   -97,
     -97,    78,   -97,   389,    79,   137,   -97,    75,    77,    44,
     -97,   -97,    65,   -97,   -97,    84,   444,    87,   161,   184,
     125,   135,     1,   -97,   -97,   104,   106,   108,   110,     3,
     -97,   113,   126,    44,    44,   129,   -97,   -97,   -97,   413,
     437,   -97,   208,   231,   130,   132,   255,   -97,   -97,   -97,
     -97,   -97,   278,   302,   -97,   -97
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -97,   -97,   -97,   -97,     0,   -97,   -97,   -97,   -97,    99,
     -93,   -97,   -97,   -96,   -97,   -97,    12,   -97,   -97,   -97,
     -97,   -97,   -27,   454,    57,   -97,   -54,   -97,   -97,   -97,
      -7
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      37,    94,     9,    12,     3,   115,    18,   120,   147,    56,
     155,    13,    47,    48,    49,    50,   125,    76,    17,    19,
      77,    20,    78,    79,    80,    81,    21,    54,    34,    26,
      82,    83,    84,     4,     5,     6,     7,     8,    14,    36,
     138,   139,    22,    73,   144,    35,    74,    23,    24,    25,
      75,    85,   148,    96,   148,   106,    97,    98,   100,    26,
     101,    94,   102,    86,   162,   163,   103,    54,   166,   104,
     114,    94,   105,   116,   117,   118,   172,   173,    27,    76,
     123,   109,   107,   108,    94,    94,     4,     5,     6,     7,
       8,   110,    28,   111,   112,     4,     5,     6,     7,     8,
     113,   124,   136,   119,    69,    70,    71,    72,    94,    94,
     129,   133,    94,   134,   131,   137,   140,    76,    94,    94,
      77,   141,    78,    79,    80,    81,   159,   160,    76,    26,
      82,    83,    84,     4,     5,     6,     7,     8,   146,   151,
      76,   152,   153,    77,   154,    78,    79,    80,    81,   157,
       0,   126,    26,    82,    83,    84,     4,     5,     6,     7,
       8,   156,   158,    86,    76,   161,   169,    77,   170,    78,
      79,    80,    81,    99,   132,     0,    26,    82,    83,    84,
       4,     5,     6,     7,     8,     0,    86,    76,     0,     0,
      77,     0,    78,    79,    80,    81,     0,     0,   142,    26,
      82,    83,    84,     4,     5,     6,     7,     8,     0,     0,
      86,    76,     0,     0,    77,     0,    78,    79,    80,    81,
       0,   143,     0,    26,    82,    83,    84,     4,     5,     6,
       7,     8,     0,    86,    76,     0,     0,    77,     0,    78,
      79,    80,    81,     0,     0,   167,    26,    82,    83,    84,
       4,     5,     6,     7,     8,     0,     0,    86,    76,     0,
       0,    77,     0,    78,    79,    80,    81,     0,   168,     0,
      26,    82,    83,    84,     4,     5,     6,     7,     8,     0,
      86,    76,     0,     0,    77,     0,    78,    79,    80,    81,
       0,     0,   171,    26,    82,    83,    84,     4,     5,     6,
       7,     8,     0,     0,    86,    76,     0,     0,    77,     0,
      78,    79,    80,    81,     0,   174,     0,    26,    82,    83,
      84,     4,     5,     6,     7,     8,     0,    86,     0,     0,
       0,     0,     0,     0,    38,    39,     0,     0,     0,   175,
      40,    38,    39,     0,     0,    59,     0,    40,     0,   122,
       0,    86,    41,    42,    43,    44,    45,    46,     0,    41,
      42,    43,    44,    45,    46,    38,    39,     0,     0,     0,
       0,    40,     0,     0,     0,     0,   127,     0,     0,     0,
       0,     0,     0,    41,    42,    43,    44,    45,    46,    38,
      39,     0,     0,     0,     0,    40,     0,     0,     0,     0,
     128,     0,     0,     0,     0,     0,     0,    41,    42,    43,
      44,    45,    46,    38,    39,     0,     0,     0,     0,    40,
       0,     0,     0,     0,   130,     0,     0,     0,     0,     0,
       0,    41,    42,    43,    44,    45,    46,    38,    39,     0,
       0,     0,     0,    40,     0,     0,     0,     0,   164,     0,
       0,     0,     0,     0,     0,    41,    42,    43,    44,    45,
      46,    38,    39,     0,     0,     0,     0,    40,    38,    39,
       0,     0,   165,     0,    40,     0,     0,     0,     0,    41,
      42,    43,    44,    45,    46,     0,    41,    42,    43,    44,
      45,    46,    60,    61,    62,    63,    64,    65,    66,    67,
      68
};

static const yytype_int16 yycheck[] =
{
      27,    55,     2,    32,     0,    98,    13,   103,     7,    36,
       7,    14,    26,    27,    28,    29,   109,     3,     3,    34,
       6,    33,     8,     9,    10,    11,     3,    34,    34,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    41,    34,
     133,   134,    35,    35,   140,    36,    40,     3,     4,     5,
       3,    37,    51,    35,    51,    82,    40,    36,    33,    15,
      34,   115,    34,    49,   157,   158,    34,    74,   161,    32,
      97,   125,    32,   100,   101,   102,   169,   170,    34,     3,
     107,    36,    34,    34,   138,   139,    19,    20,    21,    22,
      23,    32,    48,    32,    32,    19,    20,    21,    22,    23,
      32,     3,   129,   103,    47,    48,    49,    50,   162,   163,
      32,    36,   166,    36,    35,    50,    32,     3,   172,   173,
       6,    34,     8,     9,    10,    11,   153,   154,     3,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     3,    35,
       3,    35,    34,     6,    34,     8,     9,    10,    11,    36,
      -1,    37,    15,    16,    17,    18,    19,    20,    21,    22,
      23,   149,    36,    49,     3,    36,    36,     6,    36,     8,
       9,    10,    11,    74,    37,    -1,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    49,     3,    -1,    -1,
       6,    -1,     8,     9,    10,    11,    -1,    -1,    37,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      49,     3,    -1,    -1,     6,    -1,     8,     9,    10,    11,
      -1,    37,    -1,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    49,     3,    -1,    -1,     6,    -1,     8,
       9,    10,    11,    -1,    -1,    37,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    49,     3,    -1,
      -1,     6,    -1,     8,     9,    10,    11,    -1,    37,    -1,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      49,     3,    -1,    -1,     6,    -1,     8,     9,    10,    11,
      -1,    -1,    37,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    49,     3,    -1,    -1,     6,    -1,
       8,     9,    10,    11,    -1,    37,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    25,    -1,    -1,    -1,    37,
      30,    24,    25,    -1,    -1,    35,    -1,    30,    -1,    32,
      -1,    49,    42,    43,    44,    45,    46,    47,    -1,    42,
      43,    44,    45,    46,    47,    24,    25,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    44,    45,    46,    47,    24,
      25,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    44,
      45,    46,    47,    24,    25,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    44,    45,    46,    47,    24,    25,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    44,    45,    46,
      47,    24,    25,    -1,    -1,    -1,    -1,    30,    24,    25,
      -1,    -1,    35,    -1,    30,    -1,    -1,    -1,    -1,    42,
      43,    44,    45,    46,    47,    -1,    42,    43,    44,    45,
      46,    47,    38,    39,    40,    41,    42,    43,    44,    45,
      46
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    53,    55,     0,    19,    20,    21,    22,    23,    56,
      57,    82,    32,    14,    41,    54,    58,     3,    82,    34,
      33,     3,    35,     3,     4,     5,    15,    34,    48,    74,
      75,    76,    77,    78,    34,    36,    34,    74,    24,    25,
      30,    42,    43,    44,    45,    46,    47,    26,    27,    28,
      29,    59,    60,    61,    82,    62,    74,    79,    80,    35,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    76,
      76,    76,    76,    35,    40,     3,     3,     6,     8,     9,
      10,    11,    16,    17,    18,    37,    49,    56,    63,    64,
      65,    66,    69,    70,    78,    81,    35,    40,    36,    61,
      33,    34,    34,    34,    32,    32,    74,    34,    34,    36,
      32,    32,    32,    32,    74,    62,    74,    74,    74,    56,
      65,    71,    32,    74,     3,    62,    37,    35,    35,    32,
      35,    35,    37,    36,    36,    72,    74,    50,    62,    62,
      32,    34,    37,    37,    65,    73,     3,     7,    51,    67,
      68,    35,    35,    34,    34,     7,    68,    36,    36,    74,
      74,    36,    62,    62,    35,    35,    62,    37,    37,    36,
      36,    37,    62,    62,    37,    37
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
#line 34 "parser.y"
    {fprintf(output_file, "program execution started\n");;}
    break;

  case 3:
#line 37 "parser.y"
    {fprintf(output_file, "main_function execution started\n");;}
    break;

  case 5:
#line 40 "parser.y"
    {fprintf(output_file, "declarations execution started\n");;}
    break;

  case 6:
#line 43 "parser.y"
    {fprintf(output_file, "declaration execution started....name of the identifier is - %s\n", (yyvsp[(2) - (2)].sval));;}
    break;

  case 7:
#line 44 "parser.y"
    {fprintf(output_file, "declaration execution started....name of the identifier is - %s\n", (yyvsp[(2) - (4)].sval));;}
    break;

  case 8:
#line 47 "parser.y"
    {fprintf(output_file, "end of the functions\n");;}
    break;

  case 9:
#line 48 "parser.y"
    {fprintf(output_file, "declaration of a function\n");;}
    break;

  case 10:
#line 52 "parser.y"
    {fprintf(output_file, "name of the function is - %s and the return type is - ", (yyvsp[(3) - (9)].sval));;}
    break;

  case 11:
#line 55 "parser.y"
    {fprintf(output_file, "no parameters in the function declaration\n");;}
    break;

  case 12:
#line 56 "parser.y"
    {fprintf(output_file, "parameters in the function declaration\n");;}
    break;

  case 14:
#line 61 "parser.y"
    {fprintf(output_file, "parameter_list\n");;}
    break;

  case 15:
#line 65 "parser.y"
    {fprintf(output_file, "parameter of type %s is needed to pass to the function\n");;}
    break;

  case 17:
#line 69 "parser.y"
    {fprintf(output_file, "statements\n");;}
    break;

  case 28:
#line 75 "parser.y"
    {fprintf(output_file, "statement\n");;}
    break;

  case 29:
#line 77 "parser.y"
    {fprintf(output_file, "try_catch_block\n");;}
    break;

  case 30:
#line 80 "parser.y"
    {fprintf(output_file, "assignment\n");;}
    break;

  case 33:
#line 85 "parser.y"
    {fprintf(output_file, "conditional\n");;}
    break;

  case 35:
#line 89 "parser.y"
    {fprintf(output_file, "else_if_blocks\n");;}
    break;

  case 36:
#line 91 "parser.y"
    {fprintf(output_file, "else_if_block\n");;}
    break;

  case 37:
#line 94 "parser.y"
    {fprintf(output_file, "loop\n");;}
    break;

  case 38:
#line 97 "parser.y"
    {fprintf(output_file, "for_loop\n");;}
    break;

  case 41:
#line 100 "parser.y"
    {fprintf(output_file, "for_initialization\n");;}
    break;

  case 43:
#line 103 "parser.y"
    {fprintf(output_file, "for_condition\n");;}
    break;

  case 45:
#line 106 "parser.y"
    {fprintf(output_file, "for_increment\n");;}
    break;

  case 47:
#line 110 "parser.y"
    {fprintf(output_file, "addition operation execution started\n");;}
    break;

  case 48:
#line 111 "parser.y"
    {fprintf(output_file, "subtraction operation execution started\n");;}
    break;

  case 49:
#line 112 "parser.y"
    {fprintf(output_file, "OR operation execution started\n");;}
    break;

  case 50:
#line 113 "parser.y"
    {fprintf(output_file, "less than operation execution started\n");;}
    break;

  case 51:
#line 114 "parser.y"
    {fprintf(output_file, "greater than operation execution started\n");;}
    break;

  case 52:
#line 115 "parser.y"
    {fprintf(output_file, "less than or equal to operation execution started\n");;}
    break;

  case 53:
#line 116 "parser.y"
    {fprintf(output_file, "greater than or equal to operation execution started\n");;}
    break;

  case 54:
#line 117 "parser.y"
    {fprintf(output_file, "equal to operation execution started\n");;}
    break;

  case 55:
#line 118 "parser.y"
    {fprintf(output_file, "not equal to operation execution started\n");;}
    break;

  case 57:
#line 122 "parser.y"
    {fprintf(output_file, "multiplication operation execution started\n");;}
    break;

  case 58:
#line 123 "parser.y"
    {fprintf(output_file, "division operation execution started\n");;}
    break;

  case 59:
#line 124 "parser.y"
    {fprintf(output_file, "modulus operation execution started\n");;}
    break;

  case 60:
#line 125 "parser.y"
    {fprintf(output_file, "bitwise AND operation execution started\n");;}
    break;

  case 61:
#line 128 "parser.y"
    {fprintf(output_file, "factor\n");;}
    break;

  case 62:
#line 129 "parser.y"
    {fprintf(output_file, "name of the identifier is - %s\n", (yyvsp[(1) - (1)].sval));;}
    break;

  case 64:
#line 131 "parser.y"
    {fprintf(output_file, "factor\n");;}
    break;

  case 65:
#line 134 "parser.y"
    {fprintf(output_file, "Artha type variable and the value is - %d\n", (yyvsp[(1) - (1)].ival));;}
    break;

  case 66:
#line 135 "parser.y"
    {fprintf(output_file, "Vani type variable and the value is - %s\n", (yyvsp[(1) - (1)].sval));;}
    break;

  case 67:
#line 136 "parser.y"
    {fprintf(output_file, "Jala type variable and the value is - %f\n", (yyvsp[(1) - (1)].fval));;}
    break;

  case 68:
#line 140 "parser.y"
    {fprintf(output_file, "function_call\n");;}
    break;

  case 70:
#line 144 "parser.y"
    {fprintf(output_file, "arguments\n");;}
    break;

  case 71:
#line 148 "parser.y"
    {fprintf(output_file, "argument_list\n");;}
    break;

  case 72:
#line 149 "parser.y"
    {fprintf(output_file, "comma separated argument_list\n");;}
    break;

  case 73:
#line 153 "parser.y"
    {fprintf(output_file, "taking input from user to the variable %s\n", (yyvsp[(3) - (4)].sval));;}
    break;

  case 74:
#line 154 "parser.y"
    {fprintf(output_file, "printing to the console....\n");;}
    break;

  case 75:
#line 157 "parser.y"
    {fprintf(output_file, "data type is - %s\n", "ARTHA");;}
    break;

  case 76:
#line 158 "parser.y"
    {fprintf(output_file, "data type is - %s\n", "JALA");;}
    break;

  case 77:
#line 159 "parser.y"
    {fprintf(output_file, "data type is - %s\n", "SATYA");;}
    break;

  case 78:
#line 160 "parser.y"
    {fprintf(output_file, "data type is - %s\n", "AKSHARA");;}
    break;

  case 79:
#line 161 "parser.y"
    {fprintf(output_file, "data type is - %s\n", "VANI");;}
    break;


/* Line 1267 of yacc.c.  */
#line 1912 "parser.tab.c"
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


#line 164 "parser.y"


int main(int argc, char *argv[]) {

    output_file = fopen("output.txt", "w");
    if (output_file == NULL) {
        printf("Error: Failed to open output file\n");
        return 1;
    }

    yyparse();
    return 0;
}

void yyerror(const char *s) {
    printf("Error: %s\n", s);
    fprintf(output_file, "Error: %s\n", s);
}

