/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexanderkant <alexanderkant@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 17:54:32 by alexanderka   #+#    #+#                 */
/*   Updated: 2020/11/06 13:15:00 by alexanderka   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned int i;
	i = 0;

	if (((unsigned char *)dst) > ((unsigned char *)src))
	{
		while (i < n)
		{
			((unsigned char *)dst)[n - i - 1] = ((unsigned char *)src)[n - i - 1];
			i++;
		}
	}
	else
	{
		ft_memcpy(dst, src, n);
	}
	return (dst);
}
