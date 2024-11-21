#include <stddef.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t i = 0;
	size_t j = 0;
	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (reject[j] == s[i])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	printf("%zu\n", strcspn("abc", "a"));
	printf("%zu\n", strcspn("abc", "b"));
	printf("%zu\n", strcspn("abc", "c"));
	printf("%zu\n", strcspn("abc", "dddddb"));

	printf("%zu\n", ft_strcspn("abc", "a"));
	printf("%zu\n", ft_strcspn("abc", "b"));
	printf("%zu\n", ft_strcspn("abc", "c"));
	printf("%zu\n", ft_strcspn("abc", "dddddb"));
}*/
