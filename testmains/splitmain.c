#include "libft.h"

int		main(void)
{
	char **array;
	char *string = " a bb ccc ";
	int i = 0;
	
	array = ft_split(string, ' ');
	if (!array)
	{
		write(1, "?", 1);
		return (0);
	}
	while (i != 3)
	{
		printf("Array substring:	%s\n", array[i]);
		i++;
	}
}
