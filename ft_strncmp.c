/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexanderkant <alexanderkant@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/28 10:34:03 by alexanderka   #+#    #+#                 */
/*   Updated: 2020/10/28 15:02:41 by alexanderka   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t n)
{
	while (*(unsigned char *)str1 && *(unsigned char *)str2 && n)
	{
		str1++;
		str2++;
		n--;
	}
	if (!n)
		return (0);
	return (*(unsigned char *)str1 - *(unsigned char *)str2);
}