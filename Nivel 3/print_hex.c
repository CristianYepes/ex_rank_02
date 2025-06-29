
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	num;
	int	i;

	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num);
}

void print_hex(int nb)
{
	char c;

	c = "0123456789abcdef"[nb % 16];
	if (nb >= 16)
		print_hex (nb / 16);
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	char	*str;
	int		num1;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	str = argv[1];
	num1 = ft_atoi(str);
	print_hex(num1);
	write(1, "\n", 1);
	return (0);
}
