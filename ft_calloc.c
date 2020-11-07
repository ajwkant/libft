/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: akant <akant@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/07 15:47:35 by akant         #+#    #+#                 */
/*   Updated: 2020/11/07 17:44:15 by akant         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*ptr;
	int		i;

	i = 0;
	ptr = malloc(nitems * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nitems * size);
	return (ptr);
}
