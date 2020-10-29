/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexanderkant <alexanderkant@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 16:54:50 by alexanderka   #+#    #+#                 */
/*   Updated: 2020/10/28 15:03:02 by alexanderka   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substr;
    size_t i;
    i = 0;

    substr = malloc(len * sizeof(char));

    while (i < len)
    {
        substr[i] = s[i + start];
        i++;
    }

    return (substr);
}