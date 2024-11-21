char	*ft_strrev(char *str)
{
	int i = 0;
	int s = 0;
	char tmp;

	while (str[s])
		s++;
	s--;
	while (i < s)
	{
		tmp = str[i];
		str[i] = str[s];
		str[s] = tmp;
		i++;
		s--;
	}
	return (str);
}

#include <stdio.h>

int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", ft_strrev(argv[1]));
}
