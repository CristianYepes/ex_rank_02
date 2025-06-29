#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*str;
	char	newc;
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
		if (str[i] >= 'A' && str[i] <= 'Z')
			newc = 'A' + 'Z' - str[i];
		else if (str[i] >= 'a' && str[i] <= 'z')
			newc = 'a' + 'z' - str[i];
		else
			newc = str[i];
		write(1, &newc, 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
