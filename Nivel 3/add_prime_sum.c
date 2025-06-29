/*
Assignment name  : add_prime_sum
Expected files   : add_prime_sum.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program that takes a positive integer as argument and displays the sum
of all prime numbers inferior or equal to it followed by a newline.

If the number of arguments is not 1, or the argument is not a positive number,
just display 0 followed by a newline.

Yes, the examples are right.

Examples:

$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$
$>

✅ Qué hace tu programa:

Toma un número positivo como argumento.
Calcula la suma de todos los números primos menores o iguales a ese número.
Muestra esa suma seguido de un \n.
❌ Si no recibe exactamente un número positivo:

Muestra 0 seguido de un \n.
⚙️ Restricciones:

Solo puedes usar write y exit.
No puedes usar printf ni atoi.

./add_prime_sum 7   →   2 + 3 + 5 + 7 = 17   →   muestra 17
./add_prime_sum     →   muestra 0
./add_prime_sum 5 10  → muestra 0
*/

#include <unistd.h>

int ft_is_prime(int nb)
{
	int i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void ft_putnbr(int num)
{
	char c;

	if (num >= 10)
		ft_putnbr(num / 10);
	c = num % 10 + '0';
	write(1, &c, 1);
}

int ft_atoi(char *str)
{
	int num;
	int i;

	i = 0;
	num = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num);
}

int main(int argc, char **argv)
{
	int num;
	int	res;
	int	i;

	if (argc != 2)
	{
		write(1, "0\n", 2);
		return (1);
	}
	num = ft_atoi(argv[1]);
	res = 0;
	i = 2;
	if (num <= 0)
	{
		write(1, "0\n", 2);
		return (1);
	}
	while (i <= num)
	{
		if (ft_is_prime(i))
			res += i;
		i++;
	}
	ft_putnbr(res);
	write(1, "\n", 1);
	return (0);
}
