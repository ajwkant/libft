/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexanderkant <alexanderkant@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/28 15:33:51 by alexanderka   #+#    #+#                 */
/*   Updated: 2020/10/28 16:01:17 by alexanderka   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void *ptr;
	int i;
	i = 0;

	ptr = malloc(nitems * size);
	ft_bzero(ptr, size);
	return (ptr);
}