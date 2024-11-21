#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("\n");
		return (0);
	}
	char sing = argv[2][0];
	int f = atoi(argv[1]);
	int s = atoi(argv[3]);
	if (sing == '+')
		printf("%d\n", f + s);
	else if (sing == '-')
		printf("%d\n", f - s);
	else if (sing == '*')
		printf("%d\n", f * s);
	else if (sing == '/')
		printf("%d\n", f / s);
	else if (sing == '%')
		printf("%d\n", f % s);
	return (0);
}
