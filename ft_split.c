/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexanderkant <alexanderkant@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/28 17:22:46 by alexanderka   #+#    #+#                 */
/*   Updated: 2020/10/30 16:45:11 by alexanderka   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		amount_split(char *s, char c)
{
	int	size;
	int i;
	int bool;
	size = 0;
	i = 0;
	bool = 1;
	while (s[i])
	{
		if (s[i] != c)
		{
			if (bool)
				size++;
			bool = 0;
		}
		else
		{
			bool = 1;
		}
		i++;
	}
	printf("%d\n", size);
	return (size);
}

int		fill_in(char **array, char *s, int startindex, int size)
{
	*array = ft_substr(s, startindex, size);
	if (!array)
		return (0);
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int i;
	int bool;
	int startindex;
	int size;
	i = 0;
	bool = 1;
	size = 0;
	char x;
	
	int aantal;
	aantal = amount_split((char *)s, c);

	array = ft_calloc(amount_split((char *)s, c) + 1, sizeof(char *));
	if (!array)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			if (bool)
				startindex = i;
			size++;
			bool = 0;
		}
		else
		{
			if (size)
			{
				x = size + '0';
				if (!fill_in(array, (char *)s, startindex, size))
					return (NULL);
				array++;
				size = 0;
			}
			bool = 1;
		}
		i++;
	}
	if (size)
	{
		if (!fill_in(array, (char *)s, startindex, size))
			return (NULL);
		array++;
	}
	return (array - aantal);
}
