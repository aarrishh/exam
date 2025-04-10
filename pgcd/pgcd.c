#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int j = 0;
	int num1 = 0;
	int num2 = 0;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		if (num1 >= num2)
		{
			while (j < num2)
			{
				if ((num1 % (num2 - j) == 0) && (num2 % (num2 - j) == 0))
				{
					printf("%d", num2 - j);
					break ;
				}
				j++;
			}
		}
		else if (num1 < num2)
                {
                        while (j <= num1)
			{
				if ((num2 % (num1 - j) == 0) && (num1 % (num1 - j) == 0))
				{
					printf("%d", num1 - j);
					break ;

				}
				j++;
			}
                }
	}
	printf("\n");
	return (0);
}
