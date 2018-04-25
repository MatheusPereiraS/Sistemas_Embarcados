1. Como se utiliza o comando `ps` para:

	(a) Mostrar todos os processos rodando na máquina?
		
		R: ps -e

	(b) Mostrar os processos de um usuário?

		R: ps -u usuario

	(c) Ordenar todos os processos de acordo com o uso da CPU?
	
		R:  ps -aux --sort=-%cpu
	
	(d) Mostrar a quanto tempo cada processo está rodando?

		R: ps -eo start

2. De onde vem o nome `fork()`?

	R: Vem da idéia de se dividir um processo em dois, o original e uma cópia. Como um garfo de dois dentes.

3. Quais são as vantagens e desvantagens em utilizar:

	(a) `system()`?

		R: O comando system() é simples de ser executado, contudo dá  brechas a falhas de execução devido a sua depedência do sistema.

	(b) `fork()` e `exec()`?


		R: Mais passos a serem executados. Os processos criados permitem que sejam aberto muitos outros programas (processos). Pode ser perigosa para trabalhar com acesso compartilhado a arquivos.
		
4. É possível utilizar o `exec()` sem executar o `fork()` antes?

	R: Sim, é possível. Mas todo o código programado depois do exec é imterrompido (substtituído) após sua chamada.

5. Quais são as características básicas das seguintes funções:

	(a) `execp()`?

		R: Aceita que o nome ou procura da função esteja no diretório corrente.

	(b) `execv()`?
	
		R: Aceitam lista de argumentos do novo programa nula.

	(c) `exece()`?

		R: Aceita arugmento adicional.

	(d) `execvp()`?

		R: Aceita lista nula e nome da função no diretório corrente.

	(e) `execve()`?

		R: Aceita lista nula e aceita arugmento adicional

	(f) `execle()`?

		R: Aceitam a utilização de mecanismos var args em liguagem c em seus argumentos.
