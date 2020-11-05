/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexanderkant <alexanderkant@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 14:20:33 by alexanderka   #+#    #+#                 */
/*   Updated: 2020/11/03 14:24:01 by alexanderka   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char test[50] = "This is a test";
	char test1[50] = "";
	

	printf("String after 'a': %s\n", ft_strchr(test, 'a'));
	printf("String after ' ': %s\n", ft_strchr(test, ' '));
	printf("String after 'a': %s\n", ft_strchr(test1, 'a'));
	printf("String after 'a': %s\n", strchr(test, 'a'));
	printf("String after ' ': %s\n", strchr(test, ' '));
	printf("String after 'a': %s\n", strchr(test1, 'a'));
}
