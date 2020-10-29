/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexanderkant <alexanderkant@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 17:21:57 by alexanderka   #+#    #+#                 */
/*   Updated: 2020/10/28 15:01:38 by alexanderka   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    int size;
    int i;
    i = 0;
    size = 0;
    char *string;

    while (s1[i] != '\0')
        i++;
    size = i;
    i = 0;

    while (s2[i] != '\0')
        i++;
    size += i;
    i = 0;

    string = malloc(size * sizeof(char));
    if (string == NULL)
        return (NULL);

    while (i < size)
    {
        if (*s1)
            string[i] = *s1++;
        else if (*s2)
            string[i] = *s2++;
        i++;
    }
    return (string);
}