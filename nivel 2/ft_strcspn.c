#include <unistd.h>

size_t	ft_strcspn(const char *s1, const char *reject)
{
	size_t	i;
	size_t	j;

	if (!s1 || !reject)
		return (0);
	i = 0;
	while (s1[i])
	{
		j = 0;
		while (reject[j] && s1[i] != reject[j])
			j++;
		if (s1[i] == reject[j])
			return (i);
		i++;
	}
	return (i);
}
