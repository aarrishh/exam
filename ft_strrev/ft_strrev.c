#include <stdio.h>
char *ft_strrev(char *str)
{
	int i = 0;
	int len = 0;
	char c;

	while (str[len])
		len++;
	len--;
	while (i <= len / 2)
	{
		c = str[i];
		str[i] = str[len - i];
		str[len - i] = c;
		i++;
	}
	return (str);
}
#include <stdio.h>
int main()
{
	char a[11] = "Vardanchik";
	printf("Vardanchik\n");
	printf("%s\n", ft_strrev(a));
}
