/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexanderkant <alexanderkant@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/28 17:22:46 by alexanderka   #+#    #+#                 */
/*   Updated: 2020/11/05 17:48:56 by akant         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		count_splits(char *s, char c)
{
	int	size;
	int bool;
	size = 0;
	bool = 1;
	while (*s)
	{
		if (*s != c)
		{
			if (bool)
				size++;
			bool = 0;
		}
		if (*s == c)
			bool = 1;
		s++;
	}
	return (size);
}

char	*fill_in(char *array, char *s, char delim)
{
	int i;

	i = 0;
	while (s[i] != delim)
		i++;
	array = ft_calloc(i, sizeof(char));
	if (!array)
		return (NULL);
	i = 0;
	while (s[i] != delim)
	{
		array[i] = s[i];
		i++;
	}
	return (array);
}

int		split_string(char **array, char *s, char c)
{
	int bool;
	int i;

	bool = 1;
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			if (bool)
			{
				array[i] = fill_in(array[i], s, c);
				if (!array[i])
					return (i);
				i++;
			}
			bool = 0;
		}
		else if (*s == c)
			bool = 1;
		s++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;
	int		bool;

	bool = 1;
	array = ft_calloc(count_splits((char *)s, c) + 1, sizeof(char *));
	if (!array)
		return (NULL);
	i = split_string(array, (char *)s, c);
	while (i)
	{
		free(array[i]);
		i--;
		if (!i)
		{
			free(array[i]);
			free(array);
		}
	}
	return (array);
}
