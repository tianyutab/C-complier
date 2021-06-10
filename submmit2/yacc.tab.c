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
#line 1 "yacc.y"

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <string.h>
#include <stdarg.h>
#include "symbol.h"
#include "gramtree.h"

ASTNode *temp;
int funcParam = 1;

extern int yylex(void);
extern char* yytext;
extern FILE * yyin;
extern int yylineno;


#line 91 "yacc.tab.c"

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

#include "yacc.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_RETURN = 3,                     /* RETURN  */
  YYSYMBOL_INT = 4,                        /* INT  */
  YYSYMBOL_TYPE = 5,                       /* TYPE  */
  YYSYMBOL_ID = 6,                         /* ID  */
  YYSYMBOL_FOR = 7,                        /* FOR  */
  YYSYMBOL_8_ = 8,                         /* ';'  */
  YYSYMBOL_9_ = 9,                         /* ','  */
  YYSYMBOL_10_ = 10,                       /* '='  */
  YYSYMBOL_11_ = 11,                       /* '-'  */
  YYSYMBOL_12_ = 12,                       /* '+'  */
  YYSYMBOL_13_ = 13,                       /* '*'  */
  YYSYMBOL_14_ = 14,                       /* '/'  */
  YYSYMBOL_15_ = 15,                       /* '%'  */
  YYSYMBOL_16_ = 16,                       /* '^'  */
  YYSYMBOL_17_ = 17,                       /* '('  */
  YYSYMBOL_18_ = 18,                       /* ')'  */
  YYSYMBOL_19_ = 19,                       /* '['  */
  YYSYMBOL_20_ = 20,                       /* ']'  */
  YYSYMBOL_RELOP = 21,                     /* RELOP  */
  YYSYMBOL_AND = 22,                       /* AND  */
  YYSYMBOL_OR = 23,                        /* OR  */
  YYSYMBOL_NOT = 24,                       /* NOT  */
  YYSYMBOL_IF = 25,                        /* IF  */
  YYSYMBOL_ELSE = 26,                      /* ELSE  */
  YYSYMBOL_WHILE = 27,                     /* WHILE  */
  YYSYMBOL_28_ = 28,                       /* '{'  */
  YYSYMBOL_29_ = 29,                       /* '}'  */
  YYSYMBOL_LOWER_THAN_ELSE = 30,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_ERRID = 31,                     /* ERRID  */
  YYSYMBOL_PRINT_FUNC = 32,                /* PRINT_FUNC  */
  YYSYMBOL_YYACCEPT = 33,                  /* $accept  */
  YYSYMBOL_Root = 34,                      /* Root  */
  YYSYMBOL_external_definition_list = 35,  /* external_definition_list  */
  YYSYMBOL_external_definition = 36,       /* external_definition  */
  YYSYMBOL_external_declaration_list = 37, /* external_declaration_list  */
  YYSYMBOL_variable_declaration = 38,      /* variable_declaration  */
  YYSYMBOL_function_declaration = 39,      /* function_declaration  */
  YYSYMBOL_variable_list = 40,             /* variable_list  */
  YYSYMBOL_param_declaration = 41,         /* param_declaration  */
  YYSYMBOL_local_statement = 42,           /* local_statement  */
  YYSYMBOL_statement_list = 43,            /* statement_list  */
  YYSYMBOL_statement = 44,                 /* statement  */
  YYSYMBOL_for_declaration = 45,           /* for_declaration  */
  YYSYMBOL_definition = 46,                /* definition  */
  YYSYMBOL_declaration_list = 47,          /* declaration_list  */
  YYSYMBOL_declaration = 48,               /* declaration  */
  YYSYMBOL_expression = 49,                /* expression  */
  YYSYMBOL_Args = 50                       /* Args  */
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   496

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  18
/* YYNRULES -- Number of rules.  */
#define YYNRULES  72
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  155

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   272


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
       2,     2,     2,     2,     2,     2,     2,    15,     2,     2,
      17,    18,    13,    12,     9,    11,     2,    14,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     8,
       2,    10,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    19,     2,    20,    16,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    28,     2,    29,     2,     2,     2,     2,
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
       5,     6,     7,    21,    22,    23,    24,    25,    26,    27,
      30,    31,    32
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    58,    58,    61,    62,    65,    66,    67,    74,    77,
      78,    83,    90,    94,   103,   115,   116,   119,   120,   121,
     126,   127,   131,   132,   133,   137,   138,   139,   140,   145,
     146,   151,   158,   216,   217,   218,   219,   220,   327,   328,
     329,   330,   350,   354,   355,   362,   363,   367,   368,   373,
     374,   407,   451,   452,   453,   507,   585,   665,   719,   792,
     793,   794,   823,   865,   866,   935,   946,   947,   948,   987,
     988,   991,   992
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "RETURN", "INT",
  "TYPE", "ID", "FOR", "';'", "','", "'='", "'-'", "'+'", "'*'", "'/'",
  "'%'", "'^'", "'('", "')'", "'['", "']'", "RELOP", "AND", "OR", "NOT",
  "IF", "ELSE", "WHILE", "'{'", "'}'", "LOWER_THAN_ELSE", "ERRID",
  "PRINT_FUNC", "$accept", "Root", "external_definition_list",
  "external_definition", "external_declaration_list",
  "variable_declaration", "function_declaration", "variable_list",
  "param_declaration", "local_statement", "statement_list", "statement",
  "for_declaration", "definition", "declaration_list", "declaration",
  "expression", "Args", YY_NULLPTR
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
       0,   256,   257,   258,   259,   260,   261,   262,    59,    44,
      61,    45,    43,    42,    47,    37,    94,    40,    41,    91,
      93,   263,   264,   265,   266,   267,   268,   269,   123,   125,
     270,   271,   272
};
#endif

#define YYPACT_NINF (-42)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-47)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      23,    33,    40,    23,   -42,    56,   -42,    -4,   -42,     5,
     -42,   -42,     7,    58,   -42,    55,    38,   -42,   113,   -42,
      62,   -42,    -8,   -42,    50,    70,   -42,   -42,    48,    18,
     -42,    55,    57,    79,    87,    87,    87,    82,    90,    91,
     -42,   122,   -42,   101,   239,    96,   105,   -42,   -42,   114,
     -42,   103,   -42,   255,   121,   -42,   123,    54,    87,    10,
      68,   301,   115,    87,    87,    87,   -42,   -42,   -42,   -42,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,   131,   -42,   -42,    87,    55,   -42,   441,    45,   315,
      51,   164,   128,   -42,   441,   -42,   329,   343,   357,   441,
      68,    68,     4,     4,     4,   115,   371,   477,   466,   454,
     124,   441,   -42,    87,   -42,   -42,   -42,   181,   271,   185,
     152,   152,   135,   -42,   -42,   441,   152,   385,   200,   209,
     287,   126,   -42,   -42,   -42,   152,   152,   399,   152,   413,
     224,   152,   -42,   -42,   152,   -42,   152,   152,   427,   -42,
     -42,   -42,   -42,   152,   -42
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     2,     3,    11,     6,     0,     9,     0,
       1,     4,     0,     0,     5,     0,     0,     8,     0,     7,
      18,    14,     0,    16,     0,    11,    10,    21,     0,     0,
      69,     0,    67,     0,     0,     0,     0,     0,     0,     0,
      27,     0,    22,     0,     0,    17,     0,    13,    12,    42,
      70,     0,    29,     0,    49,    45,    47,     0,     0,     0,
      62,     0,    63,     0,     0,     0,    20,    23,    25,    26,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    15,    28,     0,     0,    65,    72,     0,     0,
       0,     0,     0,    43,    44,    61,     0,     0,     0,    51,
      56,    55,    57,    58,    59,    60,     0,    54,    52,    53,
       0,    50,    48,     0,    64,    68,    46,     0,     0,     0,
       0,     0,     0,    66,    19,    71,     0,     0,     0,     0,
       0,    30,    32,    41,    33,     0,     0,     0,     0,     0,
       0,     0,    36,    35,     0,    34,     0,     0,     0,    31,
      40,    39,    38,     0,    37
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -42,   -42,   -42,   145,   -42,     2,   -42,   -42,   116,   151,
     -42,   -41,   -42,   102,    81,   -42,   -27,   -42
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     3,     4,     7,    54,     9,    22,    23,    40,
      41,    42,    92,    43,    55,    56,    44,    88
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      67,    46,    53,     8,    14,    15,    16,    60,    61,    62,
      47,    90,    20,    17,    30,    31,    32,    26,    91,    51,
      76,    34,    30,    77,    32,    21,    52,    35,     1,    34,
      87,    89,    94,    18,    36,    35,    96,    97,    98,     5,
      10,     6,    36,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   113,    51,    49,   111,    30,   116,
      32,    25,    24,   114,   118,    34,    50,    27,    45,    50,
      48,    35,    86,    12,    57,    13,    58,    27,    36,   131,
     132,    73,    74,    75,    76,   134,   125,    77,    51,    13,
     127,    30,   130,    32,   142,   143,    59,   145,    34,    63,
     149,   137,   139,   150,    35,   151,   152,    64,    65,    68,
      20,    36,   154,   148,    28,    81,    29,    30,    31,    32,
      33,    50,   -46,    28,    34,    29,    30,    31,    32,    33,
      35,    84,    85,    34,    77,   110,   119,    36,    37,    35,
      38,    18,   -24,   133,   124,    39,    36,    37,    11,    38,
      18,    66,   141,    28,    39,    29,    30,    31,    32,    33,
      19,    93,    82,    34,     0,    51,   112,     0,    30,    35,
      32,     0,   117,     0,     0,    34,    36,    37,     0,    38,
      18,    35,    51,     0,    39,    30,    51,    32,    36,    30,
       0,    32,    34,   129,     0,     0,    34,     0,    35,   126,
       0,    51,    35,     0,    30,    36,    32,     0,     0,    36,
      51,    34,     0,    30,     0,    32,     0,    35,   136,     0,
      34,     0,     0,     0,    36,    51,    35,   138,    30,     0,
      32,     0,     0,    36,     0,    34,     0,     0,     0,     0,
       0,    35,   147,     0,     0,     0,     0,    69,    36,    70,
      71,    72,    73,    74,    75,    76,     0,     0,    77,     0,
      78,    79,    80,    83,     0,    70,    71,    72,    73,    74,
      75,    76,     0,     0,    77,     0,    78,    79,    80,   128,
       0,    70,    71,    72,    73,    74,    75,    76,     0,     0,
      77,     0,    78,    79,    80,   140,     0,    70,    71,    72,
      73,    74,    75,    76,     0,     0,    77,     0,    78,    79,
      80,    70,    71,    72,    73,    74,    75,    76,     0,    95,
      77,     0,    78,    79,    80,    70,    71,    72,    73,    74,
      75,    76,     0,     0,    77,   115,    78,    79,    80,    70,
      71,    72,    73,    74,    75,    76,     0,   120,    77,     0,
      78,    79,    80,    70,    71,    72,    73,    74,    75,    76,
       0,   121,    77,     0,    78,    79,    80,    70,    71,    72,
      73,    74,    75,    76,     0,   122,    77,     0,    78,    79,
      80,    70,    71,    72,    73,    74,    75,    76,     0,     0,
      77,   123,    78,    79,    80,    70,    71,    72,    73,    74,
      75,    76,     0,   135,    77,     0,    78,    79,    80,    70,
      71,    72,    73,    74,    75,    76,     0,   144,    77,     0,
      78,    79,    80,    70,    71,    72,    73,    74,    75,    76,
       0,   146,    77,     0,    78,    79,    80,    70,    71,    72,
      73,    74,    75,    76,     0,   153,    77,     0,    78,    79,
      80,    70,    71,    72,    73,    74,    75,    76,     0,     0,
      77,     0,    78,    79,    80,    71,    72,    73,    74,    75,
      76,     0,     0,    77,     0,    78,    79,    71,    72,    73,
      74,    75,    76,     0,     0,    77,     0,    78,    71,    72,
      73,    74,    75,    76,     0,     0,    77
};

