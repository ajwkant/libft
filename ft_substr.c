/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: akant <akant@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/07 16:12:11 by akant         #+#    #+#                 */
/*   Updated: 2020/11/07 17:55:01 by akant         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*substr;
	size_t		i;
	char		*temp;

	if (!s)
		return (NULL);
	i = 0;
	temp = calloc(1, 1);
	if (start >= ft_strlen(s) - 1)
		return (temp);
	substr = malloc(len + 1 * sizeof(char));
	if (!substr)
		return (NULL);
	while (i < len && s[i])
	{
		substr[i] = s[i + start];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
