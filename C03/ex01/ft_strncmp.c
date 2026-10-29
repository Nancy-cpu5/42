/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmokh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 18:40:22 by nmokh             #+#    #+#             */
/*   Updated: 2026/10/16 18:40:25 by nmokh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && (i < n))
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (((unsigned char)s1[i]) - ((unsigned char)s2[i]));
	}
	if (i == n)
		return (0);
	return (((unsigned char)s1[i]) - ((unsigned char)s2[i]));
}
/*#include<stdio.h>
int main (void)
{
	char *s1;
	char *s2;
	s1="ciao";
	s2="ciaOo";
	printf("%d\n",ft_strncmp(s1,s2,3));
}*/
