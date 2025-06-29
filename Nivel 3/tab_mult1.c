#include <unistd.h>

int	atoi(char *str)
{
	int	i;
	int num;

	i = 0;
	num = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num);
}

void	ft_putnbr(int nb)
{
	char c;

	if (nb >= 10)
		ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	num;
	int	i;
	int	res;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	num = ft_atoi(argv[1]);
	i = 1;
	while (i <= 9)
	{
		ft_putnbr(i);
		write(1, " x ", 3);
		ft_putnbr(num);
		write(1, " = ", 3);
		res = i * num;
		ft_putnbr(res);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
