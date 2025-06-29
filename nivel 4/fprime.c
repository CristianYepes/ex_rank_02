/*Escribir un programa que:
Reciba un único argumento: un entero positivo.
Imprima en la salida estándar sus factores primos:
En orden ascendente.
Separados por asteriscos (*).
Seguido de un salto de línea.*/

int	main(int argc, char *argv[])
{
	int	num;
	int i;

	int i = 2;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	num = atoi(argv[1]);
	if (num == 1)
		printf("1");
	while (i > 1)
	{
		if (num % i == 0)
		{
			printf("%d", i);
			num = num / i;
			if (i > 1)
				printf("*");
		}
		else
			i++;
	}
	printf("\n");
	return (0);
}
