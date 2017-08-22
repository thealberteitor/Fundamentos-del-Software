all: programa

programa: pr.o complex.o geom.o vector.o
	g++ -Wall -o programa pr.o complex.o geom.o vector.o

complex.o: complex.cpp complex.h
	g++ -Wall -c complex.cpp

geom.o: geom.cpp geom.h
	g++ -Wall -c geom.cpp

vector.o: vector.cpp vector.h
	g++ -Wall -c vector.cpp

clean:
	rm *.o
