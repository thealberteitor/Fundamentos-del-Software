programa1: ejercicio2.o complex.o fmat.o
	g++ -Wall -o programa1 ejercicio2.o complex.o fmat.o

ejercicio2.o: ejercicio2.cpp complex.h fmat.h
	g++ -Wall -c ejercicio2.cpp

complex.o: complex.cpp complex.h
	g++ -Wall -c complex.cpp
	
fmat.o: fmat.cpp fmat.h
	g++ -Wall -c fmat.cpp

clean:
	rm -f *.o $

