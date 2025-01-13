%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    void yyerror(const char *s);
    int yylex();

    FILE *output_file;
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
%token PRAYASCHITTA SHANTI
%%

program: declarations functions main_function {fprintf(output_file, "program\n");}
    

main_function: SANKALPA LPAREN RPAREN LBRACE statements RBRACE {fprintf(output_file, "main_function\n");}
    

declarations: /* empty */ | declarations declaration SEMICOLON {fprintf(output_file, "declarations\n");}
    

declaration: type IDENTIFIER| type IDENTIFIER ASSIGN expression {fprintf(output_file, "declaration\n");}    
    

functions: /* empty */ | functions function_declaration {fprintf(output_file, "functions\n");}
    


function_declaration: YAJNA type IDENTIFIER LPAREN parameters RPAREN LBRACE statements RBRACE {fprintf(output_file, "function_declaration\n");}
    

parameters: /* empty */ | parameter_list {fprintf(output_file, "parameters\n");}
    


parameter_list: parameter | parameter_list COMMA parameter {fprintf(output_file, "parameter_list\n");}
    


parameter: type IDENTIFIER {fprintf(output_file, "parameter\n");}
    


statements: /* empty */ | statements statement {fprintf(output_file, "statements\n");}
    


statement: declaration SEMICOLON | assignment SEMICOLON | conditional | loop | for_loop | TYAGA SEMICOLON | NIVRITTI SEMICOLON | function_call SEMICOLON
    | MOKSHA expression SEMICOLON | input_output SEMICOLON
    | try_catch_block {fprintf(output_file, "statement\n");}

try_catch_block: PRAYASCHITTA LBRACE statements RBRACE SHANTI LPAREN IDENTIFIER RPAREN LBRACE statements RBRACE {fprintf(output_file, "try_catch_block\n");}
    

assignment: IDENTIFIER ASSIGN expression {fprintf(output_file, "assignment\n");}    
    

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
