/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 15:19:14 by eukim             #+#    #+#             */
/*   Updated: 2018/06/24 20:25:18 by bgonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_putchar(char c);

void	rush_helper(int x, int y, int col, int row)
{
	if ((row == 1 && col == 1) || (row == y && col == x))
	{
		if (col > 1 && row > 1)
			ft_putchar('/');
		else if (row > 1)
			ft_putchar('\\');
		else if (col == 1)
			ft_putchar('/');
		else if (col > 1)
			ft_putchar('\\');
	}
	else if ((row == 1 && col == x) || (row == y && col == 1))
		ft_putchar('\\');
	else if (row == 1 || col == 1 || row == y || col == x)
		ft_putchar('*');
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
			rush_helper(x, y, col, row);
			col++;
		}
		col = 1;
		row++;
	}
}
