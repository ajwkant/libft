/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexanderkant <alexanderkant@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/28 16:01:53 by alexanderka   #+#    #+#                 */
/*   Updated: 2020/10/28 16:33:05 by alexanderka   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strdup(const char *string)
{
	char *dup;

	dup = malloc(sizeof(string));
	while (*string)
	{
		*dup = *string;
		dup++;
		string++;
	}
	return (dup);
}