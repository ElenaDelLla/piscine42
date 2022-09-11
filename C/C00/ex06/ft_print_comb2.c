/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eledelga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:16:53 by eledelga          #+#    #+#             */
/*   Updated: 2022/07/17 16:48:37 by eledelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(int valor)
{
	int	valor1;
	int	valor2;

	valor1 = (valor / 10) + '0';
	valor2 = (valor % 10) + '0';
	write(1, &valor1, 1);
	write(1, &valor2, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = -1;
	y = 0;
	while (x++ < 98)
	{
		while (y++ < 99)
		{
			ft_putchar(x);
			write(1, " ", 1);
			ft_putchar(y);
			if (!(y == 99 && x == 98))
			{
				write(1, ", ", 2);
			}
		}
		y = x + 1;
	}
}
/*int	 main(void)
{
	ft_print_comb2();
}*/
