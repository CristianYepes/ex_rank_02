#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	c;

	c = 0;
	if (nb >= 10)
		ft_putnbr( nb / 10);
	c = (nb % 10) + '0';
	write(1 ,&c, 1);
}

int main(int argc, char *argv[])
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 != 0)
			write(1, "fizz", 4);
		else if (i % 3 != 0 && i % 5 == 0)
			write(1, "buzz", 4);
		else if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 8);
		else
			ft_putnbr(i);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
