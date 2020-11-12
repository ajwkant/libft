/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: akant <akant@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/07 20:03:36 by akant         #+#    #+#                 */
/*   Updated: 2020/11/11 13:06:09 by alexanderka   ########   odam.nl         */
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
			if (count)
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
	int		j;

	i = 0;
	j = 0;
	if (!s1)
		return (NULL);
	size = trimmed_size((char *)s1, (char *)set);
	string = malloc((size + 1) * sizeof(char));
	if (!string)
		return (NULL);
	while (is_in_set((char *)set, s1[i]))
		i++;
	size++;
	while (size - j - 1)
	{
		string[j] = s1[i + j];
		j++;
	}
	string[j] = '\0';
	return (string);
}
