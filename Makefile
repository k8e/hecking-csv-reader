EXE=heck
SRC=heck.cpp
CC=g++

all:
	$(CC) $(SRC) -o $(EXE)

clean:
	rm $(EXE)

