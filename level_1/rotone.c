#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	int i = 0;
	while (argv[1][i])
	{
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
		{
			if (argv[1][i] == 'z')
				ft_putchar('a');
			else
				ft_putchar(argv[1][i] + 1);
		}
		else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
		{
			if (argv[1][i] == 'Z')
				ft_putchar('A');
			else
				ft_putchar(argv[1][i] + 1);
		}
		else
			ft_putchar(argv[1][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
