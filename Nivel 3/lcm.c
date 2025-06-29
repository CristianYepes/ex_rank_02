/*
Assignment name  : lcm
Expected files   : lcm.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function who takes two unsigned int as parameters and returns the
computed LCM of those parameters.

LCM (Lowest Common Multiple) of two non-zero integers is the smallest postive
integer divisible by the both integers.

A LCM can be calculated in two ways:

- You can calculate every multiples of each integers until you have a common
multiple other than 0

- You can use the HCF (Highest Common Factor) of these two integers and
calculate as follows:

	LCM(x, y) = | x * y | / HCF(x, y)

  | x * y | means "Absolute value of the product of x by y"

If at least one integer is null, LCM is equal to 0.

Your function must be prototyped as follows:

  unsigned int    lcm(unsigned int a, unsigned int b);
*/

/*Escribe una función que reciba dos números
enteros sin signo (unsigned int a, unsigned int b)
 y devuelva su mínimo común múltiplo (LCM).*/

 unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	c;

	if (a == 0 || b == 0)
		return (0);
	c = (a > b) ? a : b;
	while (1)
	{
		if (c % a == 0 && c % b == 0)
			return (c);
		c++;
	}
}

/*Casos base: si a == 0 o b == 0, no hay LCM → devuelve 0.
Comienza la búsqueda desde el máximo de a o b.
Va probando valores crecientes hasta encontrar uno divisible por ambos (a y b).
Retorna ese número cuando lo encuentra.*/
