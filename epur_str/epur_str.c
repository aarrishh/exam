#include <unistd.h>
#include <stdio.h>
int main(int argc, char **argv)
{
	int j = 0;

	if (argc == 2)
	{
		while ((argv[1][j] >= 9 && argv[1][j] <= 13) || argv[1][j] == 32)
		{
			printf("j = %d\n", j);
			j++;
		}
		while (argv[1][j])
		{
			while (argv[1][j] != '\0' && !((argv[1][j] >= 9 && argv[1][j] <= 13) 
						|| argv[1][j] == 32))
			{
				write (1, &argv[1][j], 1);
				j++;
			}
			while ((argv[1][j] >= 9 && argv[1][j] <= 13) || argv[1][j] == 32)
                               j++;
			if (argv[1][j] != '\0')
				write (1, " ", 1);
		}
	}
	write (1, "\n", 1);			
	return (0);
}
