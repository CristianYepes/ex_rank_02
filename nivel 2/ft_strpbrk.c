/*Assignment name	: ft_strpbrk
Expected files	: ft_strpbrk.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strpbrk
(man strpbrk).

The function should be prototyped as follows:

char	*ft_strpbrk(const char *s1, const char *s2);*/

#include <unistd.h>
char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	while(s1[i])
	{
		j = 0;
		while (s2[j] && s2[j] != s1[i])
			j++;
		if (s2[j] == s1[i])
			return ((char *)&s1[i]);
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>
int	main()
{
	const char	s1[] = "abc";
	const char	s2[] = "rbe";
	printf ("%s\n", ft_strpbrk(s1, s2));
	return (0);
}*/
