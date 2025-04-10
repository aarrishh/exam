#include <stdlib.h>
#include <stdio.h>

int     *ft_range(int start, int end)
{
	int *numbers = 0;
	int i = 0;
	int start2 = start;

	if (start < end)
	{
		while (start != end)
		{
			start++;
			i++;
		}
	}
	else if (start == end)
		i = 1;
	else
	{
		while (start != end)
		{
			start--;
			i++;
		}
	}
	numbers = (int *)malloc((i + 1) * sizeof(int));
	i = 0;
	if (start2 < end)
	{
		while (start2 <= end)
		{
			numbers[i] = start2;
			i++;
			start2++;
		}
	}
	else
	{
		while (start2 >= end)
			numbers[i++] = start2--;
	}
	return (numbers);
}
#include <stdio.h>
int main()
{
	int i = 0;
	int* res;
	res = ft_range(-2, 217483647);
	while (i < 7)
	{
		printf("%d\n", res[i]);
		i++;
	}
}
