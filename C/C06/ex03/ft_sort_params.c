/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdecoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 19:12:04 by ialdecoa          #+#    #+#             */
/*   Updated: 2022/07/24 18:59:29 by ialdecoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		ft_putchar(str[c]);
		c++;
	}
}

void	ft_putall(char *argvv)
{
	ft_putstr(argvv);
	ft_putchar('\n');
}

int	ft_strcmp(char *s1, char *s2)
{
	int	c;

	c = 0;
	while ((s1[c] != '\0' || s2[c] != '\0') && s1[c] == s2[c])
		c++;
	return (s1[c] - s2[c]);
}

int	main(int argc, char *argv[])
{
	int		i;
	int		a;
	char	*aux;

	i = 1;
	while (i)
	{
		i = 0;
		a = 0;
		while (++a < argc - 1)
		{
			if (ft_strcmp(argv[a], argv[a + 1]) > 0)
			{
				aux = argv[a];
				argv[a] = argv[a + 1];
				argv[a + 1] = aux;
				i = 1;
			}
		}
	}
	a = 0;
	while (++a < argc)
		ft_putall(argv[a]);
}
