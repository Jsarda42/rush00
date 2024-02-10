/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush003.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juliensarda <juliensarda@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 11:41:36 by juliensarda       #+#    #+#             */
/*   Updated: 2024/02/10 11:45:14 by juliensarda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush00.h"

void	rush003(int x, int y)
{
	int width;
	int height;

	width = x;
	height = y;
	y = 1;
	while (y <= height)
	{
		x = 1;
		while (x <= width)
		{
			if ((x == 1 && y == 1) || (x == 1 && y == height))
				ft_putchar('A');
			else if (x > 1 && x < width && y > 1 && y < height)
				ft_putchar(' ');
			else if ((x == width && y == 1) || (x == width && y == height))
				ft_putchar('C');
			else
				ft_putchar('B');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}