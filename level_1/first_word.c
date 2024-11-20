#include <unistd.h>

int main(int argc, char **argv)
{
	if (argv != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	int i = 0;
	while (argv[1][i] && argv[1][i] <= 32)
		i++;
	while (argv[1][i] && argv[1][i] > 32)
	{
		write(1, &argv[1][i], 1);
		i++;
	}
	write (1,"\n", 1);
	return (0);
}
