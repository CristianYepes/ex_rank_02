int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	if (!s1)
		return (-1);
	if (!s2)
		return (1);
	while (s1[i] && (s1[i] == s2[i]))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}


