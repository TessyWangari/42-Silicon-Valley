/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 10:47:36 by eukim             #+#    #+#             */
/*   Updated: 2018/06/24 12:08:11 by eukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int row;
	int col;

	row = 1;
	col = 1;
	while (row <= y)
	{
		while (col <= x)
		{
			if ((row == 1 && col == 1) || (row == 1 && col == x))
				ft_putchar('A');
			else if ((row == y && col == 1) || (row == y && col == x))
				ft_putchar('C');
			else if (row == 1 || col == 1 || row == y || col == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			if (col == x)
				ft_putchar('\n');
			col++;
		}
		col = 1;
		row++;
	}
}
