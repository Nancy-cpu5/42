/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmokh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 12:16:49 by nmokh             #+#    #+#             */
/*   Updated: 2026/10/22 12:16:51 by nmokh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	i;
	int	c;

	i = 1;
	c = 1;
	while (i <= nb)
	{
		c = c * i;
		i++;
	}
	return (c);
}
/*#include<stdio.h>
int main(void)
{
	
	printf("%d\n",ft_iterative_factorial(2));
	return(0);
}*/
