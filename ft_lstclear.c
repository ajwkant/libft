/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexanderkant <alexanderkant@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 08:48:06 by alexanderka   #+#    #+#                 */
/*   Updated: 2020/11/11 12:53:02 by alexanderka   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *next_node;

	while (*lst)
	{
		next_node = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = next_node;
	}
	lst = NULL;
}
