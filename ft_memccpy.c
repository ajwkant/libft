/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: akant <akant@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 17:10:00 by akant         #+#    #+#                 */
<<<<<<< HEAD
/*   Updated: 2021/06/22 11:18:48 by akant         ########   odam.nl         */
=======
/*   Updated: 2021/12/01 17:58:33 by akant         ########   odam.nl         */
>>>>>>> de219fdb9ab550cb33345634f19c2ab8bcbf9622
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		if (((char *)dst)[i] == (char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
