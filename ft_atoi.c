/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexanderkant <alexanderkant@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/28 10:45:44 by alexanderka   #+#    #+#                 */
/*   Updated: 2020/10/30 14:47:13 by alexanderka   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	i = 0;

	while ('0' <= *(unsigned char *)str && *(unsigned char *)str <= '9')
	{
		i = i * 10 + (*(unsigned char *)str - '0');
		str++;
	}
	return (i);
}
