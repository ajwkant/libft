/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexanderkant <alexanderkant@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 15:48:42 by alexanderka   #+#    #+#                 */
/*   Updated: 2020/10/28 15:57:43 by alexanderka   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, int nbyte)
{
	ft_memset(s, '\0', nbyte);
}
