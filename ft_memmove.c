/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexanderkant <alexanderkant@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 17:54:32 by alexanderka   #+#    #+#                 */
/*   Updated: 2020/11/02 18:11:58 by alexanderka   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned int i;
	i = 0;

	if (((unsigned char *)dst)[i] > ((unsigned char *)src)[i])
		ft_memcpy(dst, src, n);
	else
	{
		while (src + i && n - i)
		{
			((unsigned char *)dst)[-i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}