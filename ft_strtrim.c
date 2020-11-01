/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexanderkant <alexanderkant@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 17:56:53 by alexanderka   #+#    #+#                 */
/*   Updated: 2020/10/30 15:27:37 by alexanderka   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		is_in_set(char *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

int		trimmed_size(char *string, char *set)
{
	int	count;
	int	i;
	int j;
	i = 0;
	j = 0;
	count = 0;

	while (string[i])
	{
		if (!is_in_set(set, string[i]))
		{
			count += j;
			j = 0;
			count++;
		}
		else
			j++;
		i++;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*string;
	int		i;
	int		size;
	i = 0;
	
	size = trimmed_size((char *)s1, (char *)set);
	string = malloc(size);
	if (!string)
		return (NULL);
	while (is_in_set((char *)set, s1[i]))
		i++;
	ft_strlcpy(string, s1 + i, size);
	return (string);
}