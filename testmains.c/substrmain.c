/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexanderkant <alexanderkant@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 16:00:54 by alexanderka   #+#    #+#                 */
/*   Updated: 2020/11/03 16:11:44 by alexanderka   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char test1[50] = "abcdefg";

	printf("Substring: %s\n", ft_substr(test1, 5, 5));
	printf("Should be: fg\n");
	printf("Substring: %s\n", ft_substr(test1, 0, 0));
	printf("Should be: \n");
	printf("Substring: %s\n", ft_substr(test1, 8, 5));
	printf("Should be: \n");
}
