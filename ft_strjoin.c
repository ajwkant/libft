/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexanderkant <alexanderkant@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 17:21:57 by alexanderka   #+#    #+#                 */
/*   Updated: 2020/11/03 15:05:56 by alexanderka   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	int i;
	int total_length;
	char *string;

	i = 0;
	total_length = (int)(strlen(s1) + strlen(s2));
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