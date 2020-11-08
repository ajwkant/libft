/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: akant <akant@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 17:11:29 by akant         #+#    #+#                 */
/*   Updated: 2020/11/08 17:11:30 by akant         ########   odam.nl         */
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
	if (c == '\0')
		return ((char *)str);
	return (save_pointer);
}
