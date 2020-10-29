/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexanderkant <alexanderkant@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 09:38:37 by alexanderka   #+#    #+#                 */
/*   Updated: 2020/10/28 15:59:47 by alexanderka   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *string, int a, size_t len)
{
	unsigned int i;
	i = 0;

	while (i < len)
	{
		*(unsigned char *)(string + i) = (unsigned char) a;
		i++;
	}

	return (string);
}