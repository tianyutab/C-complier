/* A Bison parser, made by GNU Bison 3.7.5.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30705

/* Bison version string.  */
#define YYBISON_VERSION "3.7.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 3 "parser.y"

#include "stdio.h"
#include "math.h"
#include "string.h"
#include "def.h"


symboltable symbolTable;
symbol_scope_begin symbol_scope_TX;
extern int yylineno;
extern char *yytext;
extern FILE *yyin;
extern int yylex(void);
void yyerror(const char* fmt, ...);
void display(struct node *,int);

#line 88 "parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT = 3,                        /* INT  */
  YYSYMBOL_ID = 4,                         /* ID  */
  YYSYMBOL_RELOP = 5,                      /* RELOP  */
  YYSYMBOL_TYPE = 6,                       /* TYPE  */
  YYSYMBOL_FLOAT = 7,                      /* FLOAT  */
  YYSYMBOL_CHAR = 8,                       /* CHAR  */
  YYSYMBOL_STRING = 9,                     /* STRING  */
  YYSYMBOL_STRUCT = 10,                    /* STRUCT  */
  YYSYMBOL_LP = 11,                        /* LP  */
  YYSYMBOL_RP = 12,                        /* RP  */
  YYSYMBOL_LB = 13,                        /* LB  */
  YYSYMBOL_RB = 14,                        /* RB  */
  YYSYMBOL_LC = 15,                        /* LC  */
  YYSYMBOL_RC = 16,                        /* RC  */
  YYSYMBOL_SEMI = 17,                      /* SEMI  */
  YYSYMBOL_COMMA = 18,                     /* COMMA  */
  YYSYMBOL_DOT = 19,                       /* DOT  */
  YYSYMBOL_PLUS_ONE = 20,                  /* PLUS_ONE  */
  YYSYMBOL_MINUS_ONE = 21,                 /* MINUS_ONE  */
  YYSYMBOL_PLUS = 22,                      /* PLUS  */
  YYSYMBOL_MINUS = 23,                     /* MINUS  */
  YYSYMBOL_STAR = 24,                      /* STAR  */
  YYSYMBOL_DIV = 25,                       /* DIV  */
  YYSYMBOL_ASSIGNOP = 26,                  /* ASSIGNOP  */
  YYSYMBOL_ASSIGNOP_MINUS = 27,            /* ASSIGNOP_MINUS  */
  YYSYMBOL_ASSIGNOP_PLUS = 28,             /* ASSIGNOP_PLUS  */
  YYSYMBOL_ASSIGNOP_DIV = 29,              /* ASSIGNOP_DIV  */
  YYSYMBOL_ASSIGNOP_STAR = 30,             /* ASSIGNOP_STAR  */
  YYSYMBOL_AND = 31,                       /* AND  */
  YYSYMBOL_OR = 32,                        /* OR  */
  YYSYMBOL_NOT = 33,                       /* NOT  */
  YYSYMBOL_IF = 34,                        /* IF  */
  YYSYMBOL_ELSE = 35,                      /* ELSE  */
  YYSYMBOL_WHILE = 36,                     /* WHILE  */
  YYSYMBOL_FOR = 37,                       /* FOR  */
  YYSYMBOL_RETURN = 38,                    /* RETURN  */
  YYSYMBOL_UMINUS = 39,                    /* UMINUS  */
  YYSYMBOL_LOWER_THEN_ELSE = 40,           /* LOWER_THEN_ELSE  */
  YYSYMBOL_YYACCEPT = 41,                  /* $accept  */
  YYSYMBOL_program = 42,                   /* program  */
  YYSYMBOL_ExtDefList = 43,                /* ExtDefList  */
  YYSYMBOL_ExtDef = 44,                    /* ExtDef  */
  YYSYMBOL_ExtDecList = 45,                /* ExtDecList  */
  YYSYMBOL_Specifier = 46,                 /* Specifier  */
  YYSYMBOL_StructSpecifier = 47,           /* StructSpecifier  */
  YYSYMBOL_OptTag = 48,                    /* OptTag  */
  YYSYMBOL_VarDec = 49,                    /* VarDec  */
  YYSYMBOL_FuncDec = 50,                   /* FuncDec  */
  YYSYMBOL_VarList = 51,                   /* VarList  */
  YYSYMBOL_ParamDec = 52,                  /* ParamDec  */
  YYSYMBOL_CompSt = 53,                    /* CompSt  */
  YYSYMBOL_StmList = 54,                   /* StmList  */
  YYSYMBOL_Stmt = 55,                      /* Stmt  */
  YYSYMBOL_ForDec = 56,                    /* ForDec  */
  YYSYMBOL_DefList = 57,                   /* DefList  */
  YYSYMBOL_Def = 58,                       /* Def  */
  YYSYMBOL_DecList = 59,                   /* DecList  */
  YYSYMBOL_Dec = 60,                       /* Dec  */
  YYSYMBOL_Exp = 61,                       /* Exp  */
  YYSYMBOL_Args = 62                       /* Args  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

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
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   407

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  69
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  138

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   295


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    58,    58,    60,    61,    63,    64,    65,    66,    69,
      70,    73,    74,    77,    78,    81,    84,    85,    88,    89,
      92,    93,    96,   100,   102,   103,   105,   106,   107,   108,
     109,   110,   111,   114,   115,   118,   119,   121,   123,   124,
     126,   127,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   157,   158
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INT", "ID", "RELOP",
  "TYPE", "FLOAT", "CHAR", "STRING", "STRUCT", "LP", "RP", "LB", "RB",
  "LC", "RC", "SEMI", "COMMA", "DOT", "PLUS_ONE", "MINUS_ONE", "PLUS",
  "MINUS", "STAR", "DIV", "ASSIGNOP", "ASSIGNOP_MINUS", "ASSIGNOP_PLUS",
  "ASSIGNOP_DIV", "ASSIGNOP_STAR", "AND", "OR", "NOT", "IF", "ELSE",
  "WHILE", "FOR", "RETURN", "UMINUS", "LOWER_THEN_ELSE", "$accept",
  "program", "ExtDefList", "ExtDef", "ExtDecList", "Specifier",
  "StructSpecifier", "OptTag", "VarDec", "FuncDec", "VarList", "ParamDec",
  "CompSt", "StmList", "Stmt", "ForDec", "DefList", "Def", "DecList",
  "Dec", "Exp", "Args", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295
};
#endif

#define YYPACT_NINF (-82)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-4)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     133,   -12,   -82,    23,    42,   -82,   133,    45,    39,   -82,
     -82,    43,   -82,   -82,    49,    46,    -5,    53,   -82,    37,
       4,   -82,    68,    72,    37,   -82,    72,   -82,    56,    37,
     -82,    72,    65,    66,    73,   -82,   -82,    58,    -9,    69,
      67,   -82,   -82,    75,   -82,    37,   -82,   -82,    78,   -82,
     -82,   -82,   181,   181,   181,    79,    82,    88,   181,   -82,
      84,    58,   193,   181,   -82,    72,   -82,   103,   208,     5,
       5,   181,   181,   121,   224,   -82,   -82,   181,   181,   -82,
     104,    94,   138,   149,   170,   181,   181,   181,   347,   -82,
     -82,   239,    97,   -82,   254,   269,   181,   101,   285,   -82,
     382,   300,   -82,   -82,   181,    26,    71,   181,    26,   181,
       5,   181,     5,   347,   375,   362,   181,   -82,    58,    58,
     316,    58,   181,   -82,   347,   347,   347,   347,   -82,    83,
     -82,   -82,   -82,   332,    58,   181,   -82,   347
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,    11,     0,     0,     2,     0,     0,    12,     8,
      15,    14,     1,     4,    16,     0,     9,     0,     6,    35,
       0,     5,     0,     0,    35,     7,     0,    12,     0,    35,
      19,     0,     0,    20,     0,    16,    10,    24,    40,     0,
      38,    13,    36,    22,    18,     0,    17,    64,    63,    65,
      66,    67,     0,     0,     0,     0,     0,     0,     0,    27,
       0,    24,     0,     0,    37,     0,    21,     0,     0,    57,
      58,     0,     0,     0,     0,    23,    25,     0,     0,    26,
       0,     0,     0,     0,     0,     0,     0,     0,    41,    39,
      60,    69,     0,    56,     0,     0,     0,     0,     0,    28,
      45,     0,    62,    47,     0,    46,    50,     0,    49,     0,
      52,     0,    54,    42,    43,    44,     0,    59,     0,     0,
       0,     0,     0,    61,    48,    51,    53,    55,    68,    29,
      31,    34,    32,     0,     0,     0,    30,    33
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -82,   -82,   113,   -82,    98,     3,    22,   -82,   -19,   -82,
      77,   -82,   106,    70,   -81,   -82,    12,   -82,    85,   -82,
     -52,    19
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     4,     5,     6,    15,    26,    27,    11,    16,    17,
      32,    33,    59,    60,    61,    97,    28,    29,    39,    40,
      62,    92
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      68,    69,    70,     7,    22,     9,    74,    38,    22,     7,
       2,    88,    43,    23,     3,    91,    30,    63,    78,    94,
      95,    98,     8,    31,    80,   100,   101,    10,     8,   105,
     108,   110,   112,   113,   114,   115,    37,   129,   130,    78,
     132,    42,    12,     2,   120,    80,    38,     3,    31,    14,
      83,    84,   124,   136,    69,   125,    18,   126,    19,   127,
      20,    47,    48,    21,    91,    49,    50,    51,    24,    52,
     133,    34,    41,    24,    47,    48,    35,    44,    49,    50,
      51,    53,    52,   137,    45,    65,    64,    46,    22,    67,
      71,    54,    55,    72,    56,    57,    58,    47,    48,    73,
      75,    49,    50,    51,    54,    52,    47,    48,   102,   117,
      49,    50,    51,   121,    52,    90,   103,    53,   134,    13,
     104,    36,    66,    25,    47,    48,    53,    54,    49,    50,
      51,    76,    52,    -3,     1,   128,    54,     0,    96,     2,
       0,    47,    48,     3,    53,    49,    50,    51,     0,    52,
      89,     0,    47,    48,    54,     0,    49,    50,    51,     0,
      52,   106,     0,     0,   107,     0,     0,     0,     0,     0,
       0,    54,    53,    47,    48,   109,     0,    49,    50,    51,
       0,    52,    54,     0,    47,    48,     0,     0,    49,    50,
      51,     0,    52,    53,     0,     0,   111,     0,    77,     0,
       0,     0,     0,    54,    53,     0,    78,     0,     0,     0,
      79,     0,    80,    77,    54,    81,    82,    83,    84,    85,
      93,    78,     0,     0,    86,    87,     0,    80,     0,    77,
      81,    82,    83,    84,    85,     0,     0,    78,     0,    86,
      87,    99,     0,    80,    77,     0,    81,    82,    83,    84,
      85,     0,    78,     0,     0,    86,    87,   116,    80,    77,
       0,    81,    82,    83,    84,    85,   118,    78,     0,     0,
      86,    87,     0,    80,    77,     0,    81,    82,    83,    84,
      85,   119,    78,     0,     0,    86,    87,     0,    80,     0,
      77,    81,    82,    83,    84,    85,     0,     0,    78,     0,
      86,    87,   122,     0,    80,    77,     0,    81,    82,    83,
      84,    85,     0,    78,   123,     0,    86,    87,     0,    80,
       0,    77,    81,    82,    83,    84,    85,     0,     0,    78,
       0,    86,    87,   131,     0,    80,     0,    77,    81,    82,
      83,    84,    85,     0,     0,    78,     0,    86,    87,   135,
       0,    80,    77,     0,    81,    82,    83,    84,    85,     0,
      78,     0,     0,    86,    87,     0,    80,    77,     0,    81,
      82,    83,    84,    85,     0,    78,     0,     0,    86,    87,
      77,    80,     0,     0,    81,    82,    83,    84,    78,     0,
       0,     0,     0,    86,    80,    78,     0,    81,    82,    83,
      84,    80,     0,     0,    81,    82,    83,    84
};

static const yytype_int16 yycheck[] =
{
      52,    53,    54,     0,    13,    17,    58,    26,    13,     6,
       6,    63,    31,    18,    10,    67,    12,    26,    13,    71,
      72,    73,     0,    20,    19,    77,    78,     4,     6,    81,
      82,    83,    84,    85,    86,    87,    24,   118,   119,    13,
     121,    29,     0,     6,    96,    19,    65,    10,    45,     4,
      24,    25,   104,   134,   106,   107,    17,   109,    15,   111,
      11,     3,     4,    17,   116,     7,     8,     9,    15,    11,
     122,     3,    16,    15,     3,     4,     4,    12,     7,     8,
       9,    23,    11,   135,    18,    18,    17,    14,    13,    11,
      11,    33,    34,    11,    36,    37,    38,     3,     4,    11,
      16,     7,     8,     9,    33,    11,     3,     4,     4,    12,
       7,     8,     9,    12,    11,    12,    22,    23,    35,     6,
      26,    23,    45,    17,     3,     4,    23,    33,     7,     8,
       9,    61,    11,     0,     1,   116,    33,    -1,    17,     6,
      -1,     3,     4,    10,    23,     7,     8,     9,    -1,    11,
      65,    -1,     3,     4,    33,    -1,     7,     8,     9,    -1,
      11,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    23,     3,     4,    26,    -1,     7,     8,     9,
      -1,    11,    33,    -1,     3,     4,    -1,    -1,     7,     8,
       9,    -1,    11,    23,    -1,    -1,    26,    -1,     5,    -1,
      -1,    -1,    -1,    33,    23,    -1,    13,    -1,    -1,    -1,
      17,    -1,    19,     5,    33,    22,    23,    24,    25,    26,
      12,    13,    -1,    -1,    31,    32,    -1,    19,    -1,     5,
      22,    23,    24,    25,    26,    -1,    -1,    13,    -1,    31,
      32,    17,    -1,    19,     5,    -1,    22,    23,    24,    25,
      26,    -1,    13,    -1,    -1,    31,    32,    18,    19,     5,
      -1,    22,    23,    24,    25,    26,    12,    13,    -1,    -1,
      31,    32,    -1,    19,     5,    -1,    22,    23,    24,    25,
      26,    12,    13,    -1,    -1,    31,    32,    -1,    19,    -1,
       5,    22,    23,    24,    25,    26,    -1,    -1,    13,    -1,
      31,    32,    17,    -1,    19,     5,    -1,    22,    23,    24,
      25,    26,    -1,    13,    14,    -1,    31,    32,    -1,    19,
      -1,     5,    22,    23,    24,    25,    26,    -1,    -1,    13,
      -1,    31,    32,    17,    -1,    19,    -1,     5,    22,    23,
      24,    25,    26,    -1,    -1,    13,    -1,    31,    32,    17,
      -1,    19,     5,    -1,    22,    23,    24,    25,    26,    -1,
      13,    -1,    -1,    31,    32,    -1,    19,     5,    -1,    22,
      23,    24,    25,    26,    -1,    13,    -1,    -1,    31,    32,
       5,    19,    -1,    -1,    22,    23,    24,    25,    13,    -1,
      -1,    -1,    -1,    31,    19,    13,    -1,    22,    23,    24,
      25,    19,    -1,    -1,    22,    23,    24,    25
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     6,    10,    42,    43,    44,    46,    47,    17,
       4,    48,     0,    43,     4,    45,    49,    50,    17,    15,
      11,    17,    13,    18,    15,    53,    46,    47,    57,    58,
      12,    46,    51,    52,     3,     4,    45,    57,    49,    59,
      60,    16,    57,    49,    12,    18,    14,     3,     4,     7,
       8,     9,    11,    23,    33,    34,    36,    37,    38,    53,
      54,    55,    61,    26,    17,    18,    51,    11,    61,    61,
      61,    11,    11,    11,    61,    16,    54,     5,    13,    17,
      19,    22,    23,    24,    25,    26,    31,    32,    61,    59,
      12,    61,    62,    12,    61,    61,    17,    56,    61,    17,
      61,    61,     4,    22,    26,    61,    23,    26,    61,    26,
      61,    26,    61,    61,    61,    61,    18,    12,    12,    12,
      61,    12,    17,    14,    61,    61,    61,    61,    62,    55,
      55,    17,    55,    61,    35,    17,    55,    61
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    41,    42,    43,    43,    44,    44,    44,    44,    45,
      45,    46,    46,    47,    47,    48,    49,    49,    50,    50,
      51,    51,    52,    53,    54,    54,    55,    55,    55,    55,
      55,    55,    55,    56,    56,    57,    57,    58,    59,    59,
      60,    60,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    62,    62
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     3,     2,     3,     2,     1,
       3,     1,     1,     5,     2,     1,     1,     4,     4,     3,
       1,     3,     2,     4,     0,     2,     2,     1,     3,     5,
       7,     5,     5,     5,     3,     0,     2,     3,     1,     3,
       1,     3,     3,     3,     3,     3,     3,     3,     4,     3,
       3,     4,     3,     4,     3,     4,     3,     2,     2,     4,
       3,     4,     3,     1,     1,     1,     1,     1,     3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YY_LOCATION_PRINT
#  if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#   define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

#  else
#   define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#  endif
# endif /* !defined YY_LOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: ExtDefList  */
#line 58 "parser.y"
                       {semantic_Analysis0((yyvsp[0].ptr));}
