all: ordenacao.o busca.o main.o
	gcc main.o ordenacao.o busca.o -o p_e_c -std=c99 -Wall -lm

ordenacao.o:
	gcc -c ordenacao.c -o ordenacao.o

busca.o:
	gcc -c busca.c -o busca.o

main.o:
	gcc -c main.c -o main.o

clean:
	rm *.o p_e_c

run:
	./p_e_c