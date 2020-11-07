/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexanderkant <alexanderkant@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 16:11:53 by alexanderka   #+#    #+#                 */
/*   Updated: 2020/11/06 18:04:00 by alexanderka   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		is_this_needle(char *string, char *needle)
{
	while (*string == *needle && *needle)
	{
		string++;
		needle++;
	}
	if (!*needle)
		return (1);
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (!*needle || !len)
		return ((char *)haystack);
	while (*haystack && len)
	{
		if (ft_strlen(needle) > len)
			return (NULL);
		if (*haystack == *needle)
		{
			if (is_this_needle((char *)haystack, (char *)needle))
				return ((char *)haystack);
		}
		haystack++;
		len--;
	}
	return (NULL);
}
