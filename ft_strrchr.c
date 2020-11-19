/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: akant <akant@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 17:11:29 by akant         #+#    #+#                 */
/*   Updated: 2020/11/18 13:26:44 by alexanderka   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char *save_pointer;

	save_pointer = NULL;
	if (!*str && c == 0)
		return ((char *)str);
	while (*str || *str == (unsigned char)c)
	{
		if (*str == (unsigned char)c)
		{
			if (*str == '\0')
				return ((char *)str);
			save_pointer = (char *)str;
		}
		str++;
	}
	return (save_pointer);
}
