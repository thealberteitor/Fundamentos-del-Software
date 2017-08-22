bin/ejemplo: obj/main.o obj/funciones.o
	g++ obj/main.o obj/funciones.o -o bin/ejemplo

obj/main.o: src/main.cpp
	g++ -c src/main.cpp -o obj/main.o -I inc -Wall -g

obj/funciones.o: src/funciones.cpp inc/funciones.h
	g++ src/funciones.cpp -c -o obj/funciones.o -I inc -Wall -g

clean:
	rm obj/*.o bin/*
