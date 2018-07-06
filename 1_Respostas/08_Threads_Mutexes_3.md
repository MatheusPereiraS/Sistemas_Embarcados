1. Apresente as características e utilidades das seguintes funções:

(a) `popen()`

	R: Cria um pipe stream de um processo a outro unidericional.

(b) `pclose()`

	R: Fecha o pipe stream de um processo a outro.

(c) `fileno()`

	R: Retorna o descritor do arquivo.

2. Quais são as vantagens e desvantagens em utilizar:

(a) `popen()?`

	R: Não precisa se procupar se o outro processo está escrevendo. Se só há não há troca de informações. Posso fechar quando quiser.

(b) `exec()?`

	R: Tenho que esperar ser executado. Posso passar mais atributos.
