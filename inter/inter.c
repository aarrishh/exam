#include <unistd.h>

int main(int argc, char **argv)
{
	int j = 0;
	int i = 0;

	if (argc == 3)
	{
		while (argv[1][i])
		{
			j = 0;
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j])
				{
					int z = i - 1;
					while (z >= 0)
					{
						if (argv[1][i] == argv[1][z])
							break ;
						z--;
					}
					if (z < 0)
						write (1, &argv[1][i], 1);
					break;
				}
				else
					j++;
			}
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
