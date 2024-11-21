#include <stddef.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int i = 0;
	int j = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
				return ((char*)(&s1[i]));
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	printf("%s\n", strpbrk("abc", "a"));
	printf("%s\n", strpbrk("abc", "b"));
	printf("%s\n", strpbrk("abc", "c"));
	printf("%s\n", strpbrk("abc", "abc"));
	printf("%s\n", strpbrk("abc", "d") != NULL ? "findend" : "not findend");

	printf("%s\n", ft_strpbrk("abc", "a"));
	printf("%s\n", ft_strpbrk("abc", "b"));
	printf("%s\n", ft_strpbrk("abc", "c"));
	printf("%s\n", ft_strpbrk("abc", "abc"));
	printf("%s\n", ft_strpbrk("abc", "d") != NULL ? "findend" : "not findend");
}*/
