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
%token VIKALPA


%%

program: declarations functions main_function {fprintf(output_file, "program execution started\n");}
    

main_function: SANKALPA LPAREN RPAREN LBRACE statements RBRACE {fprintf(output_file, "main_function execution started\n");}
    

declarations: /* empty */ | declarations declaration SEMICOLON {fprintf(output_file, "declarations execution started\n");}
    

declaration: type IDENTIFIER {fprintf(output_file, "declaration execution started....name of the identifier is - %s\n", $2);}
            | type IDENTIFIER ASSIGN expression {fprintf(output_file, "declaration execution started....name of the identifier is - %s\n", $2);}    
    

functions: /* empty */ {fprintf(output_file, "end of the functions\n");}
        | functions function_declaration {fprintf(output_file, "declaration of a function\n");}
    


function_declaration: YAJNA type IDENTIFIER LPAREN parameters RPAREN LBRACE statements RBRACE {fprintf(output_file, "name of the function is - %s and the return type is - ", $3);}
    

parameters: /* empty */ {fprintf(output_file, "no parameters in the function declaration\n");}
        | parameter_list {fprintf(output_file, "parameters in the function declaration\n");}
    


parameter_list: parameter 
                | parameter_list COMMA parameter {fprintf(output_file, "parameter_list\n");}
    


parameter: type IDENTIFIER {fprintf(output_file, "parameter of type %s is needed to pass to the function\n");}
    


statements: /* empty */ | statements statement {fprintf(output_file, "statements\n");}
    


statement: declaration SEMICOLON | assignment SEMICOLON | conditional | loop | for_loop | TYAGA SEMICOLON | NIVRITTI SEMICOLON | function_call SEMICOLON
    | MOKSHA expression SEMICOLON | input_output SEMICOLON
    | try_catch_block {fprintf(output_file, "statement\n");}

try_catch_block: PRAYASCHITTA LBRACE statements RBRACE SHANTI LPAREN IDENTIFIER RPAREN LBRACE statements RBRACE {fprintf(output_file, "try_catch_block\n");}
    

assignment: IDENTIFIER ASSIGN expression {fprintf(output_file, "assignment\n");}    
    

conditional: DHARMA LPAREN expression RPAREN LBRACE statements RBRACE 
            | DHARMA LPAREN expression RPAREN LBRACE statements RBRACE ADHARMA LPAREN expression RPAREN LBRACE statements RBRACE 
            | DHARMA LPAREN expression RPAREN LBRACE statements RBRACE else_if_blocks ADHARMA LBRACE statements RBRACE {fprintf(output_file, "conditional\n");}


else_if_blocks: else_if_blocks else_if_block
              | else_if_block {fprintf(output_file, "else_if_blocks\n");}

else_if_block: VIKALPA LPAREN expression RPAREN LBRACE statements RBRACE {fprintf(output_file, "else_if_block\n");}


loop: TAPAS LPAREN expression RPAREN LBRACE statements RBRACE {fprintf(output_file, "loop\n");}
    

for_loop: YATRA LPAREN for_initialization SEMICOLON for_condition SEMICOLON for_increment RPAREN LBRACE statements RBRACE {fprintf(output_file, "for_loop\n");}
    

for_initialization: /* empty */ | assignment | declaration {fprintf(output_file, "for_initialization\n");}  
    

for_condition: /* empty */ | expression {fprintf(output_file, "for_condition\n");}
    

for_increment: /* empty */ | assignment {fprintf(output_file, "for_increment\n");}
    

expression: term 
            | expression YOGA term {fprintf(output_file, "addition operation execution started\n");}
            | expression VIYOGA term {fprintf(output_file, "subtraction operation execution started\n");}
            | expression VIBHAGA term {fprintf(output_file, "OR operation execution started\n");}
            | expression LT term {fprintf(output_file, "less than operation execution started\n");}
            | expression GT term {fprintf(output_file, "greater than operation execution started\n");}
            | expression LE term {fprintf(output_file, "less than or equal to operation execution started\n");}
            | expression GE term {fprintf(output_file, "greater than or equal to operation execution started\n");}
            | expression EQ term {fprintf(output_file, "equal to operation execution started\n");}
            | expression NE term {fprintf(output_file, "not equal to operation execution started\n");}
    

term: factor 
    | term BAL factor {fprintf(output_file, "multiplication operation execution started\n");}
    | term VIBHAJAN factor {fprintf(output_file, "division operation execution started\n");}
    | term SHESHA factor {fprintf(output_file, "modulus operation execution started\n");}
    | term SAMAVAYA factor {fprintf(output_file, "bitwise AND operation execution started\n");}
    

factor: LPAREN expression RPAREN {fprintf(output_file, "factor\n");}
        | IDENTIFIER {fprintf(output_file, "name of the identifier is - %s\n", $1);}
        | literal 
        | function_call {fprintf(output_file, "factor\n");}
    

literal: INTEGER_LITERAL {fprintf(output_file, "Artha type variable and the value is - %d\n", $1);}
        | STRING_LITERAL {fprintf(output_file, "Vani type variable and the value is - %s\n", $1);}
        | FLOAT_LITERAL {fprintf(output_file, "Jala type variable and the value is - %f\n", $1);}
    


function_call: AHVANA LPAREN arguments RPAREN {fprintf(output_file, "function_call\n");}
    

arguments: /* empty */ 
        | argument_list {fprintf(output_file, "arguments\n");} 
    


argument_list: expression {fprintf(output_file, "argument_list\n");}
            | argument_list COMMA expression {fprintf(output_file, "comma separated argument_list\n");}
    


input_output: SHRAVANA LPAREN IDENTIFIER RPAREN  {fprintf(output_file, "taking input from user to the variable %s\n", $3);}
            | MANTRA LPAREN expression RPAREN {fprintf(output_file, "printing to the console....\n");}
    

type: ARTHA {fprintf(output_file, "data type is - %s\n", "ARTHA");}
    | JALA {fprintf(output_file, "data type is - %s\n", "JALA");}
    | SATYA {fprintf(output_file, "data type is - %s\n", "SATYA");}
    | AKSHARA {fprintf(output_file, "data type is - %s\n", "AKSHARA");}
    | VANI {fprintf(output_file, "data type is - %s\n", "VANI");}


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
