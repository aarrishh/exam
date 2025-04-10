
int max(int* tab, unsigned int len)
{
	int i = 1;
	int max = tab[0];

	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}
#include <stdio.h>

int main()
{
	int a[16] = {1, 2,93, 4, 5, 6, 7};
	printf("%d\n", max(a, 7));
}
