/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igulmez <igulmez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:25:02 by igulmez           #+#    #+#             */
/*   Updated: 2023/10/31 19:41:18 by igulmez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	rakams;

	rakams = '0';
	while (rakams <= '9')
	{
		write(1, &rakams, 1);
		rakams++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
