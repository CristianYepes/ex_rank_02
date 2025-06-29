/*Crea una función que:
Reciba un número entero (int).
Devuelva ese número convertido en texto (char *), como por ejemplo:
42 → "42"
-123 → "-123"
El texto debe terminar con '\0'.
La memoria debe ser reservada con malloc.*/


#include <stdlib.h>

int	num_digitos_num(int n)
{
	int	res = 0;

	if (n == 0)
		return (1);
	if (n < 0)
	{
		res++;
		n *= -1;
	}
	while (n > 0)
	{
		res++;
		n /= 10;
	}
	return (res);
}

char	*ft_itoa(int nbr)
{
	char	*res;
	int		num_dig;
	int		i;
	long	n = (long)nbr;

	num_dig = num_digitos_num(n);
	res = malloc((num_dig + 1) * sizeof(char));
	if (!res)
		return (NULL);
	res[num_dig] = '\0';
	i = num_dig - 1;
	if (n < 0)
	{
		res[0] = '-';
		n *= -1;
	}
	if (n == 0)
		res[i] = '0';
	while (n > 0)
	{
		res[i--] = (n % 10) + '0';
		n /= 10;
	}
	return (res);
}

