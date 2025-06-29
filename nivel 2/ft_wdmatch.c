/*Assignment name  : wdmatch
Expected files   : wdmatch.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and checks whether it's possible to
write the first string with characters from the second string, while respecting
the order in which these characters appear in the second string.

If it's possible, the program displays the string, followed by a \n, otherwise
it simply displays a \n.

If the number of arguments is not 2, the program displays a \n.

Examples:

$>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
faya$
$>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
$
$>./wdmatch "quarante deux" "qfqfsudf arzgsayns tsregfdgs sjytdekuoixq " | cat -e
quarante deux$
$>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
$
$>./wdmatch | cat -e
$*/



#include  <unistd.h>

int main(int argc, char *argv[])
{
	char	*s1;
	char	*s2;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (1);
	}
	s1 = argv[1];
	s2 = argv[2];
	while (s1[i])
	{
		while (s2[j] && s1[i] != s2[j])
			j++;
		if (!s2[j])
		{
			write(1, "\n", 1);
			return (1);
		}
		i++;
		j++;
	}
	write(1, s1, i);
	write(1, "\n", 1);
	return (0);
}
