/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juliensarda <juliensarda@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 10:02:44 by juliensarda       #+#    #+#             */
/*   Updated: 2024/02/10 10:28:02 by juliensarda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* My function ft_putchar to write the char to the terminal
write is :
1. This the file descriptor to tell the standart output we want to write to.
	- 0 = represents the standard input stream
	- 1 = represents the standard output stream
	- 2 =  represents the standard error stream
2. This is the memory adress of the variable
	so the content of the variable
3. This is the number of bytes to write */
void	ft_putchar(char c)
{
	write(1, &c, 1);
}