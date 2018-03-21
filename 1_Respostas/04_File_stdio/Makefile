Q1: ola_mundo.c
	gcc -o ola_mundo ola_mundo.c
Q2: ola_usuario_1.c
	gcc -o ola_usuario_1 ola_usuario_1.c
Q3: ola_usuario_2.c
	gcc -o ola_usuario_2 ola_usuario_2.c
Q6: cat_falsificado.o bib_arqs.o
	gcc -o cat_falsificado cat_falsificado.o bib_arqs.o
Q7: busca_e_conta.o bib_arqs.o
	gcc -o busca_e_conta busca_e_conta.o bib_arqs.o  
bib_arqs.o: bib_arqs.c bib_arqs.h
	gcc -c bib_arqs.c
cat_falsificado.o: cat_falsificado.c bib_arqs.h
	gcc -c cat_falsificado.c
busca_e_conta.o: busca_e_conta.c bib_arqs.h
	gcc -c busca_e_conta.c
