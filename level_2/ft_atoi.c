int	ft_atoi(const char *str)
{
	int i = 0;
	int sing = 1;
	while (*str <= 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sing = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		i = (i * 10) + (*str - 48);
		str++;
	}
	return (i * sing);
}
/*
#include <stdio.h>

int main(int argc, char **argv)
{
	(void)argc;
	printf("%d\n", ft_atoi(argv[1]));
	return (0);
}*/
