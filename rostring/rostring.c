#include <unistd.h>
#include <stdio.h>
int main(int argc, char** argv)
{
	int start = 0;
	int end = 0;
	int i = 0;

	if (argc > 1)
	{
		while (argv[1][start] && ((argv[1][start] >= 9 && argv[1][start] <= 13) || argv[1][start] == 32))
			start++;
		end = start;
		while (argv[1][end] && !((argv[1][end] >= 9 && argv[1][end] <= 13) || argv[1][end] == 32))
			end++;
		i = end;
		end--;
		while (argv[1][i])
		{
			while (argv[1][i] != '\0' && !((argv[1][i] >= 9 && argv[1][i] <= 13) || argv[1][i] == 32))
				write (1, &argv[1][i++], 1);
			while (argv[1][i] && ((argv[1][i] >= 9 && argv[1][i] <= 13) || argv[1][i] == 32))
				i++;
			if (argv[1][i])
				write(1, " ", 1);
		}
		write(1, " ", 1);
		while (start <= end)
		{
			write (1, &argv[1][start], 1);
			start++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
