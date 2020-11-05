/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexanderkant <alexanderkant@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 15:26:41 by alexanderka   #+#    #+#                 */
/*   Updated: 2020/11/03 15:31:06 by alexanderka   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char test1[50] = "abc";
	char test2[50]  = "";
	char test3[50]  = "abd";
	char test4[50]  = "ab";

	printf("Strncmp original: %d\n", strncmp(test1, test2, 5));
	printf("Strncmp ft_strnc: %d\n", strncmp(test1, test2, 5));
	printf("Strncmp original: %d\n", strncmp(test1, test3, 5));
	printf("Strncmp ft_strnc: %d\n", strncmp(test1, test3, 5));
	printf("Strncmp original: %d\n", strncmp(test1, test4, 5));
	printf("Strncmp ft_strnc: %d\n", strncmp(test1, test4, 5));
	printf("Strncmp original: %d\n", strncmp(test1, test2, 0));
	printf("Strncmp ft_strnc: %d\n", strncmp(test1, test2, 0));
}
