/*
Assignment name  : ft_range
Expected files   : ft_range.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_range(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at start and end at end (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 1, 2 and 3.
- With (-1, 2) you will return an array containing -1, 0, 1 and 2.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing 0, -1, -2 and -3.

ft_range(int start, int end,
crea un array dinamico de enteros, Llena ese array con valores
consecutivos desde start hasta end, incluyendo
ambos.)Si start < end, los números aumentan.
Si start > end, los números disminuyen.
Devuelve un puntero al primer elemento del array.*/

#include <stdlib.h>  // para malloc
int	*ft_range(int start, int end)
{
	int	*ptr;
	int	len;
	int	i;

	len = (start <= end) ? (end - start + 1) : (start - end + 1);
	ptr = malloc(sizeof(int) * len);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = (start <= end) ? (start + i) : (start - i);
		i++;
	}
	return (ptr);
}
