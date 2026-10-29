/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmokh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 10:58:31 by nmokh             #+#    #+#             */
/*   Updated: 2026/10/15 10:58:34 by nmokh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'A' && str [i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
/*#include<stdio.h>
int main (void)
{
	char str[]="AAa8957FDG";
	printf("%s\n",ft_strlowcase(str));
	return(0);
}*/
