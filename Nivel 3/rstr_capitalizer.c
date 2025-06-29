
/*
Assignment name  : rstr_capitalizer
Expected files   : rstr_capitalizer.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes one or more strings and, for each argument, puts
the last character of each word (if it's a letter) in uppercase and the rest
in lowercase, then displays the result followed by a \n.

A word is a section of string delimited by spaces/tabs or the start/end of the
string. If a word has a single letter, it must be capitalized.

If there are no parameters, display \n.

Examples:

$> ./rstr_capitalizer | cat -e
$
$> ./rstr_capitalizer "Premier PETIT TesT" | cat -e
premieR petiT tesT$
$> ./rstr_capitalizer "DeuxiEmE tEST uN PEU moinS  facile" "   attention C'EST pas dur QUAND mEmE" "ALLer UN DeRNier 0123456789pour LA rouTE    E " | cat -e
deuxiemE tesT uN peU moinS  facilE$
   attentioN c'esT paS duR quanD memE$
alleR uN dernieR 0123456789pouR lA routE    E $
$>

Funciones permitidas: write
Escribe un programa que tome una o más cadenas de texto y, para cada argumento,
ponga en Mayúscula la última letra de cada palabra y el resto en minúscula,
luego muestre el resultado seguido de un salto de línea (\n).
Una palabra es una sección de cadena delimitada por espacios/tabulaciones o el inicio/fin de la cadena.
Si una palabra tiene una sola letra, debe estar en mayúscula.
Una letra es un carácter en el conjunto [a-zA-Z].
Si no hay parámetros, muestra un salto de línea (\n).

$ ./rstr_capitalizer "Premier PETIT TesT"
premieR petiT tesT*/


#include <unistd.h>

int	is_space(char c)
{
	return (c == ' ' || c == '\t');
}

int	main(int argc, char *argv[])
{
	char	*str;
	char	newc;
	int		i;
	int		j;
	int		space;

	if (argc == 1)
	{
		write(1, "\n", 1);
		return(1);
	}
	i = 1;
	while (i < argc)
	{
		j = 0;
		str = argv[i];
		while (str[j])
		{
			newc = str[j];
			space = is_space(str[j + 1]) || str[j + 1] == '\0';

			if (newc >= 'A' && newc <= 'Z')
				newc += 32;

			if (newc >= 'a' && newc <= 'z' && space)
				newc -= 32;

			write(1, &newc, 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
