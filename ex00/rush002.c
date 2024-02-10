/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush002.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juliensarda <juliensarda@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 11:23:21 by juliensarda       #+#    #+#             */
/*   Updated: 2024/02/10 11:39:56 by juliensarda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush00.h"

void	rush002(int x, int y)
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
			if ((x < 2 && y < 2) || (x == width && y == height && y > 1 && x > 1))
				ft_putchar('/');
			else if (x > 1 && x < width && y > 1 && y < height)
				ft_putchar(' ');
			else if ((x == 1 && y == height) || (x == width && y == 1))
				ft_putchar('\\');
			else
				ft_putchar('*');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}