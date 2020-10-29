/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexanderkant <alexanderkant@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/28 09:46:57 by alexanderka   #+#    #+#                 */
/*   Updated: 2020/10/28 15:00:25 by alexanderka   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *str, int c, size_t n)
{
	unsigned int i;
	i = 0;

	while (i < n)
	{
		if (*(unsigned char *)str + i == c)
			return (*(unsigned char *)str + i);
		i++;
	}
	return (NULL);
}