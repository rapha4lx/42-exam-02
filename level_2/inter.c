#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		write (1, "\n", 1);
		return (0);
	}
	int i = 0;
	int ar[256] = { 0 };
	while (argv[2][i])
	{
		if (ar[(int)argv[2][i]] == 0)
			ar[(int)argv[2][i]] = 1;
		i++;
	}
	i = 0;
	while (argv[1][i])
	{
		if (ar[(int)argv[1][i]] == 1)
		{
			ar[(int)argv[1][i]] = 2;
			write(1, &argv[1][i], 1);
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
