/*
Assignment name  : pgcd
Expected files   : pgcd.c
Allowed functions: printf, atoi, malloc, free
--------------------------------------------------------------------------------

Write a program that takes two strings representing two strictly positive
integers that fit in an int.

Display their highest common denominator followed by a newline (It's always a
strictly positive integer).

If the number of parameters is not 2, display a newline.

Examples:

$> ./pgcd 42 10 | cat -e
2$
$> ./pgcd 42 12 | cat -e
6$
$> ./pgcd 14 77 | cat -e
7$
$> ./pgcd 17 3 | cat -e
1$
$> ./pgcd | cat -e

Explicación del enunciado en 6 líneas:
Función: Escribe un programa que calcule el máximo común divisor (GCD/PGCD) de dos números enteros positivos.
Entrada: El programa recibe exactamente 2 argumentos como cadenas que representan números enteros positivos.
Salida: Debe imprimir el GCD seguido de un salto de línea (\n).
Casos edge: Si no recibe exactamente 2 parámetros, debe imprimir solo un salto de línea.
Funciones permitidas: Solo puedes usar printf, atoi, malloc y free.
Ejemplos: ./pgcd 42 10 → 2, ./pgcd 42 12 → 6, ./pgcd → \n
*/

#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	num1;
	int	num2;
	int	tmp;

	if (argc != 3)
	{
		printf("\n");
		return (1);
	}
	tmp = 0;
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	while(num2)
	{
		tmp = num2;
		num2 = num1 % num2;
		num1 = tmp;
	}
	printf("%d\n", num1);
	return (0);
}
