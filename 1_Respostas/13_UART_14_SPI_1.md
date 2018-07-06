1. Cite as vantagens e desvantagens das comunicação serial:

(a) Assíncrona (UART).

	R: Vantagens: Pode ter 2^8-1 receptores (nº de endereços possíveis), menos ciclos de clock para transmitir dados quando a mais de um recptor. Uso de apenas 2 fios para comunicação.
           Desvantagens: As configurações devem ser previamente combinadas, não há garantia de que o receptor irá  receber a mensagem. 		

(b) SPI.
	
	R: Vantagens: Mestre inicia a transmissão e compatilha o clock com o escravo.
	   Desvantagens: Quantidade máxima de escravos é iguala a quantidade de chipselect.

2. Considere o caso em que a Raspberry Pi deve receber leituras analógico/digitais de um MSP430, e que a comunicação entre os dois é UART. É tecnicamente possível que o MSP430 mande os resultados da conversão A/D a qualquer hora, ou ele deve aguardar a Raspberry Pi fazer um pedido ao MSP430? Por quê?

	R: Ele tecinicamente pode mandar a qualquer hora.

3. Considere o caso em que a Raspberry Pi deve receber leituras analógico/digitais de um MSP430, que a comunicação entre os dois seja SPI, e que o MSP430 seja o escravo. É tecnicamente possível que o MSP430 mande os resultados da conversão A/D a qualquer hora, ou ele deve aguardar a Raspberry Pi fazer um pedido ao MSP430? Por quê?

	R: Deve aguardar o raspberry iniciar o clock.

4. Se o Raspberry Pi tiver de se comunicar com dois dispositivos via UART, como executar a comunicação com o segundo dispositivo?

	R: Usa o campo de bit de endereço e antes de iniciar  a transmissão envia o endereço.

5. Se o Raspberry Pi tiver de se comunicar com dois dispositivos via SPI, como executar a comunicação com o segundo dispositivo? 

	R: Daisy chain ou conexação serial entre os trÊs dispositivos.
