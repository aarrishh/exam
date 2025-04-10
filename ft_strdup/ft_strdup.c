#include <stdlib.h>
char    *ft_strdup(char *src)
{
	int i = 0;
	int len = 0;
	char *buffer;

	while (src[len])
		len++;
	buffer = malloc((len + 1) * sizeof(char));
	if (!buffer)
		return(NULL);
	while (src[i])
	{
		buffer[i] = src[i];
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}