#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_putnbr(int nb)
{
	if (nb < 0)
	{
		write (1, "-", 1);
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}

int main(int argc, char **argv)
{
	int res1 = 0;
	int res2 = 0;
	int result = 0;
	char c = 0;

	if (argc == 4)
	{
		c = argv[2][0];
		res1 = atoi(argv[1]);
		res2 = atoi(argv[3]);
		if (c == '+')
			result = res1 + res2;
		else if (c == '-')
			result = res1 - res2;
		else if (c == '*')
			result = res1 * res2;
		else if (c == '/')
			result = res1 / res2;
		ft_putnbr(result);
	}
	write (1, "\n", 1);
	return (0);
}