#line 1656 "parser.tab.c"
    break;

  case 3: /* ExtDefList: %empty  */
#line 60 "parser.y"
            {(yyval.ptr)=NULL;}
#line 1662 "parser.tab.c"
    break;

  case 4: /* ExtDefList: ExtDef ExtDefList  */
#line 61 "parser.y"
                              {(yyval.ptr)=mknode(EXT_DEF_LIST,(yyvsp[-1].ptr),(yyvsp[0].ptr),NULL,yylineno);}
#line 1668 "parser.tab.c"
    break;

  case 5: /* ExtDef: Specifier ExtDecList SEMI  */
#line 63 "parser.y"
                                      {(yyval.ptr)=mknode(EXT_VAR_DEF,(yyvsp[-2].ptr),(yyvsp[-1].ptr),NULL,yylineno);}
#line 1674 "parser.tab.c"
    break;

  case 6: /* ExtDef: StructSpecifier SEMI  */
#line 64 "parser.y"
                                {(yyval.ptr)=mknode(EXT_STRUCT_DEF,(yyvsp[-1].ptr),NULL,NULL,yylineno);}
#line 1680 "parser.tab.c"
    break;

  case 7: /* ExtDef: Specifier FuncDec CompSt  */
#line 65 "parser.y"
                                       {(yyval.ptr)=mknode(FUNC_DEF,(yyvsp[-2].ptr),(yyvsp[-1].ptr),(yyvsp[0].ptr),yylineno);}
