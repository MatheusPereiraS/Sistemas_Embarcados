1. Apresente 5 sistemas operacionais suportados pelo Raspberry Pi, e algumas de suas características.

	R: 	Raspbian: Linux baseado no debian. Criado e otimizado para Raspberry.
		OSMC: Para reprodução de mídia.
		RISC OS: Feito para chiset ARM, poucos utiitários e aplicativos.
		Windows 10: Voltado para IoT. Possui versão para dispositivo móvel e para indústria.
		ArchLinux: Permiti construir o sistema de um nível baixo. Vem apenas com os módulos necessários. Menos memoria no SD.
		

2. Apresente as formas de instalação de sistemas operacionais para o Raspberry Pi.

	R: NOOBS e gravação de imagem. 
		1) NOOBS: Baixar NOOBS, formatar o SD, extrair o conteúdo no SD, insira o SD na RP, ligue, escolhe e instala o sistema.
		2) Gravação de imagem: Formatar SD, depois siga os procedimentos abaixo.
			- lsblk (nome do SD)
			- unzip -p 2018-04-18-raspbian-stretch.zip | sudo dd of=/dev/mmcblk0 bs=4M status=progress conv=fsync
			
3. Apresente 3 formas de desenvolvimento de software para o Raspberry Pi.

	R: gcc e cross-compiler linux. 

4. Apresente 3 formas de acesso remoto ao Raspberry Pi.

	R: SSH via ethernet, SSH via wi-fi e com cabo usb-serial usando comunicação serial.

5. Apresente as formas possíveis de compilação de código em C para o Raspberry Pi.

	R: gcc -o progama.c executavel

6. Apresente as formas possíveis de compilação de código em Python para o Raspberry Pi.

	R: python programa.py

