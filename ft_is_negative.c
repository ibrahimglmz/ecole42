/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igulmez <igulmez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:14:16 by ysahin            #+#    #+#             */
/*   Updated: 2023/10/31 21:11:39 by igulmez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb(void)
{
    char x = '0';
    char y = '1';
    char z = '2';
    char comma = ',';

    write(1, &x, 1);
    write(1, &y, 1);
    write(1, &z, 1);
    write(1, &comma, 1);

    while (z < '9')
    {
        z++;

        write(1, &x, 1);
        write(1, &y, 1);
        write(1, &z, 1);
        write(1, &comma, 1);

        while (z >= '9')
        {
            y++;
            z = y;
            z++;
            write(1, &x, 1);
            write(1, &y, 1);
            write(1, &z, 1);
            write(1, &comma, 1);
            break;
        }

        while (y >= '8')
        {
            x++;
            y = x;
            y++;
            z = y;
            z++;
            write(1, &x, 1);
            write(1, &y, 1);
            write(1, &z, 1);
            write(1, &comma, 1);
            break;
        }
    }
}

int main(void)
{
    ft_print_comb();
    return (0);
}
