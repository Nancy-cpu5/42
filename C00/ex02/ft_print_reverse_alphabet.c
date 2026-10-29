/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmokh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 19:39:25 by nmokh             #+#    #+#             */
/*   Updated: 2026/10/08 19:39:32 by nmokh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
	{
	char	c;

	c = 'z';
	while (c <= 'z' && c >= 'a')
	{
		write (1, &c, 1);
		c--;
	}
}

/*int	main (void)
{
	ft_print_reverse_alphabet();
}*/
