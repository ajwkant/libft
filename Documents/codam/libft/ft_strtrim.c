/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexanderkant <alexanderkant@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 17:56:53 by alexanderka   #+#    #+#                 */
/*   Updated: 2020/10/28 17:07:38 by alexanderka   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		is_in_set(char const *set, char c)
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

	while (s1[i])
	{
		if (!is_in_set(set, s1[i]))
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
	
	size = trimmed_size(s1, set);
	string = malloc(size);
	while (is_in_set(set, s1[i]))
		i++;
	strcpy(string, s1 + i, size);
	return (string);
}