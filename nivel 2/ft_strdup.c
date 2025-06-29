#include <unistd.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dst;
	size_t	len;
	int i;

	i = 0;
	len = ft_strlen(src) + 1;
	dst = malloc(len);
	if (!dst)
		return (NULL);
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] == '\0';
	return (dst);
}
/*#include <stdio.h>
int	main()
{
	char	src[] = "origen";
	printf ("%s", ft_strdup(src));
	return (0);

}*/
