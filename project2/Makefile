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

test: parser
	./parser < proj2_tests/proj2_tests/src0 > src0.out
	diff src0.out proj2_tests/proj2_tests/src0.out
	./parser < proj2_tests/proj2_tests/src1 > src1.out
	diff src1.out proj2_tests/proj2_tests/src1.out
	./parser < proj2_tests/proj2_tests/src2 > src2.out
	diff src2.out proj2_tests/proj2_tests/src2.out
	./parser < proj2_tests/proj2_tests/src3 > src3.out
	diff src3.out proj2_tests/proj2_tests/src3.out
	./parser < proj2_tests/proj2_tests/src4 > src4.out
	diff src4.out proj2_tests/proj2_tests/src4.out
	./parser < proj2_tests/proj2_tests/src5 > src5.out
	diff src5.out proj2_tests/proj2_tests/src5.out
	./parser < proj2_tests/proj2_tests/src6 > src6.out
	diff src6.out proj2_tests/proj2_tests/src6.out
	./parser < proj2_tests/proj2_tests/src7 > src7.out
	diff src7.out proj2_tests/proj2_tests/src7.out
	./parser < proj2_tests/proj2_tests/src8 > src8.out
	diff src8.out proj2_tests/proj2_tests/src8.out
	./parser < proj2_tests/proj2_tests/src9 > src9.out
	diff src9.out proj2_tests/proj2_tests/src9.out
	./parser < proj2_tests/proj2_tests/src10 > src10.out
	diff src10.out proj2_tests/proj2_tests/src10.out

gdb: parser
	gdb -ex 'set args < proj2_tests/proj2_tests/src6' parser

clean:
	rm y.tab.c lex.yy.c y.tab.h y.output parser
