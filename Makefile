Brazo: BrazoRobotico.cpp BrazoRobotico.h main.cpp
	g++ main.cpp BrazoRobotico.cpp

all: Brazo

clean: 
	rm *.out

test: all
	./a.out
