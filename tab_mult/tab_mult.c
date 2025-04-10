#include <unistd.h>

int ft_atoi(char *num)
{
	int i = 0;
	int y = 0;
	int sign = 1;

	while ((num[i] >= 9 && num[i] <= 13) || num[i] == 32)
		i++;
	if (num[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (num[i] == '+')
		i++;
	while (num[i] >= '0' && num[i] <= '9')
		y = (y * 10) + (num[i++] - 48);
	return (sign * y);
}

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}

void tab(int num)
{
	int count = 1;
	char qanak = 0 ;

	while (count < 10)
	{
		qanak = count + 48;
		write (1, &qanak, 1);
		write (1, " x ", 3);
		ft_putnbr(num);
		write (1, " = ", 3);
		ft_putnbr(count * num);
		write (1, "\n", 1);
		count++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int num = 0;

		if (argv[1][0] == '-')
		{
			write (1, "\n", 1);
			return (0);
		}
		num = ft_atoi(argv[1]);
		tab(num);
	}
	else
		write (1, "\n", 1);
	return (0);
}
