#include <unistd.h>

int	main(int argc, char *argv[])
{
	char			*s1;
	char			*s2;
	int				i;
	int				written[256] = {0};
	unsigned char	c;

	i = 0;
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (1);
	}
	s1 = argv[1];
	s2 = argv[2];
	while (s1[i])
	{
		c = (unsigned char)s1[i];
		if (!written[c])
		{
			write(1, &s1[i], 1);
			written[c] = 1;
		}
		i++;
	}
	i = 0;
	while (s2[i])
	{
		c = (unsigned char)s2[i];
		if (!written[c])
		{
			write(1, &s2[i], 1);
			written[c] = 1;
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);

}
