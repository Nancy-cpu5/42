/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmokh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 09:37:26 by nmokh             #+#    #+#             */
/*   Updated: 2026/10/13 09:37:30 by nmokh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	l;
	int	m;

	l = *a;
	m = *b;
	*a = l / m;
	*b = l % m;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 100;
	b = 33;
	printf("Before: a = %d, b = %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("After: a = %d, b = %d\n", a, b);
	return (0);
}*/
