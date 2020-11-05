/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexanderkant <alexanderkant@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 16:54:50 by alexanderka   #+#    #+#                 */
/*   Updated: 2020/11/03 16:11:47 by alexanderka   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *substr;
	size_t i;

	i = 0;
	substr = calloc(len, sizeof(char));
	if (!substr)
		return (NULL);
	while (i < len && start + i < ft_strlen(s))
	{
		substr[i] = s[i + start];
		i++;
	}
	if (len)
		substr[i] = '\0';
	return (substr);
}
