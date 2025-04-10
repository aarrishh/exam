#include <unistd.h>

int main(int argc, char **argv)
{
	int j = 0;

	if (argc == 2)
	{
		while (argv[1][j])
		{
			if (argv[1][j] >= 'A' && argv[1][j] <= 'Z')
			{
				argv[1][j] += 32;
				write (1, "_", 1);
			}
			write (1, &argv[1][j], 1);
			j++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
