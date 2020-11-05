/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexanderkant <alexanderkant@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 14:24:29 by alexanderka   #+#    #+#                 */
/*   Updated: 2020/11/03 14:28:43 by alexanderka   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char test[50] = "This is a test";
	char test1[50] = "";
	char test2[50] = "\0sss";

	printf("Copied string: %s\n", ft_strdup(test));
	printf("Copied string: %s\n", ft_strdup(test2));
	printf("Copied string: %s\n", ft_strdup(test1));
	printf("Copied string: %s\n", strdup(test));
	printf("Copied string: %s\n", strdup(test2));
	printf("Copied string: %s\n", strdup(test1));
}