/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexanderkant <alexanderkant@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 11:15:52 by alexanderka   #+#    #+#                 */
/*   Updated: 2020/10/30 16:44:47 by alexanderka   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char *string;
	char *string2;
	// char string3[10];
	// char string4[10];
	unsigned int start;
	size_t len;
	char **array;

	string = " a b cc    sdf sd  d sdf sd fsad f  sdf ds fsd  d fd sd df        d   sdfas ";
	string2 = "abcdef";
	start = 6;
	len = 5;
	// ft_putchar_fd('a', 1);
	// ft_putendl_fd("hello world", 1);
	// printf("%s\n", ft_substr(string, start, len));
	// printf("%s\n", ft_strjoin(string, string2));
	// printf("%lu\n", strlen(string));
	// printf("%lu %s\n", ft_strlcpy(string3, string, 10), string3);
	// ft_strlcpy(string3, string, 10);
	// // printf("%lu\n", ft_strlen(string3));
	// ft_strlcpy(string4, string2, 10);
	// printf("%lu %s\n", ft_strlcat(string3, string, 10), string3);
	// printf("%lu %s\n", strlcat(string4, string, 10), string4);
	// printf("%s\n", ft_strchr(string, 'p'));
	// printf("%s\n", ft_strrchr(string, 'l'));
	// ft_memset(string3, 'a', 3);
	// printf("%s\n", string3);
	// ft_bzero(string, 6);
	// printf("%s\n", string);
	array = ft_split(string, ' ');
	if (!array)
	{
		write(1, "?", 1);
		return (0);
	}
	while (*array)
	{
		printf("Array substring:	%s\n", *array);
		array++;
	}
}
