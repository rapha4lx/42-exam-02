#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int i = 0;
	char *buff;
	while (str[i])
		i++;
	buff = (char*)malloc(sizeof(char) * (i + 1));
	if (!buff)
		return (NULL);
	i = 0;
	while (str[i])
	{
		buff[i] = str[i];
		i++;
	}
	buff[i] = '\0';
	return (buff);
}
