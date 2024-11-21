#include <stddef.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i = 0;
	size_t k = 0;
	size_t contains = 0;
	while (s[i])
	{
		k = 0;
		contains = 0;
		while (accept[k])
		{
			if (s[i] == accept[k])
				contains++;
			k++;
		}
		if (contains == 0)
			return (i);
		i++;
	}
	return (i);
}

#include <stdio.h>
#include <string.h>

int main()
{
	printf("%zu\n", strspn("abc", "a"));
	printf("%zu\n", strspn("abc", "b"));
	printf("%zu\n", strspn("abc", "c"));
	printf("%zu\n", strspn("abc", "abc"));

	printf("%zu\n", ft_strspn("abc", "a"));
	printf("%zu\n", ft_strspn("abc", "b"));
	printf("%zu\n", ft_strspn("abc", "c"));
	printf("%zu\n", ft_strspn("abc", "abc"));

}
