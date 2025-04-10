#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int cmp(void* data1, void* data2)
{
	if (data1 == data2)
		return(0);
	return (7);
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *tmp;
	t_list *idk;

	tmp = *begin_list;
	idk = *begin_list;
	int count = 1;
	if ((*begin_list == NULL) || (begin_list == NULL))
		return ;
	while (tmp != NULL)
	{
		if ((cmp(tmp->data, data_ref) == 0))
		{
			if (count == 1)
			{
				idk = idk->next;
				tmp->next = NULL;
				*begin_list = idk;
				free(tmp);
				tmp = idk;
			}
			else
			{
				idk->next = tmp->next;
				tmp->next = NULL;
				free(tmp);
				tmp = idk->next;
			}
			count++;
		}
		else
		{
			count++;
			idk = tmp;
			tmp = tmp->next;
		}
	}
}

void	print_list(t_list **begin_list)
{
	t_list *cur = *begin_list;
	while (cur != 0)
	{
		printf("%s\n", (char*)cur->data);
		cur = cur->next;
	}
}

int		main(void)
{
	char straa[] = "String aa";
	t_list *aa = malloc(sizeof(t_list));
	aa->next = 0;
	aa->data = straa;

	char strbb[] = "String bb";
	t_list *bb = malloc(sizeof(t_list));
	bb->next = 0;
	bb->data = strbb;

	char strcc[] = "String cc";
	t_list *cc = malloc(sizeof(t_list));
	cc->next = 0;
	cc->data = strcc;

	char strdd[] = "String dd";
	t_list *dd = malloc(sizeof(t_list));
	dd->next = 0;
	dd->data = strdd;

	aa->next = bb;
	bb->next = cc;
	cc->next = dd;

	t_list **begin_list = &aa;

	print_list(begin_list);
	printf("----------\n");
	ft_list_remove_if(begin_list, straa, strcmp);
	printf("---------------------------\n");

	print_list(begin_list);
}
