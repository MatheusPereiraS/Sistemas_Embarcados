1. O que são sistemas embarcados?
	
	R: Um conjunto de hardware, software, sensores e atuadores com propósito e, em geral, configurações pré-definidas para aplicação de controle, processamento, tomada de decisões e entre outros de forma mais otimizida e focada.

2. O que são sistemas microprocesssados?

	R: Um sistema embarcado que não roda em cima de um sistema operacional. Seu controle usa apenas um conjunto de regras, programa ou um RTOS para executar a demanda e controle de hardware, sensores e atuadores desejada.
3. Apresente aplicações de sistemas embarcados: (a) Para a indústria automotiva; (b) Para eletrodomésticos; (c) Para automação industrial.

	R: (a) - Sistemas de navegação, localização, central de mídia, sensoriamento de pressão e temperatura do motor e controladores dos atuadores.
	   (b) - Controle de resfriamento em sistemas de ar-condicionado e freezers, controle de temperatura em fornos e microondas, controle de rotação e máquina de estados em uma máquina de lavar roupa.
	   (c) - Controle de esteiras, controle de braços robóricos, centrais de processamento de dados e controle de linha de produção.

4. Cite arquiteturas possíveis e as diferenças entre elas.

	R: Entre as arquiteturas possíveis há microcontroladores, SoC's, FPGAs e DSP's. Microncontroladores e DSP's são arquiteturas feitas para aplicações que necessitam maior precisão no tempo, na FPGA só habilito (programo) os periféricos que preciso, em um SoC pode-se rodar um sistema operacional e tem mais memória para tratar arquivos maiores. DSP's possuem em geral grande quantidades de periféricos, incluindo A/D e D/A e são muito úteis para técnicas de filtragem e controle. Microcontroladores consomem uma menor quantidade de energia. 

5. Por que usamos o Raspberry Pi na disciplina, ao invés de outro system-on-chip?

	R: A Raspberry Pi possue varios modelos  e tipos com diferentes especificações e características, desse modo, tem se a liberdade de se escolher o modelo que melhor se adequa as especificações do projeto, ou seja, o modelo que tenha os perífericos e protocolos de comunicações necessários. Além disso há grande adoção deste SoC na universidade, o que torna a sua disponibilidade maior. Há ainda uma pequena vantagem em custo em relação aos outros SoC e também grande disponibilidade de projetos, bibliotecas e suporte para a mesma na internet. 
