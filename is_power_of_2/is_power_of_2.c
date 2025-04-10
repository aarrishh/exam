int is_power_of_2(unsigned int n)
{
	unsigned int i = 1;

	 while (i <= n)
	 {
		 if (i == n)
			 return (1);
		 i *= 2;
	 }
	 return (0);
}
int	main(void)
{
	printf("%d\n", is_power_of_2(0));
	printf("%d\n", is_power_of_2(1));
	printf("%d\n", is_power_of_2(4));
	printf("%d\n", is_power_of_2(6));
	printf("%d\n", is_power_of_2(8));
	printf("%d\n", is_power_of_2(32));
	printf("%d\n", is_power_of_2(42));
	printf("%d\n", is_power_of_2(67));
	printf("%d\n", is_power_of_2(124));
	printf("%d\n", is_power_of_2(128));
	printf("%d\n", is_power_of_2(256));
	return (0);
}
