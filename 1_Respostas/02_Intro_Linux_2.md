Para todas as questões, escreva os comandos correspondentes no terminal.

1. Escreva o texto "Ola mundo cruel!" em um arquivo denominado "Ola_mundo.txt". Apresente o conteúdo deste arquivo no terminal.

	$ nano Ola_mundo.txt
		Ola mundo cruel!
	$ cat Ola_mundo.txt

2. Apresente o nome de todos os arquivos e pastas na pasta 'root'.

	$ cd
	$ cd .. (home)
	$ cd .. (raíz)
	$ su -
	$ ls -la root
		drwx------ 14 root root  4096 Fev 28 10:43 .
		drwxr-xr-x 25 root root  4096 Fev 21 20:48 ..
		-rw-------  1 root root 10173 Mar 20 15:36 .bash_history
		-rw-r--r--  1 root root  3106 Fev 19  2014 .bashrc
		drwx------  4 root root  4096 Set 18  2017 .cache
		drwx------  7 root root  4096 Set 18  2017 .config
		drwx------  3 root root  4096 Set 18  2017 .dbus
		drwx------  2 root root  4096 Fev 28 11:44 .elinks
		drwx------  2 root root  4096 Mar 20 14:32 .gconf
		drwx------  2 root root  4096 Set 18  2017 .gvfs
		drwxr-----  2 root root  4096 Jan 16 13:36 .hplip
		drwxr-xr-x  3 root root  4096 Fev 26 14:05 .java
		drwxr-xr-x  3 root root  4096 Set 18  2017 .local
		drwxr-xr-x  2 root root  4096 Fev 25 11:41 module-signing
		-rw-r--r--  1 root root   140 Fev 19  2014 .profile
		-rw-------  1 root root   218 Mai 10  2017 .recently-used.xbel
		-rw-------  1 root root  1024 Fev 25 11:41 .rnd
		drwx------  2 root root  4096 Out 11 11:38 .ssh
		drwxr-xr-x  2 root root  4096 Mai 15  2017 .vmware

3. Apresente o tipo de todos os arquivos e pastas na pasta 'root'.

	$ file *

4. Apresente somente as pastas dentro da pasta 'root'.

5. Descubra em que dia da semana caiu o seu aniversário nos últimos dez anos.

	$ cal 01 20X, X:{08-18}

Para as questões a seguir, use a pasta no endereço https://github.com/DiogoCaetanoGarcia/Sistemas_Embarcados/raw/master/Questoes/02_Intro_Linux_arqs.zip

6. Liste somente os arquivos com extensão .txt.

	$ls *.txt

7. Liste somente os arquivos com extensão .png.

	$ls *.png

8. Liste somente os arquivos com extensão .jpg.

	$ls *.jpg

9. Liste somente os arquivos com extensão .gif.

	$ls *.gif

10. Liste somente os arquivos que contenham o nome 'cal'.

	$ls | grep cal

11. Liste somente os arquivos que contenham o nome'tux'.

	$ls | grep tux

12. Liste somente os arquivos que comecem com o nome 'tux'.

	$ls | grep "^tux"
