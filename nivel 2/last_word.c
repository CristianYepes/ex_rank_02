#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char *argv[])
{
	char	*str;
	int		end;
	int		i;

	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	str = argv[1];
	i = ft_strlen(str) - 1;
	end = 0;
	while (i >= 0 && (str[i] == ' ' || str[i] == '\t'))
		i--;
	end = i;
	while (i >= 0 && (str[i] != ' ' && str[i]  != '\t'))
		i--;
	i++;
	while (i <= end)
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
