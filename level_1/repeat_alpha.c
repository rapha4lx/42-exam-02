#include <unistd.h>

char ft_to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return ((char)((c - 65) + 97));
	return (c);
}

int get_in_alpha(char c)
{
	char alpha[] = "abcdefghijklmnoprstuvwxyz";
	char n_c = ft_to_lower(c);
	int i = 0;
	while (alpha[i])
	{
		if (n_c == alpha[i])
			return (i);
		i++;
	}
	return (i);
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	int i = 0;
	int k = 0;
	while (argv[1][i])
	{
		if ((argv[1][i] >= 'a' && argv[1][i] <= 'z') || (argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
		{
			k = get_in_alpha(argv[1][i]);
			while (k >= 0)
			{
				write (1, &argv[1][i], 1);
				k--;
			}
		}
		else
			write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
