/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexanderkant <alexanderkant@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 17:11:24 by alexanderka   #+#    #+#                 */
/*   Updated: 2020/11/02 17:15:27 by alexanderka   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	int a = +123;
	int b = -123;
	int c = -12;
	int d = -123122312;

	ft_putnbr_fd(a, 1);
	ft_putnbr_fd(b, 1);
	ft_putnbr_fd(c, 1);
	ft_putnbr_fd(d, 1);
}