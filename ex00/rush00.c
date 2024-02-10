/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juliensarda <juliensarda@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 10:25:51 by juliensarda       #+#    #+#             */
/*   Updated: 2024/02/10 11:22:00 by juliensarda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush00.h"

void	rush(int x, int y)
{
	int width;
	int height;

	height = 0;
	while (height < y)
	{
		width = 0;
		while (width < x)
		{
			if ((width == 0 && height == 0) || (width == 0 && height == y - 1)
				|| (width == x - 1 && height == 0) || (width == x - 1
					&& height == y - 1))
				ft_putchar('o');
			else if (width == 0 || width == x - 1)
				ft_putchar('|');
			else if (height == 0 || height == x - 1 || height == y - 1)
				ft_putchar('-');
			else
				ft_putchar(' ');
			width++;
		}
		ft_putchar('\n');
		height++;
	}
}