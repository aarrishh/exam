#include <stdlib.h>
#include <stdio.h>

char *ft_strdup(char* str)
{
	int i = 0;
	char *buffer = 0;

	while (str[i])
		i++;
	buffer = (char *)malloc(i * sizeof(char));
	if (!buffer)
		return(NULL);
	i = 0;
	while (str[i])
	{
		buffer[i] = str[i];
		i++;
	}
	buffer[i] = '\0';
	return(buffer);
}

char *ft_itoa(int nbr)
{
	int count = 1;
	int num = nbr;
	char *str = NULL;

	if (nbr == 0)
		return(ft_strdup("0"));
	if (nbr == -2147483648)
		return(ft_strdup("-2147483648"));
	if (nbr < 0)
	{
		nbr = -nbr;
		count++;
	}
	while (nbr > 9)
	{
			nbr = nbr / 10;
			count++;
	}
	str = (char *)malloc((count + 1) * sizeof(char));
	if (!str)
		return(NULL);
	str[count] = '\0';
	count--;
	if (num < 0)
	{
		num = -num;
		str[0] = '-';
	}
	while (num > 0)
	{
		nbr = num;
		if (num > 9)
			num = (num % 10);
		str[count] = num + 48;
		num = nbr / 10;
		count--;
	}
	return(str);
}
int main()
{
	printf("%s\n", ft_itoa(-2147483648));
}
