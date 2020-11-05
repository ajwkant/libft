/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexanderkant <alexanderkant@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 08:48:06 by alexanderka   #+#    #+#                 */
/*   Updated: 2020/11/04 17:33:59 by alexanderka   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *temp;
	t_list *node;

	node = *lst;
	while (node)
	{
		temp = node->next;
		write(1, "X", 1);
		del(node->content);
		write(1, "Z", 1);
		free(node);
		write(1, "Y", 1);
		node = temp;
	}
}
