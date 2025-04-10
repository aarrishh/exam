#include <unistd.h>

int main(int argc, char **argv)
{
	int j = 0;
	int i = 0;
	int start = 0;

	if (argc == 3)
	{
		while (argv[1][i])
			i++;
		while (argv[2][j])
		{
			argv[1][i] = argv[2][j];
			i++;
			j++;
		}
		j = 1;
		i = 0;
		write (1, &argv[1][0], 1);
		while (argv[1][j])
		{
			if (argv[1][j] == argv[1][i])
			{
				i++;
				j++;
			}
			else
			{	
				while (argv[1][j] != argv[1][i])
				{
					if (i > start)
						i--;
					else if (i == start)
					{
						write (1, &argv[1][j], 1);
						break;
					}	
				}
				j++;
				i = j - 1;
			}
		}
	}
	write (1, "\n", 1);
	return (0);
}
