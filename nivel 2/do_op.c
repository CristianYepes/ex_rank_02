#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		num1;
	int		num2;
	int		res;
	char	op;

	if (argc != 4)
	{
		write(1, "\n", 1);
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2][0];
	res = 0;
	if (op == '+')
		res = num1 + num2;
	else if (op == '-')
		res = num1 - num2;
	else if (op == '*')
		res = num1 * num2;
	else if (op == '/')
		res = num1 / num2;
	else if (op == '%')
		res = num1 % num2;
	printf("%d\n", res);
}
