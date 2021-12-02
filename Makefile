SRC =./src
Target =./target
CC =g++-9
CFLAGS =-std=c++2a -Wall -Werror
RM =rm -rf


all: clean vector.cpp

vector.cpp:
	$(CC) -o $(TARGET)/vector.out $(SRC)/main.cpp

clean:
	$(RM) $(TARGET)/*.out
