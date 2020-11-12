/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: akant <akant@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 16:37:10 by akant         #+#    #+#                 */
/*   Updated: 2020/11/09 20:45:14 by alexanderka   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char number;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		ft_putnbr_fd(-n, fd);
	}
	if (n <= 9)
	{
		number = n + '0';
		write(fd, &number, 1);
	}
	if (n > 9)
	{
		number = n % 10 + '0';
		ft_putnbr_fd(n / 10, fd);
		write(fd, &number, 1);
	}
}
