int	max(int *tab, unsigned int len)
{
	int i = 0;
	unsigned int value; 
	if (len == 0)
		return (0);
	value = tab[i];
	while (i < len)
	{
		if (tab[i] > value)
			value = tab[i];
		i++;
	}
	return (value);
}
