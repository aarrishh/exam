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

int is_prime(int num)
{
	int i = 2;
	while (i <= num / 2)
	{
		if (num % i == 0)
			return -1;
		i++;
	}
	return (1);
}

int sum_prime_nums(int num)
{
	int i = 2;
	int result = 0;

	if (num < 2)
		return 0;
	while (i <= num)
	{
		if (is_prime(i) == 1)
			result += i;
		i++;
	}
	return (result);
}

int main(int argc, char**argv)
{
	// int i = 1;
	int num = 0;
	int res;
	if (argc != 2)
		return 0;
	num = ft_atoi(argv[1]);
	res = sum_prime_nums(num);
	printf("%d\n", res);

	// write (1, "0\n", 2);
	return (0);
}
