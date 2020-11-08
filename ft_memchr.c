/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: akant <akant@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 17:03:05 by akant         #+#    #+#                 */
/*   Updated: 2020/11/08 17:03:07 by akant         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned int i;

	i = 0;
	while (n--)
	{
		if (*((unsigned char *)str) == (unsigned char)c)
			return ((unsigned *)str);
		str++;
	}
	return (NULL);
}
