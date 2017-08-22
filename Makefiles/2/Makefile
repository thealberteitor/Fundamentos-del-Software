all: ejercicio2.o lib/funciones.a
	g++ ejercicio2.o -L lib -lfunciones -o bin/programa

ejercicio2.o: ejercicio2.cpp complex.h fmat.h
	g++ -c ejercicio2.cpp -o ejercicio2.o -I. -Wall -g

fmat.o: fmat.cpp fmat.h
	g++ -c fmat.cpp -o fmat.o -I. -Wall -g

complex.o: complex.cpp complex.h
	g++ -c complex.cpp -o complex.o -I. -Wall -g

lib/funciones.a: fmat.o complex.o
	ar -rvs lib/libfunciones.a fmat.o complex.o

clean:
	rm -f *.o lib/*.a
