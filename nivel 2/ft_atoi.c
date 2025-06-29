int	ft_atoi(const char *str)
{
	int	num;
	int	sign;
	int i;

	i = 0;
	num = 0;
	sign = 1;
	if (!str)
		return (0);
	while (str[i] == ' ' || (str[i] <= 13 && str[i] >= 9))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num * sign);
}
