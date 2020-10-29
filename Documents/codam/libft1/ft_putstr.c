/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstring_fd.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexanderkant <alexanderkant@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 13:03:45 by alexanderka   #+#    #+#                 */
/*   Updated: 2020/10/28 15:01:29 by alexanderka   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    while (*s)
    {
        ft_putchar_fd(*s, fd);
        s++;
    }
}