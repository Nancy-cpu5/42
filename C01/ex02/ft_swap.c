/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swao.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmokh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 19:16:01 by nmokh             #+#    #+#             */
/*   Updated: 2026/10/12 19:16:07 by nmokh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *x, int *y)
{
	int	temp;

	temp = *x;
	*x = *y;
	*y = temp;
}
/*#include<stdio.h>
int main(void)
{
	int x = 10;
	int y = 20;
	int *a = &x;
	int *b = &y;
	ft_swap(a, b);
	printf( "x is %d and y is %d ",x, y);
	return (0);
}*/
