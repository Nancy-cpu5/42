/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmokh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 11:12:37 by nmokh             #+#    #+#             */
/*   Updated: 2026/10/19 11:12:39 by nmokh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (to_find[j])
		{
			if (str[j + i] == to_find[j])
				j++;
			else
				break ;
		}
		if (!to_find[j])
			return (str + i);
		i++;
	}
	return (0);
}
/*#include<stdio.h>
int main(void)
{
	char *str= "Iamaneedle00innnnnnn";
	char *to_find="needle";
	printf("%s\n",ft_strstr(str,to_find));
	return(0);
}*/
