CXX = clang++
CC = clang

all:	pasisveikinimas

test:	all
	./pasisveikinimas

clean:
	rm -f *.o pasisveikinimas