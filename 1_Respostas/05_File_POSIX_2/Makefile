Q7: busca_e_conta.o bib_arqs.o num_caracs.o
	gcc -o a busca_e_conta.o bib_arqs.o num_caracs.o

Q1: ola_mundo.c
	gcc -o a ola_mundo.c
Q2: ola_usuario_1.c
	gcc -o a ola_usuario_1.c
Q3: ola_usuario_2.o num_caracs.o
	gcc -o a ola_usuario_2.o num_caracs.o

ola_usuario_2.o: ola_usuario_2.c num_caracs.h
	gcc -c ola_usuario_2.c
num_caracs.o: num_caracs.c num_caracs.h
	gcc -c num_caracs.c 

Q4: bib_arqs.c
	gcc -o a bib_arqs.c
Q5: cat_falsificado.o bib_arqs.o
	gcc -o a cat_falsificado.o bib_arqs.o

cat_falsificado.o: cat_falsificado.c bib_arqs.h
	gcc -c cat_falsificado.c
bib_arqs.o: bib_arqs.c bib_arqs.h
	gcc -c bib_arqs.c 
