/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: akant <akant@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 13:58:45 by akant         #+#    #+#                 */
<<<<<<< HEAD
/*   Updated: 2021/06/22 11:15:55 by akant         ########   odam.nl         */
=======
/*   Updated: 2021/12/01 17:58:42 by akant         ########   odam.nl         */
>>>>>>> de219fdb9ab550cb33345634f19c2ab8bcbf9622
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	while (n)
	{
		if (*((unsigned char *)str) == (unsigned char)c)
			return ((unsigned *)str);
		str++;
		n--;
	}
	return (NULL);
}
