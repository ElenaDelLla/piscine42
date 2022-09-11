/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eledelga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 09:50:27 by eledelga          #+#    #+#             */
/*   Updated: 2022/07/27 11:33:10 by eledelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*skip_blanks(char *str)
{
	while (*str != '\0' && *str == ' ')
	{
		str++;
	}
	return (str);
}

int	size_base(char *base)
{
	int	size;

	size = 0;
	while (base[size])
	{
		size++;
	}
	return (size);
}

int	char_in_base(int c, char *base)
{
	int	size;
	int	i;

	size = size_base(base);
	i = 0;
	while (i < size && base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	calc_number(char *str, char *base)
{
	int	res;
	int	size;

	res = 0;
	size = size_base(base);
	while (*str != '\0' && (char_in_base(*str, base) != -1))
	{
		res = res * size;
		res = res + char_in_base(*str, base);
		str++;
	}
	return (res);
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
		if (base[i] < 33 || base[i] > 126)
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

int	ft_atoi_base(char *str, char *base)
{
	int	res;
	int	sign;

	sign = 1;
	res = 0;
	if (check_base(base))
	{
		str = skip_blanks(str);
		while (*str != '\0' && (*str == '-' || *str == '+'))
		{
			if (*str == '-')
			{
				sign *= -1;
			}
			str++;
		}
		res = calc_number(str, base);
	}
	return (sign * res);
}

/*int main()
{
    char    baseDecimal[] = "0123456789";
    char    baseOctal[] = "poniguay";
    char    baseBinaria[] = "01";
    char    baseHexa[] = "0123456789ABCDEF";
    char    baseErronea[] = "0123456780";

    printf("%d\n", ft_atoi_base("10", baseDecimal));
    printf("%d\n", ft_atoi_base("on", baseOctal));
    printf("%d\n", ft_atoi_base("1010", baseBinaria));
    printf("%d\n", ft_atoi_base("A", baseHexa));
    printf("%d\n", ft_atoi_base("10", baseErronea));
    return 0;
}*/
