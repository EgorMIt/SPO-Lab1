.PHONY: run clean

clean:
	rm -rf *.o printer

run: build-resources
	gcc main.o parser.tab.o lex.yy.o node.o error.o -o printer && chmod +x printer
	./printer input/input.txt > result/diagram.md

generate-resources: source/lexems.l source/parser.y
	flex source/lexems.l
	bison -d -t source/parser.y
	echo '#include "node.h"' | cat - parser.tab.h > temp && mv temp parser.tab.h

build-resources: main.c error.c node.c generate-resources
	gcc -c -o main.o main.c
	gcc -c -o error.o error.c
	gcc -c -o node.o node.c
	gcc -c -o parser.tab.o parser.tab.c
	gcc -c -o lex.yy.o lex.yy.c