/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexanderkant <alexanderkant@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 13:58:10 by alexanderka   #+#    #+#                 */
/*   Updated: 2020/11/02 14:07:14 by alexanderka   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char a[] = {"+123"};
	char b[] = {"-123"};
	char c[] = {"--12a3"};
	char d[] = {"-12-b3"};

	printf("%d\n%d\n%d\n%d\n\n", ft_atoi(a),ft_atoi(b),ft_atoi(c), ft_atoi(d));
	printf("%d\n%d\n%d\n%d\n", atoi(a),atoi(b),atoi(c), atoi(d));
}