/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexanderkant <alexanderkant@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 09:38:37 by alexanderka   #+#    #+#                 */
/*   Updated: 2020/11/07 20:17:57 by akant         ########   odam.nl         */
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
