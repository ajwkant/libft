/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexanderkant <alexanderkant@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 14:35:02 by alexanderka   #+#    #+#                 */
/*   Updated: 2020/11/03 15:01:53 by alexanderka   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char test[50] = "This is a test";
	char test1[50] = "abc";
	char test2[50] = "\0sss";

	printf("new string: %s\n", ft_strjoin(test, test1));
	printf("new string: %s\n", ft_strjoin(test, test2));
	printf("new string: %s\n", ft_strjoin(test1, test));
}