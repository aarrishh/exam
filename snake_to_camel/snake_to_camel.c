#include <unistd.h>

int main(int argc, char **argv)
{
	int j = 0;

	if (argc == 2)
	{
		while (argv[1][j])
		{
			while (argv[1][j] != '_')
			{
				write (1, &argv[1][j], 1);
				j++;
			}
			j++;
			if (argv[1][j] >= 'a' && argv[1][j] <= 'z')
			{
				argv[1][j] -= 32;
				write (1, &argv[1][j], 1);
				j++;
			}
			while (argv[1][j] >= 'a' && argv[1][j] <= 'z')
			{
				write (1, &argv[1][j], 1);
				j++;
			}
		}
	}
	write (1, "\n", 1);
	return (0);
}
