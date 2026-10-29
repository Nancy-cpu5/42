/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmokh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 08:57:42 by nmokh             #+#    #+#             */
/*   Updated: 2026/10/13 08:57:49 by nmokh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>
#include<math.h>*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int main(void)
{
	int a;
	a=43;
	int b;
	b=4;
	int div;
	int mod;
	ft_div_mod(a, b, &div, &mod);
	printf("the quotient is %d",div);
	printf(" \n the remainder is %d",mod);
	return (0);
}*/
