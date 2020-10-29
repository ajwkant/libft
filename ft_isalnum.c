/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexanderkant <alexanderkant@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/28 11:03:14 by alexanderka   #+#    #+#                 */
/*   Updated: 2020/10/28 14:59:48 by alexanderka   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int c)
{
	if ('a' <= c <= 'z' || 'A' <= c <= 'Z' || '0' <= c <= '9')
		return (c);
	else
		return (0);
}