#line 1686 "parser.tab.c"
    break;

  case 8: /* ExtDef: error SEMI  */
#line 66 "parser.y"
                        {(yyval.ptr)=NULL;}
#line 1692 "parser.tab.c"
    break;

  case 9: /* ExtDecList: VarDec  */
#line 69 "parser.y"
                         {(yyval.ptr)=(yyvsp[0].ptr);}
#line 1698 "parser.tab.c"
    break;

  case 10: /* ExtDecList: VarDec COMMA ExtDecList  */
#line 70 "parser.y"
                                     {(yyval.ptr)=mknode(EXT_DEC_LIST,(yyvsp[-2].ptr),(yyvsp[0].ptr),NULL,yylineno);}
#line 1704 "parser.tab.c"
    break;

  case 11: /* Specifier: TYPE  */
#line 73 "parser.y"
                    {(yyval.ptr)=mknode(TYPE,NULL,NULL,NULL,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[0].type_id));if(!strcmp((yyvsp[0].type_id), "int"))(yyval.ptr)->type=INT;if(!strcmp((yyvsp[0].type_id), "float"))(yyval.ptr)->type=FLOAT;if(!strcmp((yyvsp[0].type_id), "char"))(yyval.ptr)->type=CHAR;if(!strcmp((yyvsp[0].type_id), "string"))(yyval.ptr)->type=STRING;}
