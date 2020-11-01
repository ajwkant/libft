/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: akant <akant@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/01 17:25:33 by akant         #+#    #+#                 */
/*   Updated: 2020/11/01 18:14:40 by akant         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*string;
	int		i;

	i = 0;
	string = calloc(ft_strlen(s), sizeof(char));
	if (!string)
		return (NULL);
	while (s[i])
	{
		*string++ = f(i, s[i]);
		i++;
	}
	return (string);
}
