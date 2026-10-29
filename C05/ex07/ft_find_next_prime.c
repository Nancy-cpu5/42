/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_next_prime.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmokh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 10:52:57 by nmokh             #+#    #+#             */
/*   Updated: 2026/10/24 10:52:59 by nmokh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb)
{
	int	s;

	s = 2;
	if (nb < 2)
		return (0);
	while (s <= nb / 2)
	{
		if (nb % s == 0)
			return (0);
		s++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	s;

	s = nb;
	if (ft_is_prime(nb) == 1)
		return (nb);
	while (ft_is_prime(s) == 0)
		s++;
	return (s);
}
/*#include<stdio.h>
int main(void)
{
	int nb;
	nb=11;
	printf("%d\n",ft_find_next_prime(nb));
	return(0);
}*/