#line 1710 "parser.tab.c"
    break;

  case 12: /* Specifier: StructSpecifier  */
#line 74 "parser.y"
                             {(yyval.ptr)=(yyvsp[0].ptr);}
#line 1716 "parser.tab.c"
    break;

  case 13: /* StructSpecifier: STRUCT OptTag LC DefList RC  */
#line 77 "parser.y"
                                             {(yyval.ptr)=mknode(STRUCT_DEF,(yyvsp[-3].ptr),(yyvsp[-1].ptr),NULL,yylineno);}
#line 1722 "parser.tab.c"
    break;

  case 14: /* StructSpecifier: STRUCT OptTag  */
#line 78 "parser.y"
                           {(yyval.ptr)=mknode(STRUCT_DEC,(yyvsp[0].ptr),NULL,NULL,yylineno);}
#line 1728 "parser.tab.c"
    break;

  case 15: /* OptTag: ID  */
#line 81 "parser.y"
           {(yyval.ptr)=mknode(ID,NULL,NULL,NULL,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[0].type_id));}
#line 1734 "parser.tab.c"
    break;

  case 16: /* VarDec: ID  */
#line 84 "parser.y"
                     {(yyval.ptr)=mknode(ID,NULL,NULL,NULL,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[0].type_id));}
#line 1740 "parser.tab.c"
    break;

  case 17: /* VarDec: VarDec LB INT RB  */
