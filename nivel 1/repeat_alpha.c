#include <unistd.h>

int	num_apariciones(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c - 'A' + 1);
	else if (c >= 'a' && c <= 'z')
		return (c - 'a' + 1);
	return (0);
}

void	write_letters(int num, char c)
{
	int	i;

	i = 0;
	while (i < num)
	{
		write(1, &c, 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	char	*str;
	int		num;
	int		i;

	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	str = argv[1];
	while (str[i])
	{
		num = num_apariciones(str[i]);
		if (num > 0)
			write_letters(num, str[i]);
		else
			write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
