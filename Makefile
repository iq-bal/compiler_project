all:
	bison -d -t -v parser.y	
	flex lexer.lex
	gcc lex.yy.c parser.tab.c -L/opt/homebrew/Cellar/flex/2.6.4_2/lib -lfl

clean:
	rm -f lex.yy.c parser.tab.c parser.tab.h parser.output a.out
