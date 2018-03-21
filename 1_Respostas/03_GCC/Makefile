Q1: olamundo.c
	gcc -o Ola_Mundo olamundo.c
Q2: ola_usuario.c
	gcc -o ola_usuario_1 ola_usuario.c
Q4: ola_usuario_2.c
	gcc -o ola_usuario_2 ola_usuario_2.c
Q6: ola_usuario_3.c
	gcc -o ola_usuario_3 ola_usuario_3.c
Q7: ola_argumentos.c
	gcc -o ola_argumentos ola_argumentos.c
Q8: num_caracs.c
	gcc -c num_caracs.c
Q9: ola_num_caracs_1.c num_caracs.h
	gcc -o ola_num_caracs_1 ola_num_caracs_1.c
ola_num_caracs_1: ola_num_caracs_1.o num_caracs.o
	gcc -o ola_num_caracs_1 ola_num_caracs_1.o num_caracs.o
ola_num_caracs_1.o: ola_num_caracs_1.c num_caracs.h
	gcc -c ola_num_caracs_1.c

ola_num_caracs_2: ola_num_caracs_2.o num_caracs.o
	gcc -o ola_num_caracs_2 ola_num_caracs_2.o num_caracs.o
ola_num_caracs_2.o: ola_num_caracs_2.c num_caracs.h
	gcc -c ola_num_caracs_2.c
num_caracs.o: num_caracs.c num_caracs.h
	gcc -c num_caracs.c
clean_1: 	
	rm -f *.o ola_num_caracs_1
clean_2: 
	rm -f *.o ola_num_caracs_2 
