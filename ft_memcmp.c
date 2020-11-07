/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexanderkant <alexanderkant@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/28 09:56:02 by alexanderka   #+#    #+#                 */
/*   Updated: 2020/11/06 15:42:38 by alexanderka   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned int i;

	i = 0;
	while (n - i && ((unsigned char*)str1)[i] == ((unsigned char *)str2)[i])
	{
		i++;
		if (i == n)
			return (0);
	}
	return (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i]);
}
