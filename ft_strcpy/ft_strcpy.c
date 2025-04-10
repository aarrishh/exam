char *ft_strcpy(char *s1, char *s2)
{
	int i = 0;

	if (!s1 || !s2)
		return (0);
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return(s1);
}

#include <stdio.h>
int main()
{
	printf(" hesa  %s\n", ft_strcpy("AAvvvvvvvvv", "Vardanchik"));
}
