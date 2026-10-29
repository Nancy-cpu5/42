/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmokh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 12:36:30 by nmokh             #+#    #+#             */
/*   Updated: 2026/10/22 12:36:32 by nmokh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	c;

	i = 1;
	c = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i <= power - 1)
	{
		c = nb * c;
		i++;
	}
	return (c);
}
/*#include<stdio.h>
int main(void)
{

	printf("%d\n",ft_iterative_power(465998,1));
	return(0);
}*/
