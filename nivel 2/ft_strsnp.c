/*Assignment name	: ft_strspn
Expected files	: ft_strspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the strspn function
(man strspn).

The function should be prototyped as follows:

size_t  ft_strspn(const char *s, const char *accept);*/


#include <string.h>

size_t	ft_strspn(const char *s1, const char *accept)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!s1 || !accept)
		return (0);
	while (s1[i])
	{
		j = 0;
		while (accept[j] && s1[i] != accept[j])
			j++;
		if (!accept[j])
			return (i);
		i++;
	}
	return (i);
}
/*#include <stdio.h>

int	main()
{
	const char s1[] = "abcde";
	const char s2[] = "bac";

	printf ("%zu", ft_strspn(s1, s2));
	return (0);
}*/
