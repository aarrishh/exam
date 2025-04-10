#include <unistd.h>

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

int main(int argc, char **argv)
{
	int i = 1;

	if (argc > 1)
	{
		while (argv[i])
			i++;
		ft_putnbr(i - 1);
	}
	else
		write (1, "0", 1);
	write (1, "\n", 1);
	return (0);
}
