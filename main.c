/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexanderkant <alexanderkant@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 09:28:53 by alexanderka   #+#    #+#                 */
/*   Updated: 2020/11/04 17:34:31 by alexanderka   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print(void *c)
{
	char *hoi = (char *)c;

	printf("%c\n", *hoi);
}

void	del(void *delete)
{
	t_list *temp = (t_list *)delete;
	write(1, "A", 1);
	temp->content = NULL;
	write(1, "B", 1);
}

int		main(void)
{
	t_list *a;
	t_list *b;
	t_list *c;

	a = ft_lstnew("a");
	b = ft_lstnew("b");
	ft_lstadd_front(&a, b);
	c = ft_lstnew("c");
	ft_lstadd_front(&b, c);
	ft_lstiter(c, (void *)print);
	printf("cba is what it should be\n");

	a = ft_lstnew("d");
	ft_lstadd_back(&c, a);
	ft_lstiter(c, (void *)print);
	printf("cbad is what it should be\n");
	printf("Actual size: %d, size by lstsize: %d\n", 4, ft_lstsize(c));

	printf("Last should be 'd', it is: ");
	ft_lstiter(ft_lstlast(c), (void *)print);

	ft_lstclear(&c, (void *)del);
}
