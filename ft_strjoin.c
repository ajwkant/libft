/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: akant <akant@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 17:07:39 by akant         #+#    #+#                 */
/*   Updated: 2020/11/11 15:56:50 by alexanderka   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		total_length;
	char	*string;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	total_length = (int)(ft_strlen(s1) + ft_strlen(s2));
	string = malloc((total_length + 1) * sizeof(char));
	if (string == NULL)
		return (NULL);
	while (i < total_length)
	{
		if (*s1)
			string[i] = *s1++;
		else if (*s2)
			string[i] = *s2++;
		i++;
	}
	string[i] = '\0';
	return (string);
}
