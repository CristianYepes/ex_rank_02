/*
Assignment name  : str_capitalizer
Expected files   : str_capitalizer.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes one or several strings and, for each argument,
capitalizes the first character of each word (If it's a letter, obviously),
puts the rest in lowercase, and displays the result on the standard output,
followed by a \n.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string. If a word only has one letter, it must be
capitalized.

If there are no arguments, the progam must display \n.

Example:

$> ./str_capitalizer | cat -e
$
$> ./str_capitalizer "a FiRSt LiTTlE TESt" | cat -e
A First Little Test$
$> ./str_capitalizer "__SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t" | cat -e
__second Test A Little Bit   Moar Complex$
   But... This Is Not That Complex$
     Okay, This Is The Last 1239809147801 But Not    The Least    T$
$>

Detecta el inicio de una palabra usando new_word.
Si el carácter es la primera letra de una palabra y es minúscula, lo convierte a mayúscula.
Si está dentro de una palabra y es mayúscula, la convierte a minúscula.
Escribe todo con write(1, &newc, 1) como exige el ejercicio.
Imprime una línea (\n) por cada argumento.
Si no hay argumentos, imprime solo un salto de línea.*/

/*$ ./str_capitalizer "DEuxiEmE tEST uN PEU moinS"
Deuxieme Test Un Peu Moins*/

/*$ ./str_capitalizer "  bonJOUR\tleS\taMIS  "
  Bonjour	Les	Amis  */

#include <unistd.h>

int	ft_is_space(char c)
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
		space = 1;
		while (str[j])
		{
			newc = str[j];
			if (space && newc >= 'a' && newc <= 'z')
				newc -= 32;
			else if (!space && newc >= 'A' && newc <= 'Z')
				newc += 32;

			write(1, &newc, 1);
			space = ft_is_space(str[j]);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}

