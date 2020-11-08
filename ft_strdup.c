/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: akant <akant@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 17:06:22 by akant         #+#    #+#                 */
/*   Updated: 2020/11/08 17:06:33 by akant         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *string)
{
	char	*dup;
	int		i;

	i = 0;
	dup = malloc(ft_strlen(string) + 1);
	if (!dup)
		return (NULL);
	while (string[i])
	{
		dup[i] = string[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
