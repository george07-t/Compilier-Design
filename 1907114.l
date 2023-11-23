%{

#include<stdio.h>
#include<string.h>
#include<math.h>
#include "1907114.tab.h"
    void yyerror(char *);
%}

%%
"hed"[ ]+[A-Za-z0-9_.]+           {return HED;}
"var"[ ]*                         {return INIT;}
[+-]?[0-9]+                         {yylval.variable.ival = atoi(yytext);
                                     return INT;}

[+-]?[0-9]*[.][0-9]+                {yylval.variable.fval = atof(yytext);
                                     return FLOAT;}

["].*["]                            {yytext++;int l=strlen(yytext);
                                    yylval.variable.st=yytext;
                                    yylval.variable.st[l-1]='\0';
                                    return STRING;}
"="                               {return *yytext;}
"+"                               {return *yytext;}
"-"                               {return *yytext;}
"*"                               {return *yytext;}
"/"                               {return *yytext;}
"%"                               {return *yytext;}
"("                               {return *yytext;}
")"                               {return *yytext;}
"{"                               {return *yytext;}
"}"                               {return *yytext;}
"["                               {return *yytext;}
"]"                               {return *yytext;}
","                               {return *yytext;}
":"                               {return *yytext;}
"!"                               {return *yytext;}
"++"                              {return INC;}
"--"                              {return DEC;}
">"                               {return *yytext;}
"<"                               {return *yytext;}
">="                              {return GEQ;}
"<="                              {return LEQ;}
"=="                              {return EQ;}
"!="                              {return NEQ;}
[p][r][o][c][-][>][a-zA-Z0-9]+     {return FUN;}
"@"                               {return *yytext;}
[#][a-z<>.h]+                     {return HEAD;}
[/]{2}.*                          {return CMT;}
[@][a-zA-Z0-9]+                   {yylval.variable.str = yytext;
                                    return AN;}
[ ;\t\n]                           {}
"stop"                            {return STOP;}
"keepgoing"                       {return GOING;}
"ses"                             {return RET;}
"!?"                              {return VOID;}
"sf->FLOOR"                       {return FLOOR;}
"sf->CEIL"                        {return CEIL;}
"sf->ABS"                         {return ABS;}
"inn"                            {return INTT;}
"fnn"                            {return FL;}
"cnn"                          {return STT;}
"sf->SIN"                         {return SINE;}
"sf->COS"                         {return COS;}
"sf->TAN"                         {return TAN;}
"sf->POW"                         {return POW;}
"sf->PRIME"                       {return PRIME;}
"showi"                      {return SHOWI;}
"showf"                         {return SHOWF;}
"shows"                         {return SHOWS;}
"pfa"                             {return PFA;}
"givei"                       {return GIVEI;}
"givef"                          {return GIVEF;}
"endl"                            {return END;}
"sf->LEN"                         {return LEN;}
"sf->CMP"                         {return CMP;}
"sf->CAT"                         {return CAT;}
"sf->CPY"                         {return CPY;}
"sf->GCD"                         {return GCD;}
"sf->MIN"                         {return MIN;}
"sf->MAX"                         {return MAX;}
"ff"                              {return FF;}
"ffe"                             {return FFE;}
"ffnd"                             {return FFND;}
"fto"                               {return FOR;}
"wto"                           {return WHILE;}
"to"                            {return LOOP;}
"swit"                           {return SWIT;}
"alt"                             {return ALT;}
"non"                              {return NON;}
"do"                              {return DO;}
"ASOL"                          {return MAIN;}
"$$".*"$$"                        {printf("This is a Multiline Comment\n");}
"$$$".*"\n"                       {printf("This is a Singleiline Comment\n");}
[a-zA-Z][a-zA-Z0-9]*              {yylval.variable.str = yytext;
                                    return ID;}
.                                 {printf("Unknown character.\n");}
%%
int yywrap(void) {
    return 1;
}
