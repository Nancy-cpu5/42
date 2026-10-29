/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmokh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 18:09:05 by nmokh             #+#    #+#             */
/*   Updated: 2026/10/16 18:09:07 by nmokh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;
	return (((unsigned char)s1[i]) - ((unsigned char)s2[i]));
}

/*#include<stdio.h>
int main (void)
{
	char *s1;
	char *s2;
	s1="ciao";
	s2="ciaO";
	ft_strcmp(s1,s2);
	printf("%d\n",ft_strcmp(s1,s2));
	return(0);
}*/
