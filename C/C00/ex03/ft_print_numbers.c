/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eledelga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 16:32:52 by eledelga          #+#    #+#             */
/*   Updated: 2022/07/10 18:08:42 by eledelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_numbers(void)
{
	int		num;
	char	ascii;

	num = 0;
	while (num <= 9)
	{
		ascii = num + '0';
		write(1, &ascii, 1);
		num ++;
	}
}
