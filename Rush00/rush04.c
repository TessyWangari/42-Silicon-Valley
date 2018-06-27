/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 21:11:11 by adiorio           #+#    #+#             */
/*   Updated: 2018/06/24 21:11:51 by adiorio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_putchar(char c);

void	rush_help(int x, int y, int col, int row)
{
	if ((row == 1 && col == 1) || (row == y && col == x))
	{
		if (col > 1 && row > 1)
			ft_putchar('A');
		else if (row > 1)
			ft_putchar('C');
		else if (col == 1)
			ft_putchar('A');
		else if (col > 1)
			ft_putchar('C');
	}
	else if ((row == 1 && col == x) || (row == y && col == 1))
		ft_putchar('C');
	else if (row == 1 || col == 1 || row == y || col == x)
		ft_putchar('B');
	else
		ft_putchar(' ');
	if (col == x)
		ft_putchar('\n');
}

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
			rush_help(x, y, col, row);
			col++;
		}
		col = 1;
		row++;
	}
}
