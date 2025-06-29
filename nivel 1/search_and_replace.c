#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*str;
	char	search;
	char	replace;
	int		i;

	i = 0;
	if (argc != 4)
	{
		write(1, "\n", 1);
		return (1);
	}
	if (argv[2][1] != '\0' || argv[3][1] != '\0')
	{
		write(1, "\n", 1);
		return (1);
	}
	str = argv[1];
	search = argv[2][0];
	replace = argv[3][0];
	while (str[i])
	{
		if (str[i] == search)
			write(1, &replace, 1);
		else
			write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);

}
