/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexanderkant <alexanderkant@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/28 10:45:44 by alexanderka   #+#    #+#                 */
/*   Updated: 2020/11/06 18:05:33 by alexanderka   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int num;
	int i;

	num = 0;
	i = 0;
	if ((unsigned char)str[i] == '-' || (unsigned char)str[i] == '+'
	|| (unsigned char)str[i] == ' ')
		i++;
	
	while ('0' <= (unsigned char)str[i] && (unsigned char)str[i] <= '9')
	{
		num = num * 10 + ((unsigned char)str[i] - '0');
		i++;
	}
	if (str[0] == '-')
		num *= -1;
	return (num);
}

int main(void)
{
	char *n = "\t\v\f\r\n \f-06050";
	int i1 = atoi(n);
	int i2 = ft_atoi(n);
	
	printf("%d, %d\n", i1, i2);

	if (i1 == i2)
		printf("succes");
	printf("failed");
}