/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: akant <akant@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 17:06:55 by akant         #+#    #+#                 */
/*   Updated: 2020/11/08 17:07:02 by akant         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *restrict dst,
const char *restrict src, size_t dstsize)
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
	while (dst[i])
		i++;
	while (src[j] && i + j + 1 < dstsize)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (dstsize)
		dst[i + j] = '\0';
	if (dstsize < k)
		return (dstsize + l);
	return (k + l);
}
