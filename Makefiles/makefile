CC=g++
LIB=lib
SRC=.
OBJ=.
BIN=bin
INC=.
LD_FLAGS= -L $(LIB) -l funciones
CC_FLAGS= -Wall -g -c -I $(INC)

all: $(OBJ)/ejercicio2.o $(LIB)/libfunciones.a
	$(CC) $(OBJ)/ejercicio2.o $(LD_FLAGS) -o $(BIN)/programa

$(OBJ)/ejercicio2.o: $(SRC)/ejercicio2.cpp $(INC)/msg.h $(INC)/fmat.h
	$(CC) $(SRC)/ejercicio2.cpp $(CC_FLAGS) -o $(OBJ)/ejercicio2.o

$(OBJ)/fmat.o: $(SRC)/fmat.cpp $(INC)/fmat.h
	$(CC) $(SRC)/fmat.cpp $(CC_FLAGS) -o $(OBJ)/fmat.o

$(OBJ)/msg.o: $(SRC)/msg.cpp $(INC)/msg.h
	$(CC) $(SRC)/msg.cpp $(CC_FLAGS) -o $(OBJ)/msg.o

$(LIB)/libfunciones.a: $(OBJ)/fmat.o $(OBJ)/msg.o
	ar rcs $(LIB)/libfunciones.a $(OBJ)/fmat.o $(OBJ)/msg.o

clean:
	rm -f $(OBJ)/*.o $(LIB)/*.a

mrproper: clean
	rm -f $(BIN)/programa
