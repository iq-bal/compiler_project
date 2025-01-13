%{
  #include<stdio.h>
  #include "parser.tab.h"
%}

%%
"Dharma"         { return DHARMA;}
"Adharma"        { return ADHARMA;}
"Tapas"          { return TAPAS;}
"Yatra"          { return YATRA;}
"Tyaga"          { return TYAGA;}
"Nivritti"       { return NIVRITTI;}
"Bhumi"          { return BHUMI;}
"Niyam"          { return NIYAM;}
"Yajna"          { return YAJNA;}
"Ahvana"         { return AHVANA;}
"Moksha"         { return MOKSHA;}
"Mantra"         { return MANTRA;}
"Shravana"       { return SHRAVANA;}
"Sankalpa"      { return SANKALPA;} 

"Artha"          { return ARTHA;}
"Jala"           { return JALA;}
"Satya"          { return SATYA;}
"Akshara"        { return AKSHARA;}
"Vani"           { return VANI;}

"\+"             { return YOGA; }
"\-"             { return VIYOGA; }
"\*"             { return BAL; }
"/"              { return VIBHAJAN; }
"%"              { return SHESHA; }
"&&"             { return SAMAVAYA; }
"\|\|"           { return VIBHAGA; }
"!"              { return MAYA; }


"=="          { return EQ; }   
"!="          { return NE; }  
"<"           { return LT; }   
"<="          { return LE; }   
">"           { return GT; }   
">="          { return GE; }   


";"              { return SEMICOLON; }
"="              { return ASSIGN; }
"("              { return LPAREN; }
")"              { return RPAREN; } 
"{"              { return LBRACE; }
"}"              { return RBRACE; }
"["              { return LBRACKET; }
"]"              { return RBRACKET; }   
","              { return COMMA; }  




[a-zA-Z_][a-zA-Z0-9_]*  {yylval.sval = strdup(yytext); return IDENTIFIER; }
[0-9]+                   {yylval.ival = atoi(yytext); return INTEGER_LITERAL; }
[0-9]+\.[0-9]+          {yylval.fval = atof(yytext); return FLOAT_LITERAL; }  
\"([^\"\\]|\\[\"\\nrt])*\"  {yylval.sval = strdup(yytext); return STRING_LITERAL; }


"//".*                   { /* Ignore single line comments */ }
"/*"([^*]|\*+[^*/])*\*+"/" { /* Ignore multi line comments */ }

[ \t\n]+                 { /* Ignore whitespace */ }
.                        { printf("Unknown token: %s\n", yytext); }

%%

