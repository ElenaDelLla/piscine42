/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eledelga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 12:20:39 by eledelga          #+#    #+#             */
/*   Updated: 2022/07/27 09:48:59 by eledelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	size_base;
	int	nbr_final[100];
	int	i;

	i = 0;
	size_base = 0;
	if (check_base(base))
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			ft_putchar('-');
		}
		while (base[size_base])
			size_base++;
		while (nbr)
		{
			nbr_final[i] = nbr % size_base;
			nbr = nbr / size_base;
			i++;
		}
		while (--i >= 0)
			ft_putchar(base[nbr_final[i]]);
	}
}
/*int main()
{
    char    baseDecimal[] = "0123456789";
    char    baseOctal[] = "poniguay";
    char    baseBinaria[] = "01";
    char    baseHexa[] = "0123456789ABCDEF";
    char    baseErronea[] = "0123456780";

    ft_putnbr_base(10, baseDecimal);
    ft_putchar('\n');
    ft_putnbr_base(10, baseOctal);
    ft_putchar('\n');
    ft_putnbr_base(10, baseBinaria);
    ft_putchar('\n');
    ft_putnbr_base(10, baseHexa);
    ft_putchar('\n');
    ft_putnbr_base(10, baseErronea);
    return 0;
}*/
