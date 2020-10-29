/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexanderkant <alexanderkant@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 17:41:47 by alexanderka   #+#    #+#                 */
/*   Updated: 2020/10/28 15:12:02 by alexanderka   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	unsigned int i;
	i = 0;

	while (src && i < n)
	{
		*(char *)(dst + i) = *(char *)(src + i);
		if (*(char *)dst == *(char *)c)
			return (dst);
		i++;
	}
	return (NULL);
}