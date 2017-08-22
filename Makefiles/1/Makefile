all: ejercicio2.o lib/libfunciones.a
	g++ ejercicio2.o -L lib -l funciones -o bin/programa

ejercicio2.o: ejercicio2.cpp fmat.h msg.h
	g++ -c ejercicio2.cpp -o ejercicio2.o -I. -Wall -g

fmat.o: fmat.cpp fmat.h
	g++ -c fmat.cpp -o fmat.o -I. -Wall -g

msg.o: msg.cpp msg.h
	g++ -c msg.cpp -I. -Wall -g -o msg.o

lib/libfunciones.a: fmat.o msg.o
	ar rcs lib/libfunciones.a fmat.o msg.o

clean:
	rm -f *.o lib/*.a
