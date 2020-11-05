/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexanderkant <alexanderkant@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 15:06:42 by alexanderka   #+#    #+#                 */
/*   Updated: 2020/11/03 15:19:11 by alexanderka   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char test[50] = "This is a test";
	char test1[50] = "This is a test";
	char test2[50] = "abc";
	char test3[50] = "abc";
	char test4[50] = "";
	char test5[50] = "";
	char test6[50] = "abc";

	printf("Length: %lu, Dest: %s, dstsize: %d\n", ft_strlcpy(test, test2, 50), test, 50);
	printf("Length: %lu, Dest: %s, dstsize: %d\n", strlcpy(test1, test2, 50), test1, 50);
	printf("Length: %lu, Dest: %s, dstsize: %d\n", ft_strlcpy(test2, test4, 0), test2, 0);
	printf("Length: %lu, Dest: %s, dstsize: %d\n", strlcpy(test3, test4, 0), test3, 0);
	printf("Length: %lu, Dest: %s, dstsize: %d\n", ft_strlcpy(test4, test6, 5), test4, 5);
	printf("Length: %lu, Dest: %s, dstsize: %d\n", strlcpy(test5, test6, 5), test5, 5);
}