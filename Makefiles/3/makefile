CC=g++
LIB=lib
INC=.
BIN=bin
OBJ=.
SRC=.
LD_FLAGS=-L $(LIB) -l libbiblioteca.a
CC_FLAGS=-Wall -g -c -I $(INC)

todo: $(BIN)/programa

$(BIN)/programa: $(OBJ)/pr.o $(LIB)/libbiblioteca.a
	$(CC) -L ./$(LIB) $< -lbiblioteca -o $@

$(OBJ)/pr.o: $(SRC)/pr.cpp $(INC)/complex.h $(INC)/geom.h $(INC)/vector.h
	$(CC) $< $(CC_FLAGS)

$(LIB)/libbiblioteca.a: $(OBJ)/vector.o $(OBJ)/geom.o $(OBJ)/complex.o
	$(AR) -rvs $@ $^

$(OBJ)/complex.o: $(SRC)/complex.cpp $(INC)/complex.h
	$(CC) $(CC_FLAGS) $<
$(OBJ)/geom.o: $(SRC)/geom.cpp $(INC)/geom.h
	$(CC) $(CC_FLAGS) $<
$(OBJ)/vector.o: $(SRC)/vector.cpp $(INC)/vector.h
	$(CC) $(CC_FLAGS) $<

clean:
	rm -f $(OBJ)/*.o $(LIB)/*.a
mrproper: clean
	rm -f $(BIN)/programa