#line 85 "parser.y"
                           {struct node *temp=mknode(INT,NULL,NULL,NULL,yylineno);temp->type_int=(yyvsp[-1].type_int);(yyval.ptr)=mknode(ARRAY_DEC, (yyvsp[-3].ptr), temp, NULL,yylineno);}
#line 1746 "parser.tab.c"
    break;

  case 18: /* FuncDec: ID LP VarList RP  */
#line 88 "parser.y"
                            {(yyval.ptr)=mknode(FUNC_DEC,(yyvsp[-1].ptr),NULL,NULL,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[-3].type_id));}
#line 1752 "parser.tab.c"
    break;

  case 19: /* FuncDec: ID LP RP  */
#line 89 "parser.y"
                     {(yyval.ptr)=mknode(FUNC_DEC,NULL,NULL,NULL,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[-2].type_id));}
#line 1758 "parser.tab.c"
    break;

  case 20: /* VarList: ParamDec  */
#line 92 "parser.y"
                   {(yyval.ptr)=mknode(PARAM_LIST,(yyvsp[0].ptr),NULL,NULL,yylineno);}
#line 1764 "parser.tab.c"
    break;

  case 21: /* VarList: ParamDec COMMA VarList  */
#line 93 "parser.y"
                                   {(yyval.ptr)=mknode(PARAM_LIST,(yyvsp[-2].ptr),(yyvsp[0].ptr),NULL,yylineno);}
#line 1770 "parser.tab.c"
    break;

  case 22: /* ParamDec: Specifier VarDec  */
#line 96 "parser.y"
                                   {(yyval.ptr)=mknode(PARAM_DEC,(yyvsp[-1].ptr),(yyvsp[0].ptr),NULL,yylineno);}
#line 1776 "parser.tab.c"
    break;

  case 23: /* CompSt: LC DefList StmList RC  */
#line 100 "parser.y"
                                 {(yyval.ptr)=mknode(COMP_STM,(yyvsp[-2].ptr),(yyvsp[-1].ptr),NULL,yylineno);}
#line 1782 "parser.tab.c"
    break;

  case 24: /* StmList: %empty  */
#line 102 "parser.y"
         {(yyval.ptr)=NULL; }
#line 1788 "parser.tab.c"
    break;

  case 25: /* StmList: Stmt StmList  */
