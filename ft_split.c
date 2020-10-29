/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexanderkant <alexanderkant@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/28 17:22:46 by alexanderka   #+#    #+#                 */
/*   Updated: 2020/10/29 15:49:57 by akant         ########   odam.nl         */
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
	return (size);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int	i;
	int j;
	int bool;
	i = 0;
	j = 0;
	bool = 1;
	array = malloc(amount_split(s, c) * sizeof(char *));
	while (s[i])
	{
		if (s[i] != c)
		{
			if (bool)
			{
				array[j] = &s[i];
				j++;
			}
			bool = 0;
		}
		else
		{
			bool = 1;
		}
		i++;
	}
}
