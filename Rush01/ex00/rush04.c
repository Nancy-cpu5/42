/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbardott <bbardott@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 11:04:24 by bbardott          #+#    #+#             */
/*   Updated: 2026/10/10 18:33:31 by bbardott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_prima(int x)
{
	int	o;

	o = 0;
	while (o < x)
	{
		if (o == 0)
		{
			ft_putchar('A');
		}
		else
		{
			if (o == (x - 1))
			{
				ft_putchar('C');
			}
			else
			{
				ft_putchar('B');
			}
		}
		o++;
	}
	ft_putchar('\n');
}

void	ft_seconda(int x)
{
	int	o;

	o = 0;
	while (o < x)
	{
		if (o == (x - 1))
		{
			ft_putchar('B');
		}
		else
		{
			if (o == 0)
			{
				ft_putchar('B');
			}
			else
			{
				ft_putchar(' ');
			}
		}
		o++;
	}
	ft_putchar('\n');
}

void	ft_terza(int x)
{
	int	o;

	o = 0;
	while (o < x)
	{
		if (o == 0)
		{
			ft_putchar('C');
		}
		else
		{
			if (o == (x - 1))
			{
				ft_putchar('A');
			}
			else
			{
				ft_putchar('B');
			}
		}
		o++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	v;

	v = 0;
	while ((v < y) && x > 0 && y > 0)
	{
		if (v == 0)
		{
			ft_prima(x);
		}
		else
		{
			if (v == (y - 1))
			{
				ft_terza(x);
			}
			else
			{
				ft_seconda(x);
			}
		}
		v++;
	}
}
