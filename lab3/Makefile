CC = g++
CFLAGS =
LFLAGS = 
LIBS = -lm
SOURCES = main.cpp
OBJECTS = $(subst .cpp,.o,$(SOURCES))
BIN = sudoku
.PHONY: clean help

sudoko: $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) $(LIBS) -o $@ 

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< 

all : $(BIN)

clean:
	rm -f $(OBJECTS) $(BIN) *~

help:
	@echo "Valid targets:"
	@echo "  clean:  removes .o and binary files"
