/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexanderkant <alexanderkant@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 15:19:31 by alexanderka   #+#    #+#                 */
/*   Updated: 2020/11/03 15:26:18 by alexanderka   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



int		main(void)
{
	char test[50] = "This is a test";

	printf("Result:	%s\n", ft_strmapi(test, changer(i, 'a')));
}