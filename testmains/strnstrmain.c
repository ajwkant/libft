/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexanderkant <alexanderkant@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 15:31:44 by alexanderka   #+#    #+#                 */
/*   Updated: 2020/11/03 15:34:59 by alexanderka   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char test1[50] = "abcde";
	char test2[50]  = "bc";

	printf("Strnstr original: %s\n", strnstr(test1, test2, 5));
	printf("Strnstr ft_strns: %s\n", ft_strnstr(test1, test2, 5));
	printf("Strnstr original: %s\n", strnstr(test1, test2, 15));
	printf("Strnstr ft_strns: %s\n", ft_strnstr(test1, test2, 15));
	printf("Strnstr original: %s\n", strnstr(test1, test2, 0));
	printf("Strnstr ft_strns: %s\n", ft_strnstr(test1, test2, 0));
}