#line 103 "parser.y"
                        {(yyval.ptr)=mknode(STM_LIST,(yyvsp[-1].ptr),(yyvsp[0].ptr),NULL,yylineno);}
#line 1794 "parser.tab.c"
    break;

  case 26: /* Stmt: Exp SEMI  */
#line 105 "parser.y"
                    {(yyval.ptr)=mknode(EXP_STMT,(yyvsp[-1].ptr),NULL,NULL,yylineno);}
#line 1800 "parser.tab.c"
    break;

  case 27: /* Stmt: CompSt  */
#line 106 "parser.y"
                    {(yyval.ptr)=(yyvsp[0].ptr);}
#line 1806 "parser.tab.c"
    break;

  case 28: /* Stmt: RETURN Exp SEMI  */
#line 107 "parser.y"
                          {(yyval.ptr)=mknode(RETURN,(yyvsp[-1].ptr),NULL,NULL,yylineno);}
#line 1812 "parser.tab.c"
    break;

  case 29: /* Stmt: IF LP Exp RP Stmt  */
#line 108 "parser.y"
                                                  {(yyval.ptr)=mknode(IF_THEN,(yyvsp[-2].ptr),(yyvsp[0].ptr),NULL,yylineno);}
#line 1818 "parser.tab.c"
    break;

  case 30: /* Stmt: IF LP Exp RP Stmt ELSE Stmt  */
#line 109 "parser.y"
                                      {(yyval.ptr)=mknode(IF_THEN_ELSE,(yyvsp[-4].ptr),(yyvsp[-2].ptr),(yyvsp[0].ptr),yylineno);}
#line 1824 "parser.tab.c"
    break;

  case 31: /* Stmt: WHILE LP Exp RP Stmt  */
#line 110 "parser.y"
                             {(yyval.ptr)=mknode(WHILE,(yyvsp[-2].ptr),(yyvsp[0].ptr),NULL,yylineno);}
#line 1830 "parser.tab.c"
    break;

  case 32: /* Stmt: FOR LP ForDec RP Stmt  */
#line 111 "parser.y"
                              {(yyval.ptr)=mknode(FOR,(yyvsp[-2].ptr),(yyvsp[0].ptr),NULL,yylineno);}
#line 1836 "parser.tab.c"
    break;

  case 33: /* ForDec: Exp SEMI Exp SEMI Exp  */
#line 114 "parser.y"
                              {(yyval.ptr)=mknode(FOR_DEC,(yyvsp[-4].ptr),(yyvsp[-2].ptr),(yyvsp[0].ptr),yylineno);}
#line 1842 "parser.tab.c"
    break;

  case 34: /* ForDec: SEMI Exp SEMI  */
#line 115 "parser.y"
                       {(yyval.ptr)=mknode(FOR_DEC,NULL,(yyvsp[-1].ptr),NULL,yylineno);}
#line 1848 "parser.tab.c"
    break;

  case 35: /* DefList: %empty  */
#line 118 "parser.y"
         {(yyval.ptr)=NULL; }
#line 1854 "parser.tab.c"
    break;

  case 36: /* DefList: Def DefList  */
#line 119 "parser.y"
                      {(yyval.ptr)=mknode(DEF_LIST,(yyvsp[-1].ptr),(yyvsp[0].ptr),NULL,yylineno);}
#line 1860 "parser.tab.c"
    break;

  case 37: /* Def: Specifier DecList SEMI  */
#line 121 "parser.y"
                               {(yyval.ptr)=mknode(VAR_DEF,(yyvsp[-2].ptr),(yyvsp[-1].ptr),NULL,yylineno);}
#line 1866 "parser.tab.c"
    break;

  case 38: /* DecList: Dec  */
#line 123 "parser.y"
              {(yyval.ptr)=mknode(DEC_LIST,(yyvsp[0].ptr),NULL,NULL,yylineno);}
#line 1872 "parser.tab.c"
    break;

  case 39: /* DecList: Dec COMMA DecList  */
#line 124 "parser.y"
                            {(yyval.ptr)=mknode(DEC_LIST,(yyvsp[-2].ptr),(yyvsp[0].ptr),NULL,yylineno);}
#line 1878 "parser.tab.c"
    break;

  case 40: /* Dec: VarDec  */
#line 126 "parser.y"
                 {(yyval.ptr)=(yyvsp[0].ptr);}
#line 1884 "parser.tab.c"
    break;

  case 41: /* Dec: VarDec ASSIGNOP Exp  */
#line 127 "parser.y"
                              {(yyval.ptr)=mknode(ASSIGNOP,(yyvsp[-2].ptr),(yyvsp[0].ptr),NULL,yylineno);strcpy((yyval.ptr)->type_id,"ASSIGNOP");}
#line 1890 "parser.tab.c"
    break;

  case 42: /* Exp: Exp ASSIGNOP Exp  */
