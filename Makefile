SRC =./src
TARGET =./target
CC =g++-9
CFLAGS =-std=c++2a -Wall -Werror
RM =rm -rf


all: clean vector

debug: clean vector.debug

vector: vectorfunctions 
	$(CC) $(CFLAGS) -o $(TARGET)/vector.out $(SRC)/main.cpp $(TARGET)/vectorfunctions.o

vectorfunctions: 
	$(CC) $(CFLAGS) -c -o $(TARGET)/vectorfunctions.o $(SRC)/vectorfunctions.cpp

vector.debug: vectorfunctions.debug 
	$(CC) $(CFLAGS) -g -o $(TARGET)/vector.out $(SRC)/main.cpp $(TARGET)/vectorfunctions.o

vectorfunctions.debug: 
	$(CC) $(CFLAGS) -g -c -o $(TARGET)/vectorfunctions.o $(SRC)/vectorfunctions.cpp
clean:
	$(RM) $(TARGET)/*.out
