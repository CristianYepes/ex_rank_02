/*
Assignment name  : hidenp
Expected files   : hidenp.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program named hidenp that takes two strings and displays 1
followed by a newline if the first string is hidden in the second one,
otherwise displays 0 followed by a newline.

Let s1 and s2 be strings. We say that s1 is hidden in s2 if it's possible to
find each character from s1 in s2, in the same order as they appear in s1.
Also, the empty string is hidden in any string.

If the number of parameters is not 2, the program displays a newline.

Examples :

$>./hidenp "fgex.;" "tyf34gdgf;'ektufjhgdgex.;.;rtjynur6" | cat -e
1$
$>./hidenp "abc" "2altrb53c.sse" | cat -e
1$
$>./hidenp "abc" "btarc" | cat -e
0$
$>./hidenp | cat -e
$
$>

🔑 Idea principal
Tienes dos cadenas:

s1 (la cadena a buscar)
s2 (la cadena donde buscarla)
Debes verificar si s1 está escondida dentro de s2 siguiendo el orden de
 los caracteres de s1.
"Estar escondida" significa que todos los caracteres
de s1 aparecen en s2 en el mismo orden, pero no necesariamente seguidos.

Si s1 está escondida en s2 ➜ Imprime 1\n
Si NO está escondida ➜ Imprime 0\n
Si no se pasan 2 argumentos ➜ Imprime solo \n
Solo puedes usar write.
*/

#include <unistd.h>

void	hidenp(char	*s1, char *s2)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (s2[j])
	{
		if (s1[i] && s2[j] == s1[i])
			i++;
		j++;
	}
	(!s1[i]) ? write(1, "1\n", 2) : write(1, "0\n", 2);
}

int	main(int argc, char *argv[])
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (1);
	}
	else
		hidenp(argv[1], argv[2]);
	return (0);
}
