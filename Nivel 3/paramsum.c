/*
Assignment name  : paramsum
Expected files   : paramsum.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays the number of arguments passed to it, followed by
a newline.

If there are no arguments, just display a 0 followed by a newline.

Example:

$>./paramsum 1 2 3 5 7 24
6
$>./paramsum 6 12 24 | cat -e
3$
$>./paramsum | cat -e
0$
$>

Escribir un programa que muestre en pantalla
la cantidad de argumentos que se le pasan al
ejecutarse, seguido de un salto de línea.

No puedes usar printf(), solo write().
Si no se pasan argumentos, debe imprimir 0\n.
El programa no debe imprimir el nombre del
programa (que es argv[0]), solo cuenta a partir de argv[1].*/


#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;
	if (nb >= 10)
		ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
		write(1, "0\n", 2);

	else
	{
		ft_putnbr(argc - 1);
		write(1, "\n", 1);
	}
	(void)argv;
	return (0);
}

/*Explicación paso a paso
📌 ft_putnbr(int num)
Función recursiva para imprimir un número entero positivo usando solo write.
Convierte cada dígito a carácter: (num % 10) + '0'.
📌 main(int argc, char *argv[])
argc es el número total de argumentos, incluyendo el nombre del programa.
Por eso se imprime argc - 1.
Si argc == 1 (es decir, solo se ejecutó el programa sin argumentos), imprime "0\n".*/
