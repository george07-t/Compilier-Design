
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1676 of yacc.c  */
#line 41 "1907114.y"

    struct use
    {
        int ival;
        float fval;
        char *str;
        char *st;
    }variable;



/* Line 1676 of yacc.c  */
#line 124 "1907114.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


