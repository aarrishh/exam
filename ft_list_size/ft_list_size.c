#include "ft_list.h"
int	ft_list_size(t_list *begin_list)
{
	int  count = 0;

	while (begin_list != NULL)
	{
		begin_list = begin_list->next;
		count++;
	}
	return (count);
}

int main()
{
	t_list a1;
	a1.data = "10";
	a1.next = NULL;

	t_list a2;
	a2.data = "20";
	a2.next = NULL;
	a1.next = &a2;

	t_list a3;
	a3.data = "30";
        a3.next = NULL;
        a2.next = &a3;

	printf("qanaky elementi ->> %d\n", ft_list_size(&a1));
}