static const yytype_int16 yycheck[] =
{
      41,     9,    29,     1,     8,     9,     1,    34,    35,    36,
      18,     1,     5,     8,     4,     5,     6,    15,     8,     1,
      16,    11,     4,    19,     6,    18,     8,    17,     5,    11,
      57,    58,    59,    28,    24,    17,    63,    64,    65,     6,
       0,     8,    24,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,     9,     1,     8,    84,     4,     8,
       6,     6,     4,    18,    91,    11,    18,    29,     6,    18,
      20,    17,    18,    17,    17,    19,    19,    29,    24,   120,
     121,    13,    14,    15,    16,   126,   113,    19,     1,    19,
     117,     4,   119,     6,   135,   136,    17,   138,    11,    17,
     141,   128,   129,   144,    17,   146,   147,    17,    17,     8,
       5,    24,   153,   140,     1,    19,     3,     4,     5,     6,
       7,    18,     8,     1,    11,     3,     4,     5,     6,     7,
      17,    10,     9,    11,    19,     4,     8,    24,    25,    17,
      27,    28,    29,     8,    20,    32,    24,    25,     3,    27,
      28,    29,    26,     1,    32,     3,     4,     5,     6,     7,
       9,    59,    46,    11,    -1,     1,    85,    -1,     4,    17,
       6,    -1,     8,    -1,    -1,    11,    24,    25,    -1,    27,
      28,    17,     1,    -1,    32,     4,     1,     6,    24,     4,
      -1,     6,    11,     8,    -1,    -1,    11,    -1,    17,    18,
      -1,     1,    17,    -1,     4,    24,     6,    -1,    -1,    24,
       1,    11,    -1,     4,    -1,     6,    -1,    17,    18,    -1,
      11,    -1,    -1,    -1,    24,     1,    17,    18,     4,    -1,
       6,    -1,    -1,    24,    -1,    11,    -1,    -1,    -1,    -1,
      -1,    17,    18,    -1,    -1,    -1,    -1,     8,    24,    10,
      11,    12,    13,    14,    15,    16,    -1,    -1,    19,    -1,
      21,    22,    23,     8,    -1,    10,    11,    12,    13,    14,
      15,    16,    -1,    -1,    19,    -1,    21,    22,    23,     8,
      -1,    10,    11,    12,    13,    14,    15,    16,    -1,    -1,
      19,    -1,    21,    22,    23,     8,    -1,    10,    11,    12,
      13,    14,    15,    16,    -1,    -1,    19,    -1,    21,    22,
      23,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    -1,    21,    22,    23,    10,    11,    12,    13,    14,
      15,    16,    -1,    -1,    19,    20,    21,    22,    23,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    -1,
      21,    22,    23,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    -1,    21,    22,    23,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    -1,    21,    22,
      23,    10,    11,    12,    13,    14,    15,    16,    -1,    -1,
      19,    20,    21,    22,    23,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    -1,    21,    22,    23,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    -1,
      21,    22,    23,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    -1,    21,    22,    23,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    -1,    21,    22,
      23,    10,    11,    12,    13,    14,    15,    16,    -1,    -1,
      19,    -1,    21,    22,    23,    11,    12,    13,    14,    15,
      16,    -1,    -1,    19,    -1,    21,    22,    11,    12,    13,
      14,    15,    16,    -1,    -1,    19,    -1,    21,    11,    12,
      13,    14,    15,    16,    -1,    -1,    19
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,    34,    35,    36,     6,     8,    37,    38,    39,
       0,    36,    17,    19,     8,     9,     1,     8,    28,    42,
       5,    18,    40,    41,     4,     6,    38,    29,     1,     3,
       4,     5,     6,     7,    11,    17,    24,    25,    27,    32,
      42,    43,    44,    46,    49,     6,     9,    18,    20,     8,
      18,     1,     8,    49,    38,    47,    48,    17,    19,    17,
      49,    49,    49,    17,    17,    17,    29,    44,     8,     8,
      10,    11,    12,    13,    14,    15,    16,    19,    21,    22,
      23,    19,    41,     8,    10,     9,    18,    49,    50,    49,
       1,     8,    45,    46,    49,    18,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
       4,    49,    47,     9,    18,    20,     8,     8,    49,     8,
      18,    18,    18,    20,    20,    49,    18,    49,     8,     8,
      49,    44,    44,     8,    44,    18,    18,    49,    18,    49,
       8,    26,    44,    44,    18,    44,    18,    18,    49,    44,
      44,    44,    44,    18,    44
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    33,    34,    35,    35,    36,    36,    36,    36,    37,
      37,    38,    38,    39,    39,    40,    40,    41,    41,    41,
      42,    42,    43,    43,    43,    44,    44,    44,    44,    44,
      44,    44,    44,    44,    44,    44,    44,    44,    44,    44,
      44,    44,    44,    45,    45,    46,    46,    47,    47,    48,
      48,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    50,    50
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     3,     2,     3,     3,     1,
       3,     1,     4,     4,     3,     3,     1,     2,     1,     5,
       3,     2,     1,     2,     0,     2,     2,     1,     3,     2,
       5,     7,     5,     6,     7,     7,     7,     9,     8,     8,
       8,     5,     2,     1,     1,     2,     2,     1,     3,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     4,     3,     4,     1,     4,     1,
       2,     3,     1
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
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
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
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
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

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
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
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* Root: external_definition_list  */
#line 58 "yacc.y"
                                {(yyval.ast) = newAstnode("Root","",1,(yyvsp[0].ast)); eval((yyval.ast),0);}
#line 1300 "yacc.tab.c"
    break;

  case 3: /* external_definition_list: external_definition  */
#line 61 "yacc.y"
                           { (yyval.ast) = newAstnode("external_definition_list","",1,(yyvsp[0].ast));}
#line 1306 "yacc.tab.c"
    break;

  case 4: /* external_definition_list: external_definition_list external_definition  */
#line 62 "yacc.y"
                                                   { (yyval.ast) = newAstnode("external_definition_list","",2,(yyvsp[-1].ast),(yyvsp[0].ast));}
#line 1312 "yacc.tab.c"
    break;

  case 5: /* external_definition: TYPE external_declaration_list ';'  */
#line 65 "yacc.y"
                                                        { (yyval.ast) = newAstnode("external_definition","",2,(yyvsp[-2].ast),(yyvsp[-1].ast));}
#line 1318 "yacc.tab.c"
    break;

  case 6: /* external_definition: TYPE ';'  */
#line 66 "yacc.y"
                                                        { (yyval.ast) = newAstnode("external_definition","",1,(yyvsp[-1].ast));}
#line 1324 "yacc.tab.c"
    break;

  case 7: /* external_definition: TYPE function_declaration local_statement  */
#line 67 "yacc.y"
                                                        { (yyval.ast) = newAstnode("external_definition","",3,(yyvsp[-2].ast),(yyvsp[-1].ast),(yyvsp[0].ast));
															//fputs("\tmov esp,ebp\n",fp);
															//fputs("\tpop ebp\n",fp);
															//fputs("\tret\n",fp);
															funcflag=-1;
														}
#line 1335 "yacc.tab.c"
    break;

  case 8: /* external_definition: TYPE function_declaration ';'  */
#line 74 "yacc.y"
                                                         { (yyval.ast) = newAstnode("external_definition","",2,(yyvsp[-2].ast),(yyvsp[-1].ast));}
#line 1341 "yacc.tab.c"
    break;

  case 9: /* external_declaration_list: variable_declaration  */
#line 77 "yacc.y"
                                                          { (yyval.ast) = newAstnode("external_declaration_list","",1,(yyvsp[0].ast));}
#line 1347 "yacc.tab.c"
    break;

  case 10: /* external_declaration_list: external_declaration_list ',' variable_declaration  */
#line 78 "yacc.y"
                                                          { (yyval.ast) = newAstnode("external_declaration_list","",2,(yyvsp[-2].ast),(yyvsp[0].ast));}
#line 1353 "yacc.tab.c"
    break;

  case 11: /* variable_declaration: ID  */
#line 83 "yacc.y"
                                                        {  
															(yyval.ast) = newAstnode("variable_declaration","",1,(yyvsp[0].ast));
															if(forflag==1)if(base.using_table->findSymbol((yyvsp[0].ast)->idname)) yyerror("ERROR: 变量名 repeated declaration!");
															if(base.using_table->addSymbol((yyvsp[0].ast)->idname,symbolType::integer) ==-1) yyerror("ERROR: 变量名 repeated declaration!");//无法以int型插入
		
			
														}
#line 1365 "yacc.tab.c"
    break;

  case 12: /* variable_declaration: ID '[' INT ']'  */
#line 90 "yacc.y"
                                                        { if(base.using_table->addArraySymbol((yyvsp[-3].ast)->idname,(yyvsp[-1].ast)->value) ==-1) yyerror("ERROR: 数组名 repeated declaration!");(yyval.ast) = newAstnode("variable_declaration","",4,(yyvsp[-3].ast),(yyvsp[-2].ast),(yyvsp[-1].ast),(yyvsp[0].ast));}
#line 1371 "yacc.tab.c"
    break;

  case 13: /* function_declaration: ID '(' variable_list ')'  */
#line 94 "yacc.y"
                                                        { funcflag=1;if(base.using_table->addSymbol((yyvsp[-3].ast)->idname,symbolType::function) ==-1) yyerror("ERROR: 函数名 repeated declaration!");
															base.using_table->findSymbol((yyvsp[-3].ast)->idname)->setParam(base.using_table->templist.size());
															(yyval.ast) = newAstnode("function_declaration","",4,(yyvsp[-3].ast),(yyvsp[-2].ast),(yyvsp[-1].ast),(yyvsp[0].ast));
															fputs((yyvsp[-3].ast)->idname,fp);
															fputs(":\n",fp);
															fputs("\tpush ebp\n",fp);
															fputs("\tmov ebp,esp\n",fp);
															fputs("\tsub esp,0x80\n",fp);	
														}
#line 1385 "yacc.tab.c"
    break;

  case 14: /* function_declaration: ID '(' ')'  */
#line 103 "yacc.y"
                                                        { funcflag=1;if(base.using_table->addSymbol((yyvsp[-2].ast)->idname,symbolType::function) ==-1) yyerror("ERROR: 函数名 repeated declaration!");
															base.using_table->findSymbol((yyvsp[-2].ast)->idname)->setParam(base.using_table->templist.size());															
															(yyval.ast) = newAstnode("function_declaration","",3,(yyvsp[-2].ast),(yyvsp[-1].ast),(yyvsp[0].ast));
															fputs((yyvsp[-2].ast)->idname,fp);
															fputs(":\n",fp);	
															fputs("\tpush ebp\n",fp);
															fputs("\tmov ebp,esp\n",fp);
															fputs("\tsub esp,0x80\n",fp);																													
														}
#line 1399 "yacc.tab.c"
    break;

  case 15: /* variable_list: variable_list ',' param_declaration  */
#line 115 "yacc.y"
                                                        { (yyval.ast) = newAstnode("variable_list","",2,(yyvsp[-2].ast),(yyvsp[0].ast));}
#line 1405 "yacc.tab.c"
    break;

  case 16: /* variable_list: param_declaration  */
#line 116 "yacc.y"
                                                        { (yyval.ast) = newAstnode("variable_list","",1,(yyvsp[0].ast));}
#line 1411 "yacc.tab.c"
    break;

  case 17: /* param_declaration: TYPE ID  */
#line 119 "yacc.y"
                                                        { if(base.using_table->addIntoTemp((yyvsp[0].ast)->idname,symbolType::integer)==-1) yyerror("ERROR: 变量名 repeated declaration!");(yyval.ast) = newAstnode("param_declaration","",2,(yyvsp[-1].ast),(yyvsp[0].ast));}
#line 1417 "yacc.tab.c"
    break;

  case 18: /* param_declaration: TYPE  */
#line 120 "yacc.y"
                                                        { (yyval.ast) = newAstnode("param_declaration","",1,(yyvsp[0].ast));}
#line 1423 "yacc.tab.c"
    break;

  case 19: /* param_declaration: TYPE ID '[' INT ']'  */
#line 121 "yacc.y"
                                                                                        { (yyval.ast) = newAstnode("param_declaration","",5,(yyvsp[-4].ast),(yyvsp[-3].ast),(yyvsp[-2].ast),(yyvsp[-1].ast),(yyvsp[0].ast));}
#line 1429 "yacc.tab.c"
    break;

  case 20: /* local_statement: '{' statement_list '}'  */
#line 126 "yacc.y"
                                                        { (yyval.ast) = newAstnode("local_statement","",3,(yyvsp[-2].ast),(yyvsp[-1].ast),(yyvsp[0].ast));}
#line 1435 "yacc.tab.c"
    break;

  case 21: /* local_statement: error '}'  */
#line 127 "yacc.y"
                                                        { yyerrok;}
#line 1441 "yacc.tab.c"
    break;

  case 22: /* statement_list: statement  */
#line 131 "yacc.y"
                                                        { (yyval.ast) = newAstnode("statememt_list","",1,(yyvsp[0].ast));}
#line 1447 "yacc.tab.c"
    break;

  case 23: /* statement_list: statement_list statement  */
#line 132 "yacc.y"
                                                            { (yyval.ast) = newAstnode("statement_list","",2,(yyvsp[-1].ast),(yyvsp[0].ast));}
#line 1453 "yacc.tab.c"
    break;

  case 24: /* statement_list: %empty  */
#line 133 "yacc.y"
                                                        { (yyval.ast) = newAstnode("statement_list","",-1);}
#line 1459 "yacc.tab.c"
    break;

  case 25: /* statement: definition ';'  */
#line 137 "yacc.y"
                                                      { (yyval.ast) = newAstnode("statement","",1,(yyvsp[-1].ast));}
#line 1465 "yacc.tab.c"
    break;

  case 26: /* statement: expression ';'  */
#line 138 "yacc.y"
                                                         { (yyval.ast) = newAstnode("statement","",1,(yyvsp[-1].ast));}
#line 1471 "yacc.tab.c"
    break;

  case 27: /* statement: local_statement  */
#line 139 "yacc.y"
                                                        { (yyval.ast) = newAstnode("statement","",1,(yyvsp[0].ast));}
#line 1477 "yacc.tab.c"
    break;

  case 28: /* statement: RETURN expression ';'  */
#line 140 "yacc.y"
                                                        { (yyval.ast) = newAstnode("statement","",2,(yyvsp[-2].ast),(yyvsp[-1].ast));
															fputs("\tmov esp,ebp\n",fp);
															fputs("\tpop ebp\n",fp);
															fputs("\tret\n",fp);																		
														}
#line 1487 "yacc.tab.c"
    break;

  case 29: /* statement: RETURN ';'  */
#line 145 "yacc.y"
                                                        { (yyval.ast) = newAstnode("statement","",1,(yyvsp[-1].ast));}
#line 1493 "yacc.tab.c"
    break;

  case 30: /* statement: IF '(' expression ')' statement  */
#line 146 "yacc.y"
                                                        { (yyval.ast) = newAstnode("statement","",5,(yyvsp[-4].ast),(yyvsp[-3].ast),(yyvsp[-2].ast),(yyvsp[-1].ast),(yyvsp[0].ast));												
															fputs(mystrcat(base.using_table->tableName,base.using_table->childNum+1),fp);
															fputs(":\n",fp);
															base.using_table->childNum++;
														}
#line 1503 "yacc.tab.c"
    break;

  case 31: /* statement: IF '(' expression ')' statement ELSE statement  */
#line 151 "yacc.y"
                                                                                { (yyval.ast) = newAstnode("statement","",7,(yyvsp[-6].ast),(yyvsp[-5].ast),(yyvsp[-4].ast),(yyvsp[-3].ast),(yyvsp[-2].ast),(yyvsp[-1].ast),(yyvsp[0].ast));
															
															fputs(mystrcat(base.using_table->tableName,base.using_table->childNum+1),fp);
															fputs(":\n",fp);
															base.using_table->childNum++;															
															
														}
#line 1515 "yacc.tab.c"
    break;

  case 32: /* statement: WHILE '(' expression ')' statement  */
#line 158 "yacc.y"
                                                        { (yyval.ast) = newAstnode("statement","",5,(yyvsp[-4].ast),(yyvsp[-3].ast),(yyvsp[-2].ast),(yyvsp[-1].ast),(yyvsp[0].ast));
															
															//再次生成判断语句
															if(!strcmp((yyvsp[-2].ast)->left->left->name,"ID")){
																fputs("\tmov edx,",fp);
																fputs("dword [ebp-",fp);
																fprintf(fp,"%d",base.using_table->findSymbol((yyvsp[-2].ast)->left->left->idname)->getOffset());
																fputs("]\n",fp);
															}
															else if(!strcmp((yyvsp[-2].ast)->left->left->name,"INT")){
																fputs("\tmov edx,",fp);
																fprintf(fp,"%d\n",(yyvsp[-2].ast)->left->left->value);
															}
															else{}
															if(!strcmp((yyvsp[-2].ast)->left->right->right->left->name,"ID")){
																fputs("\tmov eax,",fp);
																fputs("dword [ebp-",fp);
																fprintf(fp,"%d",base.using_table->findSymbol((yyvsp[-2].ast)->left->right->right->left->idname)->getOffset());
																fputs("]\n",fp);
															}
															else if(!strcmp((yyvsp[-2].ast)->left->right->right->left->name,"INT")){
																fputs("\tmov eax,",fp);
																fprintf(fp,"%d\n",(yyvsp[-2].ast)->left->right->right->left->value);
															}
															else{}
															
															fputs("\tcmp edx,eax\n",fp);
															if(!strcmp((yyvsp[-2].ast)->left->right->name,">=")){
																fputs("\tjge ",fp);																	
															}
															else if(!strcmp((yyvsp[-2].ast)->left->right->name,"<=")){
																fputs("\tjle ",fp);																																	
															}	
															else if(!strcmp((yyvsp[-2].ast)->left->right->name,"==")){
																fputs("\tje ",fp);																																	
															}
															else if(!strcmp((yyvsp[-2].ast)->left->right->name,">")){
																fputs("\tjg ",fp);																																	
															}	
															else if(!strcmp((yyvsp[-2].ast)->left->right->name,"<")){
																fputs("\tjl ",fp);																																	
															}
															else if(!strcmp((yyvsp[-2].ast)->left->right->name,"!=")){
																fputs("\tjne ",fp);																																	
															}	
															else{}
															
															fputs(mystrcat(base.using_table->tableName,base.using_table->childNum),fp);
															fputs("\n",fp);
																
															fputs("\tjmp ",fp);																	
															fputs(mystrcat(base.using_table->tableName,base.using_table->childNum+1),fp);
															fputs("\n",fp);

															fputs(mystrcat(base.using_table->tableName,base.using_table->childNum+1),fp);
															fputs(":\n",fp);
															base.using_table->childNum++;										
														}
#line 1578 "yacc.tab.c"
    break;

  case 33: /* statement: FOR '(' ';' ';' ')' statement  */
#line 216 "yacc.y"
                                                        { (yyval.ast) = newAstnode("statement","",4,(yyvsp[-5].ast),(yyvsp[-4].ast),(yyvsp[-1].ast),(yyvsp[0].ast));}
#line 1584 "yacc.tab.c"
    break;

  case 34: /* statement: FOR '(' for_declaration ';' ';' ')' statement  */
#line 217 "yacc.y"
                                                        { (yyval.ast) = newAstnode("statement","",5,(yyvsp[-6].ast),(yyvsp[-5].ast),(yyvsp[-4].ast),(yyvsp[-1].ast),(yyvsp[0].ast));}
#line 1590 "yacc.tab.c"
    break;

  case 35: /* statement: FOR '(' ';' expression ';' ')' statement  */
#line 218 "yacc.y"
                                                        { (yyval.ast) = newAstnode("statement","",5,(yyvsp[-6].ast),(yyvsp[-5].ast),(yyvsp[-3].ast),(yyvsp[-1].ast),(yyvsp[0].ast));}
#line 1596 "yacc.tab.c"
    break;

  case 36: /* statement: FOR '(' ';' ';' expression ')' statement  */
#line 219 "yacc.y"
                                                        { (yyval.ast) = newAstnode("statement","",5,(yyvsp[-6].ast),(yyvsp[-5].ast),(yyvsp[-2].ast),(yyvsp[-1].ast),(yyvsp[0].ast));}
#line 1602 "yacc.tab.c"
    break;

  case 37: /* statement: FOR '(' for_declaration ';' expression ';' expression ')' statement  */
#line 220 "yacc.y"
                                                                           { (yyval.ast) = newAstnode("statement","",7,(yyvsp[-8].ast),(yyvsp[-7].ast),(yyvsp[-6].ast),(yyvsp[-4].ast),(yyvsp[-2].ast),(yyvsp[-1].ast),(yyvsp[0].ast));
																				//假设只有一个参数
																				//表达式运算（i=i+1类型）
																				
																				ASTNode* temp = (yyvsp[-2].ast)->left->right->right->left;
																				printf(temp->left->name);
																				if(!strcmp(temp->left->name,"ID")){
																					fputs("\tmov eax,dword [ebp-",fp);
																					fprintf(fp,"%d",base.using_table->findSymbol(temp->left->idname)->getOffset());
																					fputs("]\n",fp);
																				}
																				else if(!strcmp(temp->left->name,"INT")){
																					fputs("\tmov eax,",fp);
																					fprintf(fp,"%d\n",temp->left->value);												
																				}
																				else{}			
																				printf(temp->right->right->left->name);
																				if(!strcmp(temp->right->right->left->name,"ID")){
																					fputs("\tmov ebx,dword [ebp-",fp);
																					fprintf(fp,"%d",base.using_table->findSymbol(temp->right->right->left->idname)->getOffset());
																					fputs("]\n",fp);
																				}
																				else if(!strcmp(temp->right->right->left->name,"INT")){
																					fputs("\tmov ebx,",fp);
																					fprintf(fp,"%d\n",temp->right->right->left->value);												
																				}
																				else{}
																				printf(temp->right->name);
																				if(!strcmp(temp->right->name,"+")){
																					fputs("\tadd ebx,eax\n",fp);
																				}
																				else if(!strcmp(temp->right->name,"-")){
																					fputs("\tsub ebx,eax\n",fp);
																				}
																				else if(!strcmp(temp->right->name,"*")){
																					fputs("\timul ebx,eax\n",fp);
																				}
																				else if(!strcmp(temp->right->name,"/")){
																					fputs("\tcdq\n",fp);
																					fputs("\tidiv ebx\n",fp);
																					fputs("\tmov ebx,eax\n",fp);
																				}																
																				
																				fputs("\tmov dword [ebp-",fp);
																				fprintf(fp,"%d",base.using_table->findSymbol((yyvsp[-2].ast)->left->left->idname)->getOffset());
																				fputs("],ebx\n",fp);
																				
																				//再次生成判断语句
																				printf((yyvsp[-4].ast)->left->left->name);
																				if(!strcmp((yyvsp[-4].ast)->left->left->name,"ID")){
																					fputs("\tmov edx,",fp);
																					fputs("dword [ebp-",fp);
																					fprintf(fp,"%d",base.using_table->findSymbol((yyvsp[-4].ast)->left->left->idname)->getOffset());
																					fputs("]\n",fp);
																				}
																				else if(!strcmp((yyvsp[-4].ast)->left->left->name,"INT")){
																					fputs("\tmov edx,",fp);
																					fprintf(fp,"%d\n",(yyvsp[-4].ast)->left->left->value);
																				}
																				else{}
																				printf((yyvsp[-4].ast)->left->right->right->left->name);
																				if(!strcmp((yyvsp[-4].ast)->left->right->right->left->name,"ID")){
																					fputs("\tmov eax,",fp);
																					fputs("dword [ebp-",fp);
																					fprintf(fp,"%d",base.using_table->findSymbol((yyvsp[-4].ast)->left->right->right->left->idname)->getOffset());
																					fputs("]\n",fp);
																				}
																				else if(!strcmp((yyvsp[-4].ast)->left->right->right->left->name,"INT")){
																					fputs("\tmov eax,",fp);
																					fprintf(fp,"%d\n",(yyvsp[-4].ast)->left->right->right->left->value);
																				}
																				else{}
																				
																				printf((yyvsp[-4].ast)->left->right->name);
																				fputs("\tcmp edx,eax\n",fp);
																				if(!strcmp((yyvsp[-4].ast)->left->right->name,">=")){
																					fputs("\tjge ",fp);																	
																				}
																				else if(!strcmp((yyvsp[-4].ast)->left->right->name,"<=")){
																					fputs("\tjle ",fp);																																	
																				}	
																				else if(!strcmp((yyvsp[-4].ast)->left->right->name,"==")){
																					fputs("\tje ",fp);																																	
																				}
																				else if(!strcmp((yyvsp[-4].ast)->left->right->name,">")){
																					fputs("\tjg ",fp);																																	
																				}	
																				else if(!strcmp((yyvsp[-4].ast)->left->right->name,"<")){
																					fputs("\tjl ",fp);																																	
																				}
																				else if(!strcmp((yyvsp[-4].ast)->left->right->name,"!=")){
																					fputs("\tjne ",fp);																																	
																				}	
																				else{}
																				
																				fputs(mystrcat(base.using_table->tableName,base.using_table->childNum),fp);
																				fputs("\n",fp);
																					
																				fputs("\tjmp ",fp);																	
																				fputs(mystrcat(base.using_table->tableName,base.using_table->childNum+1),fp);
																				fputs("\n",fp);

																				fputs(mystrcat(base.using_table->tableName,base.using_table->childNum+1),fp);
																				fputs(":\n",fp);
																				base.using_table->childNum++;
																				base.deletetable();
																			}
#line 1714 "yacc.tab.c"
    break;

  case 38: /* statement: FOR '(' for_declaration ';' expression ';' ')' statement  */
#line 327 "yacc.y"
                                                                           { (yyval.ast) = newAstnode("statement","",6,(yyvsp[-7].ast),(yyvsp[-6].ast),(yyvsp[-5].ast),(yyvsp[-3].ast),(yyvsp[-1].ast),(yyvsp[0].ast));}
#line 1720 "yacc.tab.c"
    break;

  case 39: /* statement: FOR '(' for_declaration ';' ';' expression ')' statement  */
#line 328 "yacc.y"
                                                                           { (yyval.ast) = newAstnode("statement","",6,(yyvsp[-7].ast),(yyvsp[-6].ast),(yyvsp[-5].ast),(yyvsp[-2].ast),(yyvsp[-1].ast),(yyvsp[0].ast));}
#line 1726 "yacc.tab.c"
    break;

  case 40: /* statement: FOR '(' ';' expression ';' expression ')' statement  */
#line 329 "yacc.y"
                                                                           { (yyval.ast) = newAstnode("statement","",6,(yyvsp[-7].ast),(yyvsp[-6].ast),(yyvsp[-4].ast),(yyvsp[-2].ast),(yyvsp[-1].ast),(yyvsp[0].ast));}
#line 1732 "yacc.tab.c"
    break;

  case 41: /* statement: PRINT_FUNC '(' expression ')' ';'  */
#line 330 "yacc.y"
                                                                               {
																				if(!strcmp((yyvsp[-2].ast)->left->name,"ID")&&(yyvsp[-2].ast)->left->right!=NULL&&!strcmp((yyvsp[-2].ast)->left->right->name,"[")){
																					fputs("\tmov eax,[ecx]\n",fp);
																				}
																				else if(!strcmp((yyvsp[-2].ast)->left->name,"expression") || !strcmp((yyvsp[-2].ast)->left->name,"(") || 
																					((yyvsp[-2].ast)->left->right!=NULL && !strcmp((yyvsp[-2].ast)->left->name,"ID") && !strcmp((yyvsp[-2].ast)->left->right->name,"("))){
																					fputs("\tmov eax,edx\n",fp);
																				}																															
																				else if(!strcmp((yyvsp[-2].ast)->left->name,"ID")){
																					fputs("\tmov eax,dword [ebp-",fp);
																					fprintf(fp,"%d",base.using_table->findSymbol((yyvsp[-2].ast)->left->idname)->getOffset());
																					fputs("]\n",fp);
																				}
																				else if(!strcmp((yyvsp[-2].ast)->left->name,"INT")){
																					fputs("\tmov eax,",fp);
																					fprintf(fp,"%d\n",(yyvsp[-2].ast)->left->value);															
																				}
																				else{}
																				fputs("\tcall print\n",fp);
																			}
#line 1757 "yacc.tab.c"
    break;

  case 42: /* statement: error ';'  */
#line 350 "yacc.y"
                                                                           { yyerrok;}
#line 1763 "yacc.tab.c"
    break;

  case 43: /* for_declaration: definition  */
#line 354 "yacc.y"
                                                        { (yyval.ast) = newAstnode("for_declaration","",1,(yyvsp[0].ast));}
#line 1769 "yacc.tab.c"
    break;

  case 44: /* for_declaration: expression  */
#line 355 "yacc.y"
                                                        { (yyval.ast) = newAstnode("for_declaration","",1,(yyvsp[0].ast));}
#line 1775 "yacc.tab.c"
    break;

  case 45: /* definition: TYPE declaration_list  */
#line 362 "yacc.y"
                                                         { (yyval.ast) = newAstnode("definition","",2,(yyvsp[-1].ast),(yyvsp[0].ast));}
#line 1781 "yacc.tab.c"
    break;

  case 46: /* definition: error ';'  */
#line 363 "yacc.y"
                                                         { yyerrok; }
#line 1787 "yacc.tab.c"
    break;

  case 47: /* declaration_list: declaration  */
#line 367 "yacc.y"
                                                         { (yyval.ast) = newAstnode("declaration_list","",1,(yyvsp[0].ast));}
#line 1793 "yacc.tab.c"
    break;

  case 48: /* declaration_list: declaration ',' declaration_list  */
#line 368 "yacc.y"
                                                         { (yyval.ast) = newAstnode("declaration_list","",2,(yyvsp[-2].ast),(yyvsp[0].ast));}
#line 1799 "yacc.tab.c"
    break;

  case 49: /* declaration: variable_declaration  */
#line 373 "yacc.y"
                                                         {  (yyval.ast) = newAstnode("declaration","",1,(yyvsp[0].ast));}
#line 1805 "yacc.tab.c"
    break;

  case 50: /* declaration: variable_declaration '=' expression  */
#line 374 "yacc.y"
                                                         { (yyval.ast) = newAstnode("declaration","",3,(yyvsp[-2].ast),(yyvsp[-1].ast),(yyvsp[0].ast));
															printf("变量规约");
															printf("%s:%d\n",(yyvsp[-2].ast)->left->idname,base.using_table->findSymbol((yyvsp[-2].ast)->left->idname)->getOffset());		
															if(!strcmp((yyvsp[0].ast)->left->name,"expression") || !strcmp((yyvsp[0].ast)->left->name,"(") ||  !strcmp((yyvsp[0].ast)->left->name,"-") ||
																((yyvsp[0].ast)->left->right!=NULL && !strcmp((yyvsp[0].ast)->left->name,"ID") && !strcmp((yyvsp[0].ast)->left->right->name,"("))){
																fputs("\tmov dword [ebp-",fp);
																fprintf(fp,"%d",base.using_table->findSymbol((yyvsp[-2].ast)->left->idname)->getOffset());
																fputs("],edx\n",fp);
																fputs("\tmov ecx,edx\n",fp);
															}
															else if(!strcmp((yyvsp[0].ast)->left->name,"ID")){
																fputs("\tmov ecx,dword [ebp-",fp);
																fprintf(fp,"%d",base.using_table->findSymbol((yyvsp[0].ast)->left->idname)->getOffset());
																fputs("]\n",fp);
																fputs("\tmov dword [ebp-",fp);
																fprintf(fp,"%d",base.using_table->findSymbol((yyvsp[-2].ast)->left->idname)->getOffset());
																fputs("],ecx\n",fp);
															}
															else if(!strcmp((yyvsp[0].ast)->left->name,"INT")){
																fputs("\tmov ecx,",fp);
																fprintf(fp,"%d\n",(yyvsp[0].ast)->left->value);
																fputs("\tmov dword [ebp-",fp);
																fprintf(fp,"%d",base.using_table->findSymbol((yyvsp[-2].ast)->left->idname)->getOffset());
																fputs("],ecx\n",fp);																
															}
															else{}
															base.using_table->flag = 1;
														 }
#line 1838 "yacc.tab.c"
    break;

  case 51: /* expression: expression '=' expression  */
#line 407 "yacc.y"
                                                        { if(!canCalculate((yyvsp[-2].ast),(yyvsp[0].ast)))yyerror("can't calculate!");(yyval.ast) = newAstnode("expression","",3,(yyvsp[-2].ast),(yyvsp[-1].ast),(yyvsp[0].ast));
															
															if(!strcmp((yyvsp[-2].ast)->left->name,"ID")&&(yyvsp[-2].ast)->left->right!=NULL&&!strcmp((yyvsp[-2].ast)->left->right->name,"[")){
																
																fputs("\tmov dword [ecx],",fp);
																if(!strcmp((yyvsp[0].ast)->left->name,"ID")){
																	fputs("dword [ebp-",fp);
																	fprintf(fp,"%d\n",base.using_table->findSymbol((yyvsp[0].ast)->left->idname)->getOffset());
																}
																else if(!strcmp((yyvsp[0].ast)->left->name,"INT")){
																	fprintf(fp,"%d\n",(yyvsp[0].ast)->left->value);
																}
															}
															else{															
																if(!strcmp((yyvsp[0].ast)->left->name,"ID")&&(yyvsp[0].ast)->left->right!=NULL&&!strcmp((yyvsp[0].ast)->left->right->name,"[")){																
																	fputs("\tmov dword [ebp-",fp);
																	fprintf(fp,"%d",base.using_table->findSymbol((yyvsp[-2].ast)->left->idname)->getOffset());
																	fputs("],dword [ecx]\n",fp);
																}																
																else if(!strcmp((yyvsp[0].ast)->left->name,"expression") || !strcmp((yyvsp[0].ast)->left->name,"(") || !strcmp((yyvsp[0].ast)->left->name,"-") || 
																	((yyvsp[0].ast)->left->right!=NULL && !strcmp((yyvsp[0].ast)->left->name,"ID") && !strcmp((yyvsp[0].ast)->left->right->name,"("))){
																	printf("(1111111)");
																	fputs("\tmov dword [ebp-",fp);
																	fprintf(fp,"%d",base.using_table->findSymbol((yyvsp[-2].ast)->left->idname)->getOffset());
																	fputs("],edx\n",fp);
																}
																else if(!strcmp((yyvsp[0].ast)->left->name,"ID")){
																	fputs("\tmov eax,dword [ebp-",fp);
																	fprintf(fp,"%d",base.using_table->findSymbol((yyvsp[0].ast)->left->idname)->getOffset());
																	fputs("]\n",fp);
																	fputs("\tmov dword [ebp-",fp);
																	fprintf(fp,"%d",base.using_table->findSymbol((yyvsp[-2].ast)->left->idname)->getOffset());
																	fputs("],eax\n",fp);
																}
																else if(!strcmp((yyvsp[0].ast)->left->name,"INT")){															
																	fputs("\tmov dword [ebp-",fp);
																	fprintf(fp,"%d",base.using_table->findSymbol((yyvsp[-2].ast)->left->idname)->getOffset());
																	fputs("],",fp);
																	fprintf(fp,"%d\n",(yyvsp[0].ast)->left->value);
																}
																else{}
															}
															base.using_table->flag = 1;
														}
#line 1887 "yacc.tab.c"
    break;

  case 52: /* expression: expression AND expression  */
#line 451 "yacc.y"
                                                        { if(!canCalculate((yyvsp[-2].ast),(yyvsp[0].ast)))yyerror("can't calculate!");(yyval.ast) = newAstnode("expression","",3,(yyvsp[-2].ast),(yyvsp[-1].ast),(yyvsp[0].ast));}
#line 1893 "yacc.tab.c"
    break;

  case 53: /* expression: expression OR expression  */
#line 452 "yacc.y"
                                                        { if(!canCalculate((yyvsp[-2].ast),(yyvsp[0].ast)))yyerror("can't calculate!");(yyval.ast) = newAstnode("expression","",3,(yyvsp[-2].ast),(yyvsp[-1].ast),(yyvsp[0].ast));}
#line 1899 "yacc.tab.c"
    break;

  case 54: /* expression: expression RELOP expression  */
#line 453 "yacc.y"
                                                        { if(!canCalculate((yyvsp[-2].ast),(yyvsp[0].ast)))yyerror("can't calculate!");(yyval.ast) = newAstnode("expression","",3,(yyvsp[-2].ast),(yyvsp[-1].ast),(yyvsp[0].ast));
															//只考虑了简单的情况。a>b,a>2,2>a,a>1
															if(!strcmp((yyvsp[-2].ast)->left->name,"ID")){
																fputs("\tmov edx,",fp);
																fputs("dword [ebp-",fp);
																fprintf(fp,"%d",base.using_table->findSymbol((yyvsp[-2].ast)->left->idname)->getOffset());
																fputs("]\n",fp);
															}
															else if(!strcmp((yyvsp[-2].ast)->left->name,"INT")){
																fputs("\tmov edx,",fp);
																fprintf(fp,"%d\n",(yyvsp[-2].ast)->left->value);
															}
															else{}
															if(!strcmp((yyvsp[0].ast)->left->name,"ID")){
																fputs("\tmov eax,",fp);
																fputs("dword [ebp-",fp);
																fprintf(fp,"%d",base.using_table->findSymbol((yyvsp[0].ast)->left->idname)->getOffset());
																fputs("]\n",fp);
															}
															else if(!strcmp((yyvsp[0].ast)->left->name,"INT")){
																fputs("\tmov eax,",fp);
																fprintf(fp,"%d\n",(yyvsp[0].ast)->left->value);
															}
															else{}
															
															
															fputs("\tcmp edx,eax\n",fp);
															if(!strcmp((yyvsp[-1].ast)->name,">=")){
																fputs("\tjge ",fp);																	
															}
															else if(!strcmp((yyvsp[-1].ast)->name,"<=")){
																fputs("\tjle ",fp);																																	
															}	
															else if(!strcmp((yyvsp[-1].ast)->name,"==")){
																fputs("\tje ",fp);																																	
															}
															else if(!strcmp((yyvsp[-1].ast)->name,">")){
																fputs("\tjg ",fp);																																	
															}	
															else if(!strcmp((yyvsp[-1].ast)->name,"<")){
																fputs("\tjl ",fp);																																	
															}
															else if(!strcmp((yyvsp[-1].ast)->name,"!=")){
																fputs("\tjne ",fp);																																	
															}	
															else{}
															
															fputs(mystrcat(base.using_table->tableName,base.using_table->childNum+1),fp);
															fputs("\n",fp);
																
															fputs("\tjmp ",fp);																	
															fputs(mystrcat(base.using_table->tableName,base.using_table->childNum+2),fp);
															fputs("\n",fp);
														}
#line 1958 "yacc.tab.c"
    break;

  case 55: /* expression: expression '+' expression  */
#line 507 "yacc.y"
                                                        { if(!canCalculate((yyvsp[-2].ast),(yyvsp[0].ast)))yyerror("can't calculate!");(yyval.ast) = newAstnode("expression","",3,(yyvsp[-2].ast),(yyvsp[-1].ast),(yyvsp[0].ast));
															if(!strcmp((yyvsp[-2].ast)->left->name,"expression") || !strcmp((yyvsp[-2].ast)->left->name,"(") || 
																((yyvsp[-2].ast)->left->right!=NULL && !strcmp((yyvsp[-2].ast)->left->name,"ID") && !strcmp((yyvsp[-2].ast)->left->right->name,"("))){
																if(!strcmp((yyvsp[0].ast)->left->name,"expression") || !strcmp((yyvsp[0].ast)->left->name,"(") ||
																	((yyvsp[0].ast)->left->right!=NULL && !strcmp((yyvsp[0].ast)->left->name,"ID") && !strcmp((yyvsp[0].ast)->left->right->name,"("))){
																	fputs("\tadd edx,eax\n",fp);
																}
																else if(!strcmp((yyvsp[0].ast)->left->name,"INT")){
																	fputs("\tmov eax,",fp);
																	fprintf(fp,"%d\n",(yyvsp[0].ast)->left->value);
																	fputs("\tadd edx,eax\n",fp);
																}																														
																else if(!strcmp((yyvsp[0].ast)->left->name,"ID")){
																	fputs("\tmov eax,",fp);
																	fputs("dword [ebp-",fp);
																	fprintf(fp,"%d",base.using_table->findSymbol((yyvsp[0].ast)->left->idname)->getOffset());
																	fputs("]\n",fp);
																	fputs("\tadd edx,eax\n",fp);
																}
																else{}
															}
															else if(!strcmp((yyvsp[-2].ast)->left->name,"INT")){
																fputs("\tmov eax,",fp);
																fprintf(fp,"%d\n",(yyvsp[-2].ast)->left->value);
																if(!strcmp((yyvsp[0].ast)->left->name,"expression") || !strcmp((yyvsp[0].ast)->left->name,"(") ||
																	((yyvsp[0].ast)->left->right!=NULL && !strcmp((yyvsp[0].ast)->left->name,"ID") && !strcmp((yyvsp[0].ast)->left->right->name,"("))){
																	fputs("\tadd edx,eax\n",fp);
																}
																else if(!strcmp((yyvsp[0].ast)->left->name,"INT")){
																	fputs("\tadd eax,",fp);
																	fprintf(fp,"%d\n",(yyvsp[0].ast)->left->value);
																	if(base.using_table->flag==1){
																		fputs("\tmov edx,eax\n",fp);
																	}
																}
																else if(!strcmp((yyvsp[0].ast)->left->name,"ID")){
																	fputs("\tadd eax,",fp);
																	fputs("dword [ebp-",fp);
																	fprintf(fp,"%d",base.using_table->findSymbol((yyvsp[0].ast)->left->idname)->getOffset());
																	fputs("]\n",fp);
																	if(base.using_table->flag==1){
																		fputs("\tmov edx,eax\n",fp);
																	}
																}
																else{}
															}															
															else if(!strcmp((yyvsp[-2].ast)->left->name,"ID")){
																fputs("\tmov eax,",fp);
																fputs("dword [ebp-",fp);
																fprintf(fp,"%d",base.using_table->findSymbol((yyvsp[-2].ast)->left->idname)->getOffset());
																fputs("]\n",fp);
																
																if(!strcmp((yyvsp[0].ast)->left->name,"expression") || !strcmp((yyvsp[0].ast)->left->name,"(") ||
																	((yyvsp[0].ast)->left->right!=NULL && !strcmp((yyvsp[0].ast)->left->name,"ID") && !strcmp((yyvsp[0].ast)->left->right->name,"("))){
																	fputs("\tadd edx,eax\n",fp);
																}
																else if(!strcmp((yyvsp[0].ast)->left->name,"INT")){
																	fputs("\tadd eax,",fp);
																	fprintf(fp,"%d\n",(yyvsp[0].ast)->left->value);
																	if(base.using_table->flag==1){
																		fputs("\tmov edx,eax\n",fp);
																	}																
																}
																else if(!strcmp((yyvsp[0].ast)->left->name,"ID")){
																	fputs("\tadd eax,",fp);
																	fputs("dword [ebp-",fp);
																	fprintf(fp,"%d",base.using_table->findSymbol((yyvsp[0].ast)->left->idname)->getOffset());
																	fputs("]\n",fp);
																	if(base.using_table->flag==1){
																		fputs("\tmov edx,eax\n",fp);
																	}	
																}
																else{}																
															}
															else{}
															base.using_table->flag++;
															printf("加法");																				
														}
#line 2041 "yacc.tab.c"
    break;

  case 56: /* expression: expression '-' expression  */
#line 585 "yacc.y"
                                                        { if(!canCalculate((yyvsp[-2].ast),(yyvsp[0].ast)))yyerror("can't calculate!");(yyval.ast) = newAstnode("expression","",3,(yyvsp[-2].ast),(yyvsp[-1].ast),(yyvsp[0].ast));
															if(!strcmp((yyvsp[-2].ast)->left->name,"expression") || !strcmp((yyvsp[-2].ast)->left->name,"(") || 
																((yyvsp[-2].ast)->left->right!=NULL && !strcmp((yyvsp[-2].ast)->left->name,"ID") && !strcmp((yyvsp[-2].ast)->left->right->name,"("))){
																if(!strcmp((yyvsp[0].ast)->left->name,"expression") || !strcmp((yyvsp[0].ast)->left->name,"(") || 
																	((yyvsp[0].ast)->left->right!=NULL && !strcmp((yyvsp[0].ast)->left->name,"ID") && !strcmp((yyvsp[0].ast)->left->right->name,"("))){
																	fputs("\tsub edx,eax\n",fp);
																}
																else if(!strcmp((yyvsp[0].ast)->left->name,"INT")){
																	fputs("\tmov eax,",fp);
																	fprintf(fp,"%d\n",(yyvsp[0].ast)->left->value);
																	fputs("\tsub edx,eax\n",fp);
																}																														
																else if(!strcmp((yyvsp[0].ast)->left->name,"ID")){
																	fputs("\tmov eax,",fp);
																	fputs("dword [ebp-",fp);
																	fprintf(fp,"%d",base.using_table->findSymbol((yyvsp[0].ast)->left->idname)->getOffset());
																	fputs("]\n",fp);
																	fputs("\tsub edx,eax\n",fp);
																}
																else{}
															}
															else if(!strcmp((yyvsp[-2].ast)->left->name,"INT")){
																fputs("\tmov eax,",fp);
																fprintf(fp,"%d\n",(yyvsp[-2].ast)->left->value);
																if(!strcmp((yyvsp[0].ast)->left->name,"expression") || !strcmp((yyvsp[0].ast)->left->name,"(") || 
																	((yyvsp[0].ast)->left->right!=NULL && !strcmp((yyvsp[0].ast)->left->name,"ID") && !strcmp((yyvsp[0].ast)->left->right->name,"("))){
																	fputs("\tsub eax,edx\n",fp);
																	fputs("\tmov edx,eax\n",fp);
																}
																else if(!strcmp((yyvsp[0].ast)->left->name,"INT")){
																	fputs("\tsub eax,",fp);
																	fprintf(fp,"%d\n",(yyvsp[0].ast)->left->value);
																	if(base.using_table->flag==1){
																		fputs("\tmov edx,eax\n",fp);
																	}
																}
																else if(!strcmp((yyvsp[0].ast)->left->name,"ID")){
																	fputs("\tsub eax,",fp);
																	fputs("dword [ebp-",fp);
																	fprintf(fp,"%d",base.using_table->findSymbol((yyvsp[0].ast)->left->idname)->getOffset());
																	fputs("]\n",fp);
																	if(base.using_table->flag==1){
																		fputs("\tmov edx,eax\n",fp);
																	}
																}
																else{}
															}															
															else if(!strcmp((yyvsp[-2].ast)->left->name,"ID")){
																fputs("\tmov eax,",fp);
																fputs("dword [ebp-",fp);
																fprintf(fp,"%d",base.using_table->findSymbol((yyvsp[-2].ast)->left->idname)->getOffset());
																fputs("]\n",fp);
																
																if(!strcmp((yyvsp[0].ast)->left->name,"expression") || !strcmp((yyvsp[0].ast)->left->name,"(") ||
																	((yyvsp[0].ast)->left->right!=NULL && !strcmp((yyvsp[0].ast)->left->name,"ID") && !strcmp((yyvsp[0].ast)->left->right->name,"("))){
																	fputs("\tsub eax,edx\n",fp);
																	fputs("\tmov edx,eax\n",fp);
																}
																else if(!strcmp((yyvsp[0].ast)->left->name,"INT")){
																	fputs("\tsub eax,",fp);
																	fprintf(fp,"%d\n",(yyvsp[0].ast)->left->value);
																	if(base.using_table->flag==1){
																		fputs("\tmov edx,eax\n",fp);
																	}																
																}
																else if(!strcmp((yyvsp[0].ast)->left->name,"ID")){
																	fputs("\tsub eax,",fp);
																	fputs("dword [ebp-",fp);
																	fprintf(fp,"%d",base.using_table->findSymbol((yyvsp[0].ast)->left->idname)->getOffset());
																	fputs("]\n",fp);
																	if(base.using_table->flag==1){
																		fputs("\tmov edx,eax\n",fp);
																	}	
																}
																else{}																
															}
															else{}
															base.using_table->flag++;
															printf("减法");
														}
#line 2126 "yacc.tab.c"
    break;

  case 57: /* expression: expression '*' expression  */
#line 665 "yacc.y"
                                                        { if(!canCalculate((yyvsp[-2].ast),(yyvsp[0].ast)))yyerror("can't calculate!");(yyval.ast) = newAstnode("expression","",3,(yyvsp[-2].ast),(yyvsp[-1].ast),(yyvsp[0].ast));													
															if(!strcmp((yyvsp[-2].ast)->left->name,"expression")||!strcmp((yyvsp[-2].ast)->left->name,"(") ||
																((yyvsp[-2].ast)->left->right!=NULL && !strcmp((yyvsp[-2].ast)->left->name,"ID") && !strcmp((yyvsp[-2].ast)->left->right->name,"("))){
																if(!strcmp((yyvsp[0].ast)->left->name,"expression")||!strcmp((yyvsp[0].ast)->left->name,"(") ||
																	((yyvsp[0].ast)->left->right!=NULL && !strcmp((yyvsp[0].ast)->left->name,"ID") && !strcmp((yyvsp[0].ast)->left->right->name,"("))){
																	fputs("\timul edx,eax\n",fp);
																}
																else{
																	fputs("\timul edx,",fp);
																	if(!strcmp((yyvsp[0].ast)->left->name,"INT")){
																		fprintf(fp,"%d\n",(yyvsp[0].ast)->left->value);
																	}
																	if(!strcmp((yyvsp[0].ast)->left->name,"ID")){
																		fputs("dword [ebp-",fp);
																		fprintf(fp,"%d",base.using_table->findSymbol((yyvsp[0].ast)->left->idname)->getOffset());
																		fputs("]\n",fp);
																	}
																	else{}
																}
															}
															else{
																fputs("\tmov eax,",fp);
																if(!strcmp((yyvsp[-2].ast)->left->name,"INT")){
																	fprintf(fp,"%d\n",(yyvsp[-2].ast)->left->value);
																}
																if(!strcmp((yyvsp[-2].ast)->left->name,"ID")){
																	fputs("dword [ebp-",fp);
																	fprintf(fp,"%d",base.using_table->findSymbol((yyvsp[-2].ast)->left->idname)->getOffset());
																	fputs("]\n",fp);
																}
																
																if(!strcmp((yyvsp[0].ast)->left->name,"expression")||!strcmp((yyvsp[0].ast)->left->name,"(") ||
																	((yyvsp[0].ast)->left->right!=NULL && !strcmp((yyvsp[0].ast)->left->name,"ID") && !strcmp((yyvsp[0].ast)->left->right->name,"("))){
																	fputs("\timul edx,eax\n",fp);
																}
																else{
																	fputs("\timul eax,",fp);
																	if(!strcmp((yyvsp[0].ast)->left->name,"INT")){
																		fprintf(fp,"%d\n",(yyvsp[0].ast)->left->value);
																	}
																	if(!strcmp((yyvsp[0].ast)->left->name,"ID")){
																		fputs("dword [ebp-",fp);
																		fprintf(fp,"%d",base.using_table->findSymbol((yyvsp[0].ast)->left->idname)->getOffset());
																		fputs("]\n",fp);
																	}
																	else{}
																	if(base.using_table->flag==1){
																		fputs("\tmov edx,eax\n",fp);
																	}
																}
															}
															base.using_table->flag++;																					
															printf("乘法");
														}
#line 2185 "yacc.tab.c"
    break;

  case 58: /* expression: expression '/' expression  */
#line 719 "yacc.y"
                                                        { if(!canCalculate((yyvsp[-2].ast),(yyvsp[0].ast)))yyerror("can't calculate!");(yyval.ast) = newAstnode("expression","",3,(yyvsp[-2].ast),(yyvsp[-1].ast),(yyvsp[0].ast));
															if(!strcmp((yyvsp[-2].ast)->left->name,"expression")||!strcmp((yyvsp[-2].ast)->left->name,"(") || 
																((yyvsp[-2].ast)->left->right!=NULL && !strcmp((yyvsp[-2].ast)->left->name,"ID") && !strcmp((yyvsp[-2].ast)->left->right->name,"("))){
																if(!strcmp((yyvsp[0].ast)->left->name,"expression")||!strcmp((yyvsp[0].ast)->left->name,"(") ||
																	((yyvsp[0].ast)->left->right!=NULL && !strcmp((yyvsp[0].ast)->left->name,"ID") && !strcmp((yyvsp[0].ast)->left->right->name,"("))){
																	fputs("\tmov ebx,eax\n",fp);
																	fputs("\tmov eax,edx\n",fp);
																	fputs("\tpush edx\n",fp);
																	fputs("\tcdq\n",fp);
																	fputs("\tidiv ebx\n",fp);
																	fputs("\tpop edx\n",fp);
																}
																else{
																	fputs("\tmov eax,edx\n",fp);
																	fputs("\tpush edx\n",fp);
																	fputs("\tmov ebx,",fp);																	
																	if(!strcmp((yyvsp[0].ast)->left->name,"INT")){
																		fprintf(fp,"%d\n",(yyvsp[0].ast)->left->value);
																	}
																	if(!strcmp((yyvsp[0].ast)->left->name,"ID")){
																		fputs("dword [ebp-",fp);
																		fprintf(fp,"%d",base.using_table->findSymbol((yyvsp[0].ast)->left->idname)->getOffset());
																		fputs("]\n",fp);
																	}
																	else{}
																	fputs("\tcdq\n",fp);
																	fputs("\tidiv ebx\n",fp);
																	fputs("\tpop edx\n",fp);
																	fputs("\tmov edx,eax\n",fp);
																}
															}
															else{
																fputs("\tmov eax,",fp);
																if(!strcmp((yyvsp[-2].ast)->left->name,"INT")){
																	fprintf(fp,"%d\n",(yyvsp[-2].ast)->left->value);
																}
																else if(!strcmp((yyvsp[-2].ast)->left->name,"ID")){
																	fputs("dword [ebp-",fp);
																	fprintf(fp,"%d",base.using_table->findSymbol((yyvsp[-2].ast)->left->idname)->getOffset());
																	fputs("]\n",fp);
																}
																
																if(!strcmp((yyvsp[0].ast)->left->name,"expression")||!strcmp((yyvsp[0].ast)->left->name,"(") || 
																	((yyvsp[0].ast)->left->right!=NULL && !strcmp((yyvsp[0].ast)->left->name,"ID") && !strcmp((yyvsp[0].ast)->left->right->name,"("))){
																	fputs("\tmov ebx,edx\n",fp);
																	fputs("\tpush edx\n",fp);
																	fputs("\tcdq\n",fp);
																	fputs("\tidiv ebx\n",fp);
																	fputs("\tpop edx\n",fp);
																}
																else{
																	fputs("\tmov ebx,",fp);
																	if(!strcmp((yyvsp[0].ast)->left->name,"INT")){
																		fprintf(fp,"%d\n",(yyvsp[0].ast)->left->value);
																	}
																	if(!strcmp((yyvsp[0].ast)->left->name,"ID")){
																		fputs("dword [ebp-",fp);
																		fprintf(fp,"%d",base.using_table->findSymbol((yyvsp[0].ast)->left->idname)->getOffset());
																		fputs("]\n",fp);
																	}
																	else{}
																	fputs("\tpush edx\n",fp);
																	fputs("\tcdq\n",fp);
																	fputs("\tidiv ebx\n",fp);
																	fputs("\tpop edx\n",fp);
																}
															}
															if(base.using_table->flag==1){
																fputs("\tmov edx,eax\n",fp);
															}
															base.using_table->flag++;																					
															printf("除法");
														}
#line 2263 "yacc.tab.c"
    break;

  case 59: /* expression: expression '%' expression  */
#line 792 "yacc.y"
                                                        { if(!canCalculate((yyvsp[-2].ast),(yyvsp[0].ast)))yyerror("can't calculate!");(yyval.ast) = newAstnode("expression","",3,(yyvsp[-2].ast),(yyvsp[-1].ast),(yyvsp[0].ast));}
#line 2269 "yacc.tab.c"
    break;

  case 60: /* expression: expression '^' expression  */
#line 793 "yacc.y"
                                                        { if(!canCalculate((yyvsp[-2].ast),(yyvsp[0].ast)))yyerror("can't calculate!");(yyval.ast) = newAstnode("expression","",3,(yyvsp[-2].ast),(yyvsp[-1].ast),(yyvsp[0].ast));}
#line 2275 "yacc.tab.c"
    break;

  case 61: /* expression: '(' expression ')'  */
#line 794 "yacc.y"
                                                        { (yyval.ast) = newAstnode("expression","",3,(yyvsp[-2].ast),(yyvsp[-1].ast),(yyvsp[0].ast));
															if(!strcmp((yyvsp[-1].ast)->left->name,"expression")||!strcmp((yyvsp[-1].ast)->left->name,"(") || 
																((yyvsp[-1].ast)->left->right!=NULL && !strcmp((yyvsp[-1].ast)->left->name,"ID") && !strcmp((yyvsp[-1].ast)->left->right->name,"("))){

															}
															else if((!strcmp((yyvsp[-1].ast)->left->name,"INT"))){
																if(base.using_table->flag==1){
																	fputs("\tmov edx,",fp);
																}
																else{
																	fputs("\tmov eax,",fp);																
																}
																fprintf(fp,"%d\n",(yyvsp[-1].ast)->left->value);
															}
															else if((!strcmp((yyvsp[-1].ast)->left->name,"ID"))){
																if(base.using_table->flag==1){
																	fputs("\tmov edx,",fp);
																}
																else{
																	fputs("\tmov eax,",fp);																
																}
																fputs("dword [ebp-",fp);
																fprintf(fp,"%d",base.using_table->findSymbol((yyvsp[-1].ast)->left->idname)->getOffset());
																fputs("]\n",fp);
															}
															else{}
															base.using_table->flag++;
															printf("括号");
														}
#line 2309 "yacc.tab.c"
    break;

  case 62: /* expression: '-' expression  */
#line 823 "yacc.y"
                                                        { (yyval.ast) = newAstnode("expression","",2,(yyvsp[-1].ast),(yyvsp[0].ast));
															if(!strcmp((yyvsp[0].ast)->left->name,"expression")||!strcmp((yyvsp[0].ast)->left->name,"(")||
																((yyvsp[0].ast)->left->right!=NULL && !strcmp((yyvsp[0].ast)->left->name,"ID") && !strcmp((yyvsp[0].ast)->left->right->name,"("))){
																if(base.using_table->flag==1){
																	fputs("\tneg edx\n",fp);
																}																
																else{
																	fputs("\tneg eax\n",fp);
																}
															}
															else if((!strcmp((yyvsp[0].ast)->left->name,"INT"))){
																if(base.using_table->flag==1){
																	fputs("\tmov edx,",fp);
																	fprintf(fp,"%d\n",(yyvsp[0].ast)->left->value);
																	fputs("\neg edx\n",fp);
																}
																else{
																	fputs("\tmov eax,",fp);	
																	fprintf(fp,"%d\n",(yyvsp[0].ast)->left->value);																	
																	fputs("\tneg eax\n",fp);																
																}
															}
															else if((!strcmp((yyvsp[0].ast)->left->name,"ID"))){
																if(base.using_table->flag==1){
																	fputs("\tmov edx,",fp);
																	fputs("dword [ebp-",fp);
																	fprintf(fp,"%d",base.using_table->findSymbol((yyvsp[0].ast)->left->idname)->getOffset());
																	fputs("]\n",fp);
																	fputs("\tneg edx\n",fp);
																}
																else{
																	fputs("\tmov eax,",fp);	
																	fputs("dword [ebp-",fp);
																	fprintf(fp,"%d",base.using_table->findSymbol((yyvsp[0].ast)->left->idname)->getOffset());
																	fputs("]\n",fp);																	
																	fputs("\tneg eax\n",fp);																
																}
															}
															else{}
															base.using_table->flag++;
															printf("负号");
														}
#line 2356 "yacc.tab.c"
    break;

  case 63: /* expression: NOT expression  */
#line 865 "yacc.y"
                                                        { (yyval.ast) = newAstnode("expression","",2,(yyvsp[-1].ast),(yyvsp[0].ast));}
#line 2362 "yacc.tab.c"
    break;

  case 64: /* expression: ID '(' Args ')'  */
#line 866 "yacc.y"
                                                        { if(base.using_table->findSymbol((yyvsp[-3].ast)->idname)==NULL) yyerror("ERROR: haven`t declaration!");
															if(base.using_table->findSymbol((yyvsp[-3].ast)->idname)->getParam()!=funcParam)yyerror("The number of parameters does not match!");
															(yyval.ast) = newAstnode("expression","",4,(yyvsp[-3].ast),(yyvsp[-2].ast),(yyvsp[-1].ast),(yyvsp[0].ast));
															printf("paramNum:%d",funcParam);
															
															temp = (yyvsp[-1].ast);
															
															for(int i=0;i<funcParam;i++){																
																if(!strcmp(temp->left->name,"Args")){
																	if(!strcmp(temp->left->right->left->name,"INT")){
																		fputs("\tmov eax,[ebp-",fp);
																		fprintf(fp,"%d",temp->left->right->left->value);																	
																		fputs("]\n",fp);
																		fputs("\tpush eax\n",fp);
																		temp = temp->left;
																	}
																	else if(!strcmp(temp->left->right->left->name,"ID")){
																		int of = base.using_table->findSymbol(temp->left->right->left->idname)->getOffset();
																		fputs("\tmov eax,[ebp-",fp);
																		fprintf(fp,"%d",of);																	
																		fputs("]\n",fp);
																		fputs("\tpush eax\n",fp);																																		
																		temp = temp->left;
																	}
																	
																}
																else if(!strcmp(temp->left->name,"expression")){
																	if(!strcmp(temp->left->left->name,"INT")){
																		fputs("\tmov eax,[ebp-",fp);
																		fprintf(fp,"%d",temp->left->right->left->value);																	
																		fputs("]\n",fp);
																		fputs("\tpush eax\n",fp);
																		temp = temp->left;
																	}
																	else if(!strcmp(temp->left->left->name,"ID")){
																		int of = base.using_table->findSymbol(temp->left->left->idname)->getOffset();
																		fputs("\tmov eax,[ebp-",fp);
																		fprintf(fp,"%d",of);																	
																		fputs("]\n",fp);
																		fputs("\tpush eax\n",fp);	
																	}																															
																}
															}
															int d = 4;
															for(int i=0;i<funcParam;i++){
																if(i==0){
																	fputs("\tmov eax,[esp]\n",fp);
																	fputs("\tmov [esp-",fp);
																	fprintf(fp,"%d",(funcParam+2)*4-i*d);
																	fputs("],eax\n",fp);
																}
																else{
																	fputs("\tmov eax,[esp+",fp);
																	fprintf(fp,"%d",i*d);
																	fputs("]\n",fp);
																	fputs("\tmov [esp-",fp);
																	fprintf(fp,"%d",(funcParam+2)*4-i*d);
																	fputs("],eax\n",fp);
																}
															}
															fputs("\tcall ",fp);
															fputs((yyvsp[-3].ast)->idname,fp);
															fputs("\n",fp);
															if(base.using_table->flag==1){
																fputs("\tmov edx,eax\n",fp);
															}
															base.using_table->flag++;
															funcParam = 1;
														}
#line 2436 "yacc.tab.c"
    break;

  case 65: /* expression: ID '(' ')'  */
#line 935 "yacc.y"
                                                        { if(base.using_table->findSymbol((yyvsp[-2].ast)->idname)==NULL) yyerror("ERROR: haven`t declaration!");
															if(base.using_table->findSymbol((yyvsp[-2].ast)->idname)->getParam()!=0)yyerror("The number of parameters does not match!");
															(yyval.ast) = newAstnode("expression","",3,(yyvsp[-2].ast),(yyvsp[-1].ast),(yyvsp[0].ast));	
															fputs("\tcall ",fp);
															fputs((yyvsp[-2].ast)->idname,fp);
															fputs("\n",fp);
															if(base.using_table->flag==1){
																fputs("\tmov edx,eax\n",fp);
															}
															base.using_table->flag++;
														}
#line 2452 "yacc.tab.c"
    break;

  case 66: /* expression: expression '[' expression ']'  */
#line 946 "yacc.y"
                                                        { (yyval.ast) = newAstnode("expression","",4,(yyvsp[-3].ast),(yyvsp[-2].ast),(yyvsp[-1].ast),(yyvsp[0].ast));}
#line 2458 "yacc.tab.c"
    break;

  case 67: /* expression: ID  */
#line 947 "yacc.y"
                                                        { if(base.using_table->findSymbol((yyvsp[0].ast)->idname)==NULL) yyerror("ERROR: haven`t declaration!");(yyval.ast) = newAstnode("expression","",1,(yyvsp[0].ast));}
#line 2464 "yacc.tab.c"
    break;

  case 68: /* expression: ID '[' expression ']'  */
#line 948 "yacc.y"
                                                        { if(base.using_table->findSymbol((yyvsp[-3].ast)->idname)==NULL) yyerror("ERROR: haven`t declaration!");
															(yyval.ast) = newAstnode("expression","",4,(yyvsp[-3].ast),(yyvsp[-2].ast),(yyvsp[-1].ast),(yyvsp[0].ast));
															
															if(!strcmp((yyvsp[-1].ast)->left->name,"expression")||!strcmp((yyvsp[-1].ast)->left->name,"(")||
																((yyvsp[-1].ast)->left->right!=NULL && !strcmp((yyvsp[-1].ast)->left->name,"ID") && !strcmp((yyvsp[-1].ast)->left->right->name,"("))){

															}
															else if(!strcmp((yyvsp[-1].ast)->left->name,"INT")){
																fputs("\tmov edx,",fp);
																fprintf(fp,"%d\n",(yyvsp[-1].ast)->left->value);																
																}
															
															else if(!strcmp((yyvsp[-1].ast)->left->name,"ID")){									
																fputs("\tmov edx,",fp);
																fputs("dword [ebp-",fp);
																fprintf(fp,"%d",base.using_table->findSymbol((yyvsp[-2].ast)->left->idname)->getOffset());
																fputs("]\n",fp);
															}															
															else{}
															
															//expression取出值到edx了
															
															fputs("\tmov eax,",fp);
															
															fprintf(fp,"%d\n",base.using_table->findSymbol((yyvsp[-3].ast)->idname)->getOffset());
															//fprintf(fp,"%d\n",base.using_table->findSymbol($1->idname)->getLength());
															
															
															fputs("\timul edx,4\n",fp);
															fputs("\tadd eax,edx\n",fp);
															
															fputs("\tmov ecx,ebp\n",fp);
															fputs("\tsub ecx,eax\n",fp);
																													
															
															base.using_table->flag++;
															printf("数组");
															
														}
#line 2508 "yacc.tab.c"
    break;

  case 69: /* expression: INT  */
#line 987 "yacc.y"
                                                        { (yyval.ast) = newAstnode("expression","",1,(yyvsp[0].ast));}
#line 2514 "yacc.tab.c"
    break;

  case 70: /* expression: error ')'  */
#line 988 "yacc.y"
                                                            { yyerrok; }
#line 2520 "yacc.tab.c"
    break;

  case 71: /* Args: Args ',' expression  */
#line 991 "yacc.y"
                                                        { (yyval.ast) = newAstnode("Args","",2,(yyvsp[-2].ast),(yyvsp[0].ast));funcParam+=1;}
#line 2526 "yacc.tab.c"
    break;

  case 72: /* Args: expression  */
#line 992 "yacc.y"
                                                        { (yyval.ast) = newAstnode("Args","",1,(yyvsp[0].ast));funcParam=1;}
#line 2532 "yacc.tab.c"
    break;


#line 2536 "yacc.tab.c"

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
      yyerror (YY_("syntax error"));
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


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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


#if !defined yyoverflow
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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 995 "yacc.y"





int main(int args, char **argv){
	fputs("extern printf\n",fp);	
	fputs("global main\n",fp);	
	fputs("print:\n",fp);
	fputs("\tpush ebp\n",fp);
	fputs("\tmov ebp, esp\n",fp);
	fputs("\tpush eax\n",fp);
	fputs("\tpush format\n",fp);
	fputs("\tcall printf  ; printf(format, 2)\n",fp);
	fputs("\tpop eax\n",fp);
	fputs("\tpop eax\n",fp);
	fputs("\tmov esp, ebp\n",fp);
	fputs("\tpop ebp\n",fp);
	fputs("\tret\n",fp);
	
	fputs("exit:\n",fp);
	fputs("\tmov esp,ebp\n",fp);
	fputs("\tpop ebp\n",fp);
	fputs("\tret\n",fp);
	
    yyin = fopen(argv[1],"r");
    yyparse();
    fclose(yyin);
	
	
	fputs("section .data\n",fp);
	fputs("\tformat db '输出:%d  ',0    ;set the form of int\n",fp);
	
	fclose(fp);
    return 0;
}
