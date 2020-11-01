/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: akant <akant@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/01 16:16:09 by akant         #+#    #+#                 */
/*   Updated: 2020/11/01 17:24:32 by akant         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*fill_in(int n, char *string, int digits, int neg)
{
	int i;

	i = 0;
	if (neg == -1)
		string[i] = '-';
	while (n)
	{
		string[digits - i - 1] = n % 10 + '0';
		n /= 10;
		i++;
	}
	return (string);
}

char	*ft_itoa(int n)
{
	int		digits;
	int		num;
	char	*string;
	int		neg;

	digits = 0;
	neg = 1;
	if (n < 0)
	{
		digits++;
		neg = -1;
		n *= neg;
	}
	num = n;
	while (num > 0)
	{
		digits++;
		num /= 10;
	}
	string = ft_calloc(digits, sizeof(char));
	if (!string)
		return (NULL);
	return (fill_in(n, string, digits, neg));
}
