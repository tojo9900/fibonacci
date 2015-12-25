PROJECT = fibonacci
CC = clang++

all: $(PROJECT)

$(PROJECT): $(PROJECT).cpp
	$(CC) -g -O3 -Wall -pedantic -std=c++11 $^ -o $@

run: $(PROJECT)
	./$(PROJECT)
