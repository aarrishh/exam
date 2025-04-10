#include <stdlib.h>

int get_word(char* str)
{
	int i = 0;
	int len = 0;
	int count_words = 0;

	while(str[len])
		len++;
	while(str[i])
	{
		while((str && str[i]) && str[i] == " ")
			i++;
		while((str && str[i]) && str[i] != " ")
			i++;
		if(str[i - 1] == " " && i == len)
			count_words--;
		count_words++;
	}
	return(count_words);
}



char    **ft_split(char *str)
{
	int i = 0;
	int ind = -1;
	char **buffer = 0;
	int count_words = 0;

	count_words = get_word(str);
	*buffer = (char **)malloc((count_words + 1) * sizeof(char *));
	if(!buffer)
		return(NULL);
	while(count_words--)
	{
		buffer[++ind] = (free_func(str, malloc_char(s, &i, &start), start));
		if(buffer[ind])
		{
			while(ind)
				free(buffer[--ind]);
			free(buffer);
		}
	}
	return(buffer);
}

