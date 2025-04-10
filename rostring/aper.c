#include <unistd.h>
#include <stdio.h>
int main(int argc, char** argv)
{
	int start = 0;
	int end = 0;
	int i = 0;
(void)argv;
	char str[8] = "aaa bbb";
	if (argc == 2)
	{

		// printf("start = %s\n", str);

		while (str[start] && ((str[start] >= 9 && str[start] <= 13) || str[start] == 32))
			start++;
		end = start;
		// printf("start = %d\n", start);
		while (str[end] && !((str[end] >= 9 && str[end] <= 13) || str[end] == 32))
			end++;
		i = end;
		end--;
		// printf("end = %d\n", end);

		while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
				i++;
		// printf("i = %d\n", i);

		while (str[i])
		{
			while (str[i] != '\0' && !((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
			{
				// printf("eee->%c\n",str[i]);
				write (1, &str[i++], 1);
			}
				while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
				i++;
			if (str[i])
				write(1, " ", 1);
			i++;
		}
		while (start <= end)
		{
			write (1, &str[start], 1);
			start++;
		}
	// }
	write (1, "\n", 1);
	return (0);
}
