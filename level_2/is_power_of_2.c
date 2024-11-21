int	is_power_of_2(unsigned int n)
{
	return (n > 0 && (n & (n - 1)) == 0);
}

#include <stdio.h>

int main(void)
{
	unsigned int i = 0;
	while (i <= 100)
	{
		printf("%d\n", is_power_of_2(i));
		i++;
	}
}
