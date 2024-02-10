/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush004.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juliensarda <juliensarda@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 11:47:07 by juliensarda       #+#    #+#             */
/*   Updated: 2024/02/10 11:49:34 by juliensarda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush00.h"

void	rush004(int x, int y)
{
	int w;
	int h;

	w = x;
	h = y;
	y = 1;
	while (y <= h)
	{
		x = 1;
		while (x <= w)
		{
			if ((x < 2 && y < 2) || (x == w && y == h && y > 1 && x > 1))
				ft_putchar('A');
			else if (x > 1 && x < w && y > 1 && y < h)
				ft_putchar(' ');
			else if ((x == 1 && y == h) || (x == w && y == 1))
				ft_putchar('C');
			else
				ft_putchar('B');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}