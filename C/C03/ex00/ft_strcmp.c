/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eledelga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 09:40:05 by eledelga          #+#    #+#             */
/*   Updated: 2022/07/20 10:20:57 by eledelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && (*s1 != '\0' || *s2 != '\0'))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*int	main(void)
{
	char	s1[] = "hol";
	char	s2[] = "hola";

	printf("%d", ft_strcmp(s1, s2));
}*/