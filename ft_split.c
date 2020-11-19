/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: akant <akant@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 17:11:49 by akant         #+#    #+#                 */
/*   Updated: 2020/11/18 15:06:26 by alexanderka   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

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
		else
			bool = 1;
		s++;
	}
	if (!size)
		return (1);
	return (size);
}

char	*fill_in(char *array, char *s, char delim)
{
	int i;

	i = 0;
	while (s[i] != delim && s[i] != '\0')
		i++;
	array = ft_calloc(i + 1, sizeof(char));
	if (!array)
		return (NULL);
	i = 0;
	while (s[i] != delim && s[i] != '\0')
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
		else
			bool = 1;
		s++;
	}
	return (0);
}

void	free_array(char **array, int i)
{
	while (i)
	{
		i--;
		free(array[i]);
		if (!i)
		{
			free(array);
			return ;
		}
	}
}

char	**empty_string(char **array)
{
	array[0] = ft_calloc(1, 1);
	if (!array[0])
		return (NULL);
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;
	int		bool;

	if (!s)
		return (NULL);
	bool = 1;
	array = ft_calloc(count_splits((char *)s, c) + 1, sizeof(char *));
	if (!array)
		return (NULL);
	if (*s == '\0')
	{
		if (!empty_string(array))
			free(array);
		else
			return (array);
	}
	i = split_string(array, (char *)s, c);
	free_array(array, i);
	return (array);
}
