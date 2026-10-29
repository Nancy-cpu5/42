/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmokh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 18:20:51 by nmokh             #+#    #+#             */
/*   Updated: 2026/10/22 18:20:52 by nmokh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_fibonacci(int index)
{
	int	c;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	c = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (c);
}
/*#include<stdio.h>
int main(void)
{
	int n=6;
	printf("%d\n",ft_fibonacci(n));
}*/
