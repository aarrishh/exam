#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
	int i = 0;
	int y = 0;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		y = (y * 10) + (str[i] - 48);
		i++;
	}
	return (y);
}

int sum_prime_nums(int num)
{
	int i = 2;
	int x = 2;
	int result = 0;

	while (i <= num)
	{
		while (x < num / 2)
		{
			if (i == 2)
			{
				result += 2;
				i++;
			}
			else if (i % x == 0)
			{
				i++;
			}
			else
			{
				x++;
			}
		}
		x = 2;
		result += i;
		i++;
	}
	return (result);
}

int main(int argc, char **argv)
{
	int i = 1;
	int num = 0;
	int res;

	if (argc == 2)
	{
		num = ft_atoi(argv[i]);
		res = sum_prime_nums(num);
		printf("%d\n", res);
	}
	write (1, "0\n", 2);
	return (res);
}
