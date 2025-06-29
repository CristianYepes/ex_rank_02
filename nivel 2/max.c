
int		max(int* tab, unsigned int len)
{
	unsigned int i;
	int	res;

	if (len == 0)
		return 0;
	i = 0;
	res = tab[0];
	while (i < len)
	{
		if (tab[i] > res)
			res = tab[i];
		i++;
	}
	return (res);
}

