/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: akant <akant@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/07 16:12:11 by akant         #+#    #+#                 */
/*   Updated: 2020/11/18 14:22:44 by alexanderka   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*substr;
	size_t		i;

	if (!s)
		return (NULL);
	i = 0;
	if (start > ft_strlen(s) - 1)
		return (ft_calloc(1, 1));
	substr = malloc(len + 1 * sizeof(char));
	if (!substr)
		return (NULL);
	while (i < len && s[i] &&  start + i < ft_strlen(s))
	{
		substr[i] = s[i + start];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
