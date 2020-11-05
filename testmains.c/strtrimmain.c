/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexanderkant <alexanderkant@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 15:41:09 by alexanderka   #+#    #+#                 */
/*   Updated: 2020/11/03 16:00:23 by alexanderka   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char test1[50] = "  x abcx da x e x ";

	printf("Strtrim  : %s\n", ft_strtrim(test1, " xp"));
	printf("Should be: %s\n", "abcx da x e");
}
