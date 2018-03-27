1. Considerando a biblioteca-padrão da linguagem C, responda:

	(a) Quais são as funções (e seus protótipos) para abrir e fechar arquivos?
	
		R: - FILE *fopen (char *nome_do_arquivo, char *modo);
	           - int fclose (FILE *ponteiro_para_arquivo);	

	(b) Quais são as funções (e seus protótipos) para escrever em arquivos?

		R: - int putc (int caracter, FILE *nome_do_arquivo); - Para escrever um caracter.
	           - char *fputs (char *string, FILE *nome_do_arquivo); - Para escrever uma string em um arquivo.
	           - unsigned fread (void *buffer, int numero_de_bytes, int contador_de_byte, FILE *nome_do_arquivo); - Para ler um bloco de dados do stream.

	(c) Quais são as funções (e seus protótipos) para ler arquivos?

		R: - int getc (FILE *nome_do_arquivo); - Para ler um caracter.
	   	   - char *fgets (char *string, int tamanho, FILE *nome_do_arquivo); - Para ler uma string de um stream.
	           - unsigned fwrite (void *buffer, int numero_de_bytes, int contador_de_bytes, FILE *nome_do_arquivo); - Para escrever um bloco de dados em um stream.
		

	(d) Quais são as funções (e seus protótipos) para reposicionar um ponteiro para arquivo?

		R: - int fseek (FILE *stream, long int offset, int origin); - Para reposicionar o ponteiro para qualquer posição. 
		   - void rewind (FILE *stream); - Volta o ponteiro para o início. 

	(e) Quais bibliotecas devem ser incluídas no código para poder utilizar as funções acima?

		R: <stdio.h>.

2. O que é a norma POSIX?

	R: POSIX (Portable Operating System Interface) é uma família de padrões destinada a uniformizar as APIs nos sistemas operacionais UNIX. Estes padrões tornam mais fácil migrar de uma aplicação que trabalha com interfaces de um sistema para o outro variante UNIX. Define a API para compatibilidade de software entre variantes UNIX. É um padrão mais simples, baixo-nível e preferível para interfaces com hardware.

3. Considerando a norma POSIX, responda:

	(a) Quais são as funções (e seus protótipos) para abrir e fechar arquivos?

		R: - int open(const char* caminho_do_arquivo, int  flag_abertura); - Para abrir o arquivo.
	           - int close(int descritor_do_arquivo); - Para fechar o arquivo.

	(b) Quais são as funções (e seus protótipos) para escrever em arquivos?

		R: - ssize_t write(int descritor_de_arquivo, const void *buffer, size_t n_bytes); - Para escrever em um arquivo.

	(c) Quais são as funções (e seus protótipos) para ler arquivos?

		R: - ssize_t read(int descritor_de_arquivo, void *buffer, size_t n_bytes); - Para ler em um arquivo.

	(d) Quais são as funções (e seus protótipos) para reposicionar um ponteiro para arquivo?

		R: - off_t lseek(int descritor_de_arquivo, off_t offset, int de_que_posição); - Para reposicionar o ponteiro do descritor do arquivo em um arquivo aberto.

	(e) Quais bibliotecas devem ser incluídas no código para poder utilizar as funções acima?

		R: <fcntl.h> e <unistd.h>.
