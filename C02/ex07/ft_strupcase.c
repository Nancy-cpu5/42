/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmokh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 10:42:44 by nmokh             #+#    #+#             */
/*   Updated: 2026/10/15 10:42:46 by nmokh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'a' && str [i] <= 'z')
			str[i] = str[i] -32;
		i++;
	}
	return (str);
}
/*#include<stdio.h>
int main (void)
{
	char str[]="ll";
	printf("%s\n",ft_strupcase(str));
	return(0);
}*/
