/*
/*
Assignment name  : epur_str
Expected files   : epur_str.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string, and displays this string with exactly one
space between words, with no spaces or tabs either at the beginning or the end,
followed by a \n.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string.

If the number of arguments is not 1, or if there are no words to display, the
program displays \n.

Example:

$> ./epur_str "See? It's easy to print the same thing" | cat -e
See? It's easy to print the same thing$
$> ./epur_str " this        time it      will     be    more complex  . " | cat -e
this time it will be more complex .$
$> ./epur_str "No S*** Sherlock..." "nAw S*** ShErLaWQ..." | cat -e
$
$> ./epur_str "" | cat -e
$
$>

Esta funcion toma un string y lo muesta con las siguinte condiciones:
eliminar los expacios y tabulaciones del principio o final
reemplazar cuanquier grupo de espacios/tabulaciones entre palabras
por un solo espacio, imprimir el resultado seguido de un salto de linea.*/

/*Si no hay exactamente un argumento, o si la cadena está vacía o no contiene palabras,
 el programa debe imprimir solo un \n.*/

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*str;
	int		i;
	int		space;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	str = argv[1];
	i = 0;
	space = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t')
			space = 1;
		else
		{
			if (space == 1)
				write(1, " ", 1);
			write(1, &str[i], 1);
			space = 0;
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}

