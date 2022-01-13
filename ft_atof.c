/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atof.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: akant <akant@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/13 12:09:22 by akant         #+#    #+#                 */
/*   Updated: 2022/01/13 12:09:38 by akant         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

float	ft_atof(char *str)
{
	int		i;
	float	res;
	float	dec;
	int		neg;

	res = 0;
	dec = 0.1;
	neg = 1;
	i = 0;
	if (str[i] == '-')
		neg = -1;
	if (str[i] == '-')
		i++;
	while (ft_isdigit(str[i]))
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	if (str[i] == '.')
	{
		i++;
		while(ft_isdigit(str[i]))
		{
			res += (str[i] - '0') * dec;
			dec /= 10;
			i++;
		}
	}
	res *= neg;
	return (res);
}
