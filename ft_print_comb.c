/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igulmez <igulmez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:14:16 by ysahin            #+#    #+#             */
/*   Updated: 2023/10/31 23:05:14 by igulmez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	x;
	x	=	'0';
	char	y;
	y	= '1';
	char	z;
	z	=	'2';
	char	comma;
	comma	=	','; 
	write(1, &x, 1);
	write(1, &y, 1);
	while (z <= '9')
	{
		write(1, &z, 1);
		write(1, &comma, 1);
		z++;
		if (z > '9')
		{
			y++;
			z = y + 1;
		}
		if (y > '8')
		{
			x++;
			y = x + 1;
			z = y + 1;
		}
	}
}
