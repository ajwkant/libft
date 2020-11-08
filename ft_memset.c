/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: akant <akant@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 17:04:34 by akant         #+#    #+#                 */
/*   Updated: 2020/11/08 17:10:23 by akant         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *string, int a, size_t len)
{
	unsigned int i;

	i = 0;
	while (i < len)
	{
		*(unsigned char *)(string + i) = (unsigned char)a;
		i++;
	}
	return (string);
}
