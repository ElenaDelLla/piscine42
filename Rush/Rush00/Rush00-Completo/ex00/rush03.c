/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortega- <lmontes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 10:56:59 by aortega-          #+#    #+#             */
/*   Updated: 2022/07/10 19:55:03 by lmontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	f;
	int	c;

	f = 1;
	while (f <= y && x > 0)
	{
		c = 1;
		while (c <= x)
		{
			if ((c == 1 && f == 1) || (c == 1 && f == y))
				ft_putchar('A');
			else if ((c == x && f == 1) || (c == x && f == y))
				ft_putchar('C');
			else if ((c == 1) || (c == x) || (f == 1) || (f == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		f++;
	}
}
