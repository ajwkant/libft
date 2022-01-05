/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexanderkant <alexanderkant@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 11:41:37 by alexanderka   #+#    #+#                 */
/*   Updated: 2020/10/28 15:01:47 by alexanderka   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	unsigned long i;
	unsigned long j;
	unsigned long k;
	unsigned long l;
	i = 0;
	j = 0;
	k = 0;
	l = 0;

	k = ft_strlen(dst);
	l = ft_strlen(src);

	while (dst[i] && i < dstsize - 1)
		i++;

	while (src[j] && i + j < dstsize - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (dstsize)
		dst[i + j] = '\0';
	
	return (k + l);
}