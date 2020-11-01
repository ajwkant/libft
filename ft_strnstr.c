/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexanderkant <alexanderkant@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 16:11:53 by alexanderka   #+#    #+#                 */
/*   Updated: 2020/10/30 15:24:59 by alexanderka   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		is_this_needle(char *string, char *needle)
{
	while (*string == *needle)
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
	while (*haystack && len)
	{
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