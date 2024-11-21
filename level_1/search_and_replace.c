#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	int i = 0;
	int c = 0;
	int k = 0;
	while (argv[2][c])
		c++;
	while (argv[3][k])
		k++;
	if (c > 1 || k > 1)
	{
		write (1, "\n", 1);
		return (0);
	}
	while (argv[1][i])
	{
		if (argv[1][i] == argv[2][0])
			write(1, &argv[3][0], 1);
		else
			write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
