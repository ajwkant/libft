/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexanderkant <alexanderkant@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/28 10:34:03 by alexanderka   #+#    #+#                 */
/*   Updated: 2020/11/06 17:00:52 by alexanderka   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned int i;

	i = 0;
	while (n - i && ((unsigned char*)str1)[i] == ((unsigned char *)str2)[i]
	&& ((unsigned char *)str2)[i])
	{
		i++;
		if (i == n)
			return (0);
	}
	return (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i]);
}