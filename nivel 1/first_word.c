#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*str;
	int		i;

	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	str = argv[1];
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i] && (str[i] != ' ' && str[i] != '\t'))
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