#line 129 "parser.y"
                         {(yyval.ptr)=mknode(ASSIGNOP,(yyvsp[-2].ptr),(yyvsp[0].ptr),NULL,yylineno);strcpy((yyval.ptr)->type_id,"ASSIGNOP");}
#line 1896 "parser.tab.c"
    break;

  case 43: /* Exp: Exp AND Exp  */
#line 130 "parser.y"
                      {(yyval.ptr)=mknode(AND,(yyvsp[-2].ptr),(yyvsp[0].ptr),NULL,yylineno);strcpy((yyval.ptr)->type_id,"AND");}
#line 1902 "parser.tab.c"
    break;

  case 44: /* Exp: Exp OR Exp  */
#line 131 "parser.y"
                      {(yyval.ptr)=mknode(OR,(yyvsp[-2].ptr),(yyvsp[0].ptr),NULL,yylineno);strcpy((yyval.ptr)->type_id,"OR");}
#line 1908 "parser.tab.c"
    break;

  case 45: /* Exp: Exp RELOP Exp  */
#line 132 "parser.y"
                      {(yyval.ptr)=mknode(RELOP,(yyvsp[-2].ptr),(yyvsp[0].ptr),NULL,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[-1].type_id));}
#line 1914 "parser.tab.c"
    break;

  case 46: /* Exp: Exp PLUS Exp  */
#line 133 "parser.y"
                      {(yyval.ptr)=mknode(PLUS,(yyvsp[-2].ptr),(yyvsp[0].ptr),NULL,yylineno);strcpy((yyval.ptr)->type_id,"PLUS");}
#line 1920 "parser.tab.c"
    break;

  case 47: /* Exp: Exp PLUS PLUS  */
#line 134 "parser.y"
                       {(yyval.ptr)=mknode(PLUS_ONE,(yyvsp[-2].ptr),NULL,NULL,yylineno);strcpy((yyval.ptr)->type_id,"PLUS_ONE");}
#line 1926 "parser.tab.c"
    break;

  case 48: /* Exp: Exp PLUS ASSIGNOP Exp  */
#line 135 "parser.y"
                              {(yyval.ptr)=mknode(ASSIGNOP_PLUS,(yyvsp[-3].ptr),(yyvsp[0].ptr),NULL,yylineno);strcpy((yyval.ptr)->type_id,"ASSIGNOP_PLUS");}
#line 1932 "parser.tab.c"
    break;

  case 49: /* Exp: Exp MINUS Exp  */
#line 136 "parser.y"
                      {(yyval.ptr)=mknode(MINUS,(yyvsp[-2].ptr),(yyvsp[0].ptr),NULL,yylineno);strcpy((yyval.ptr)->type_id,"MINUS");}
#line 1938 "parser.tab.c"
    break;

  case 50: /* Exp: Exp MINUS MINUS  */
#line 137 "parser.y"
                         {(yyval.ptr)=mknode(MINUS_ONE,(yyvsp[-2].ptr),NULL,NULL,yylineno);strcpy((yyval.ptr)->type_id,"MINUS_ONE");}
#line 1944 "parser.tab.c"
    break;

  case 51: /* Exp: Exp MINUS ASSIGNOP Exp  */
#line 138 "parser.y"
                               {(yyval.ptr)=mknode(ASSIGNOP_MINUS,(yyvsp[-3].ptr),(yyvsp[0].ptr),NULL,yylineno);strcpy((yyval.ptr)->type_id,"ASSIGNOP_MINUS");}
#line 1950 "parser.tab.c"
    break;

  case 52: /* Exp: Exp STAR Exp  */
#line 139 "parser.y"
                      {(yyval.ptr)=mknode(STAR,(yyvsp[-2].ptr),(yyvsp[0].ptr),NULL,yylineno);strcpy((yyval.ptr)->type_id,"STAR");}
#line 1956 "parser.tab.c"
    break;

  case 53: /* Exp: Exp STAR ASSIGNOP Exp  */
#line 140 "parser.y"
                              {(yyval.ptr)=mknode(ASSIGNOP_STAR,(yyvsp[-3].ptr),(yyvsp[0].ptr),NULL,yylineno);strcpy((yyval.ptr)->type_id,"ASSIGNOP_STAR");}
#line 1962 "parser.tab.c"
    break;

  case 54: /* Exp: Exp DIV Exp  */
#line 141 "parser.y"
                      {(yyval.ptr)=mknode(DIV,(yyvsp[-2].ptr),(yyvsp[0].ptr),NULL,yylineno);strcpy((yyval.ptr)->type_id,"DIV");}
#line 1968 "parser.tab.c"
    break;

  case 55: /* Exp: Exp DIV ASSIGNOP Exp  */
#line 142 "parser.y"
                             {(yyval.ptr)=mknode(ASSIGNOP_DIV,(yyvsp[-3].ptr),(yyvsp[0].ptr),NULL,yylineno);strcpy((yyval.ptr)->type_id,"ASSIGNOP_DIV");}
