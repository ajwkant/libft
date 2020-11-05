/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexanderkant <alexanderkant@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 11:56:25 by alexanderka   #+#    #+#                 */
/*   Updated: 2020/11/02 13:41:11 by alexanderka   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	int	a;
	a = 123;
	int	b;
	b = -123;
	int c;
	c = 2147483647;
	int d;
	d = -2147483648;

	printf("%s\n%s\n%s\n%s\n", ft_itoa(a),ft_itoa(b),ft_itoa(c), ft_itoa(d));
}
