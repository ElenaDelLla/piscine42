/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eledelga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:01:04 by eledelga          #+#    #+#             */
/*   Updated: 2022/07/27 19:04:32 by eledelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_atoi(char *str)
{
	int	c;
	int	hay_menos;
	int	num;

	c = 0;
	hay_menos = 0;
	num = 0;
	while (str[c] != '\0')
	{
		if (str[c] == '-')
			hay_menos++;
		else if (str[c] >= '0' && str[c] <= '9')
			num = num * 10 + (str[c] - '0');
		else
		{
			if (hay_menos != 0 && num != 0)
				return (num * (-1 * (hay_menos % 2)));
			else if (hay_menos != 0 && (str[c] != '+' && num == 0))
				break ;
		}
		c++;
	}
	return (0);
}
/*int main(void)
{
    printf("1234: %d\n", ft_atoi("   \t   +----+-+1234ab5"));
    printf("0: %d\n", ft_atoi("      +--\t--+-+1234ab5"));
    printf("0: %d\n", ft_atoi("      +----+-+1\t234ab5"));
    printf("0: %d\n", ft_atoi("      +---s-+-+1234ab5"));
        return(0);
}*/