#line 1974 "parser.tab.c"
    break;

  case 56: /* Exp: LP Exp RP  */
#line 143 "parser.y"
                      {(yyval.ptr)=(yyvsp[-1].ptr);}
#line 1980 "parser.tab.c"
    break;

  case 57: /* Exp: MINUS Exp  */
#line 144 "parser.y"
                                 {(yyval.ptr)=mknode(UMINUS,(yyvsp[0].ptr),NULL,NULL,yylineno);strcpy((yyval.ptr)->type_id,"UMINUS");}
#line 1986 "parser.tab.c"
    break;

  case 58: /* Exp: NOT Exp  */
#line 145 "parser.y"
                      {(yyval.ptr)=mknode(NOT,(yyvsp[0].ptr),NULL,NULL,yylineno);strcpy((yyval.ptr)->type_id,"NOT");}
#line 1992 "parser.tab.c"
    break;

  case 59: /* Exp: ID LP Args RP  */
#line 146 "parser.y"
                      {(yyval.ptr)=mknode(FUNC_CALL,(yyvsp[-1].ptr),NULL,NULL,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[-3].type_id));}
#line 1998 "parser.tab.c"
    break;

  case 60: /* Exp: ID LP RP  */
#line 147 "parser.y"
                      {(yyval.ptr)=mknode(FUNC_CALL,NULL,NULL,NULL,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[-2].type_id));}
#line 2004 "parser.tab.c"
    break;

  case 61: /* Exp: Exp LB Exp RB  */
#line 148 "parser.y"
                      {(yyval.ptr)=mknode(EXP_ARRAY,(yyvsp[-3].ptr),(yyvsp[-1].ptr),NULL,yylineno);}
#line 2010 "parser.tab.c"
    break;

  case 62: /* Exp: Exp DOT ID  */
#line 149 "parser.y"
                      {struct node *temp=mknode(ID,NULL,NULL,NULL,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[0].type_id));(yyval.ptr)=mknode(EXP_ELE,(yyvsp[-2].ptr),temp,NULL,yylineno);}
#line 2016 "parser.tab.c"
    break;

  case 63: /* Exp: ID  */
#line 150 "parser.y"
                      {(yyval.ptr)=mknode(ID,NULL,NULL,NULL,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[0].type_id));}
#line 2022 "parser.tab.c"
    break;

  case 64: /* Exp: INT  */
#line 151 "parser.y"
                      {(yyval.ptr)=mknode(INT,NULL,NULL,NULL,yylineno);(yyval.ptr)->type_int=(yyvsp[0].type_int);(yyval.ptr)->type=INT;}
#line 2028 "parser.tab.c"
    break;

  case 65: /* Exp: FLOAT  */
#line 152 "parser.y"
                      {(yyval.ptr)=mknode(FLOAT,NULL,NULL,NULL,yylineno);(yyval.ptr)->type_float=(yyvsp[0].type_float);(yyval.ptr)->type=FLOAT;}
#line 2034 "parser.tab.c"
    break;

  case 66: /* Exp: CHAR  */
#line 153 "parser.y"
                       {(yyval.ptr)=mknode(CHAR,NULL,NULL,NULL,yylineno);(yyval.ptr)->type_char=(yyvsp[0].type_char);(yyval.ptr)->type=CHAR;}
#line 2040 "parser.tab.c"
    break;

  case 67: /* Exp: STRING  */
#line 154 "parser.y"
                       {(yyval.ptr)=mknode(STRING,NULL,NULL,NULL,yylineno);strcpy((yyval.ptr)->type_string,(yyvsp[0].type_string));(yyval.ptr)->type=STRING;}
#line 2046 "parser.tab.c"
    break;

  case 68: /* Args: Exp COMMA Args  */
#line 157 "parser.y"
                           {(yyval.ptr)=mknode(ARGS,(yyvsp[-2].ptr),(yyvsp[0].ptr),NULL,yylineno);}
#line 2052 "parser.tab.c"
    break;

  case 69: /* Args: Exp  */
#line 158 "parser.y"
                           {(yyval.ptr)=mknode(ARGS,(yyvsp[0].ptr),NULL,NULL,yylineno);}
#line 2058 "parser.tab.c"
    break;


#line 2062 "parser.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          goto yyexhaustedlab;
      }
    }

  yyerror_range[1] = yylloc;
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
                      yytoken, &yylval, &yylloc);
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 161 "parser.y"


int main(int argc, char *argv[]){
	yyin=fopen(argv[1],"r");
	if (!yyin) return 0;
	yylineno=1;
	yyparse();
	return 0;
	}

#include<stdarg.h>
void yyerror(const char* fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    fprintf(stderr, "Grammar Error at Line %d Column %d: ", yylloc.first_line,yylloc.first_column);
    vfprintf(stderr, fmt, ap);
    fprintf(stderr, ".\n");
}
