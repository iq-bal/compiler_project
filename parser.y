%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    void yyerror(const char *s);
    int yylex();
%}

%union {
    int ival;
    float fval;
    char *sval;
}

%token <sval> IDENTIFIER    
%token <ival> INTEGER_LITERAL
%token <sval> STRING_LITERAL
%token DHARMA ADHARMA TAPAS YATRA TYAGA NIVRITTI BHUMI NIYAM YAJNA AHVANA MOKSHA MANTRA SHRAVANA
%token ARTHA JALA SATYA AKSHARA VANI
%token YOGA VIYOGA BAL VIBHAJAN SHESHA SAMAVAYA VIBHAGA MAYA   
%token SEMICOLON ASSIGN LPAREN RPAREN LBRACE RBRACE LBRACKET RBRACKET
%token COMMA
%token SANKALPA
%token EQ NE LT LE GT GE
%token <fval> FLOAT_LITERAL 
%%

program: declarations functions main_function 
    

main_function: SANKALPA LPAREN RPAREN LBRACE statements RBRACE
    

declarations: /* empty */ | declarations declaration SEMICOLON
    

declaration: type IDENTIFIER| type IDENTIFIER ASSIGN expression
    

functions: /* empty */ | functions function_declaration
    


function_declaration: YAJNA type IDENTIFIER LPAREN parameters RPAREN LBRACE statements RBRACE
    

parameters: /* empty */ | parameter_list
    


parameter_list: parameter | parameter_list COMMA parameter
    


parameter: type IDENTIFIER
    


statements: /* empty */ | statements statement
    


statement: declaration SEMICOLON | assignment SEMICOLON | conditional | loop | for_loop | TYAGA SEMICOLON | NIVRITTI SEMICOLON | function_call SEMICOLON
    | MOKSHA expression SEMICOLON | input_output SEMICOLON
    

assignment: IDENTIFIER ASSIGN expression
    

conditional: DHARMA LPAREN expression RPAREN LBRACE statements RBRACE | DHARMA LPAREN expression RPAREN LBRACE statements RBRACE ADHARMA LPAREN expression RPAREN LBRACE statements RBRACE
    

loop: TAPAS LPAREN expression RPAREN LBRACE statements RBRACE
    

for_loop: YATRA LPAREN for_initialization SEMICOLON for_condition SEMICOLON for_increment RPAREN LBRACE statements RBRACE
    

for_initialization: /* empty */ | assignment | declaration
    

for_condition: /* empty */ | expression 
    

for_increment: /* empty */ | assignment
    

expression: term | expression YOGA term | expression VIYOGA term | expression VIBHAGA term | expression LT term | expression GT term | expression LE term | expression GE term | expression EQ term | expression NE term
    

term: factor | term BAL factor | term VIBHAJAN factor | term SHESHA factor | term SAMAVAYA factor
    

factor: LPAREN expression RPAREN | IDENTIFIER | literal | function_call
    

literal: INTEGER_LITERAL | STRING_LITERAL | FLOAT_LITERAL
    


function_call: AHVANA LPAREN arguments RPAREN
    

arguments: /* empty */ | argument_list
    


argument_list: expression | argument_list COMMA expression
    


input_output: SHRAVANA LPAREN IDENTIFIER RPAREN | MANTRA LPAREN expression RPAREN 
    

type: ARTHA | JALA | SATYA | AKSHARA | VANI


%%

int main(int argc, char *argv[]) {
    yyparse();
    return 0;
}

void yyerror(const char *s) {
    printf("Error: %s\n", s);
}