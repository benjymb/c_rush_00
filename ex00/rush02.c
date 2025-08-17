/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmalca-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 13:01:12 by bmalca-b          #+#    #+#             */
/*   Updated: 2025/08/17 16:48:36 by bmalca-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	choose_letter(int x, int y, int w, int h)
{
	char	c;

	if (y == 1 && (x == 1 || x == w))
	{
		c = 'A';
	}
	else if (y == h && (x == 1 || x == w))
	{
		c = 'C';
	}
	else if (y == 1 || y == h || x == 1 || x == w)
	{
		c = 'B';
	}
	else
	{
		c = ' ';
	}
	ft_putchar(c);
}

void	rush(int x, int y)
{
	int	to_print_x;
	int	to_print_y;

	to_print_x = 1;
	to_print_y = 1;
	if (x <= 0 || y <= 0)
		return ;
	while (to_print_y <= y)
	{
		while (to_print_x <= x)
		{
			choose_letter(to_print_x, to_print_y, x, y);
			to_print_x++;
		}
		to_print_y++;
		ft_putchar('\n');
		to_print_x = 1;
	}
}
