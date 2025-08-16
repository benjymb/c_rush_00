/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmalca-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 13:01:12 by bmalca-b          #+#    #+#             */
/*   Updated: 2025/08/16 13:35:20 by bmalca-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"

void	choose_letter(int x, int y, int h, int w)
{
	char c;
	if(x == 1 && (y == 1 || y == w))
	{
		c = 'A';
	}
	else if(x == h && (y == 1 || y == w))
	{
		c = 'C';
	}
	else if (x == 1 || x == h || y == 1 || y == w)
	{	
		c = 'B';
	}
	else
	{
		c = ' ';
	}
	ft_putchar(c);
}

void	rush(int w, int h)
{
	int x, y;
	x = 1;
	y = 1;
	while(x <= h)
	{
		while(y <= w)
		{
			choose_letter(x, y, h, w);
			y++;
		}
		x++;
		ft_putchar('\n');
		y = 1;
	}
}
