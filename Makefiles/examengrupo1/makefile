programa: ejercicio2.o fmat.o msg.o
	g++ -o bin/programa1 -Wall ejercicio2.o fmat.o msg.o

ejercicio2.o: ejercicio2.cpp fmat.h msg.h
	g++ -Wall -c ejercicio2.cpp

fmat.o: fmat.cpp fmat.h
	g++ -Wall -c fmat.cpp

msg.o: msg.cpp msg.h
	g++ -Wall -c msg.cpp

clean:
	rm -f *.o $pprograma1
