/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: akant <akant@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/07 16:12:11 by akant         #+#    #+#                 */
/*   Updated: 2020/11/19 14:50:34 by alexanderka   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*substr;
	size_t 		size;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s) - 1)
		return (ft_calloc(1, 1));
	size = ft_strlen(s + start) > len ? len : ft_strlen(s + start);
	substr = ft_calloc(size + 1, sizeof(char));
	if (!substr)
		return (NULL);
	ft_memmove(substr, s + start, size);
	return (substr);
}
