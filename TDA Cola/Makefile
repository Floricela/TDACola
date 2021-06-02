# La siguiente no es necesariamente requerida, se agrega para
# mostrar como funciona.

CC = gcc
CFLAGS = -g -Wall
SRC = Proyecto.c Cola.c Cola.h
OBJ = Proyecto.o Cola.o


# Reglas explicitas

all: $(OBJ)
	$(CC) $(CFLAGS) -o Proyecto $(OBJ)
clean:
	$(RM) $(OBJ) main

# Reglas implicitas

Cola.o: Cola.c Cola.h
Proyecto.o: Proyecto.c Cola.h
