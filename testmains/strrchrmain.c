/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexanderkant <alexanderkant@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 15:35:32 by alexanderka   #+#    #+#                 */
/*   Updated: 2020/11/03 15:40:18 by alexanderka   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char test1[50] = "abcdae";

	printf("strrchr original: %s\n", strrchr(test1, 'c'));
	printf("strrchr ft_strns: %s\n", ft_strrchr(test1, 'c'));
	printf("strrchr original: %s\n", strrchr(test1, 'f'));
	printf("strrchr ft_strns: %s\n", ft_strrchr(test1, 'f'));
	printf("strrchr original: %s\n", strrchr(test1, 'a'));
	printf("strrchr ft_strns: %s\n", ft_strrchr(test1, 'a'));
}
