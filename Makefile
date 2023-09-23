.PHONY: run clean

# Env variables

# ------
CC=gcc
CFLAGS=-c
SOURCES=main.c error.c node.c parser.tab.c lex.yy.c
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=printer
SOURCE_PATH=source
# ------


# Targets

run: $(EXECUTABLE)
	chmod +x $(EXECUTABLE)
	./$(EXECUTABLE) input/input.txt > result/diagram.md

generate-resources: $(SOURCE_PATH)/lexems.l $(SOURCE_PATH)/parser.y
	flex $(SOURCE_PATH)/lexems.l
	bison -d -t $(SOURCE_PATH)/parser.y
	echo '#include "node.h"' | cat - parser.tab.h > temp && mv temp parser.tab.h

$(EXECUTABLE): $(OBJECTS) generate-resources
	$(CC) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf *.o $(EXECUTABLE)
