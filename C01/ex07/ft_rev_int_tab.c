/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmokh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 21:44:32 by nmokh             #+#    #+#             */
/*   Updated: 2026/10/13 21:44:41 by nmokh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}
/*#include<stdio.h>
int main(void)
{
	int tab[]={1,2,5,4,5};
	ft_rev_int_tab( tab ,5);
	for ( int i=0; i<5;i++)
		printf( "%d",tab[i]);
	return(0);

}*/
