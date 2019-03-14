CC=gcc
LEX=flex
YACC=yacc

CFILES= y.tab.c lex.yy.c proj2.c

parser: proj2.h y.tab.c lex.yy.c
	$(CC) -g -w -I. $(CFILES) -lfl -o $@

y.tab.c: test.y
	$(YACC) -v -d test.y

lex.yy.c: minijavalex.l y.tab.c
	$(LEX) minijavalex.l

clean:
	rm y.tab.c lex.yy.c y.tab.h y.output parser