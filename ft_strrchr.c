/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexanderkant <alexanderkant@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 12:57:22 by alexanderka   #+#    #+#                 */
/*   Updated: 2020/11/03 15:40:38 by alexanderka   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char *save_pointer;
	save_pointer = NULL;

	while (*str)
	{
		if (*str == c)
			save_pointer = (char *)str;
		str++;
	}
	return (save_pointer);
}
