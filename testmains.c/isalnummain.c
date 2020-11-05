/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexanderkant <alexanderkant@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 13:42:11 by alexanderka   #+#    #+#                 */
/*   Updated: 2020/11/02 13:55:12 by alexanderka   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main ()
{
	if (ft_isalnum('a'))
		printf("1");
	if (ft_isalnum('1'))
		printf("2");
	if (ft_isalnum(';'))
		printf("3");
	if (ft_isalnum(' '))
		printf("4");
	if (ft_isalnum('@'))
		printf("5");
}