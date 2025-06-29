/*Escribe una función que reciba una cadena de caracteres y la muestre en orden inverso, seguida de un salto de línea.
El prototipo de la función debe ser:

char *ft_rev_print(char *str);

La función debe devolver el mismo puntero recibido como argumento.
Solo se permite usar la función write (no se puede usar printf, puts, etc.).*/


#include <unistd.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_rev_print(char *str)
{
	int	i;

	if (!str)
		return (NULL);
	i = ft_strlen(str) - 1;
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	write(1, "\n", 1);
	return (str);
}

/*#include <stdio.h>
int main()
{
	char	str[] = "rainbow dash";

	ft_rev_print(str);
	return (0);
}*/
