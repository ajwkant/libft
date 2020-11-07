/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexanderkant <alexanderkant@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/28 16:01:53 by alexanderka   #+#    #+#                 */
/*   Updated: 2020/11/07 16:11:39 by akant         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *string)
{
	char *dup;
	int i;

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
