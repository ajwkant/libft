/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: akant <akant@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 17:04:11 by akant         #+#    #+#                 */
/*   Updated: 2020/11/08 17:04:21 by akant         ########   odam.nl         */
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
			((unsigned char *)dst)[n - i - 1] =
			((unsigned char *)src)[n - i - 1];
			i++;
		}
	}
	else
	{
		ft_memcpy(dst, src, n);
	}
	return (dst);
}
