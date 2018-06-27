/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 10:51:26 by bgonzale          #+#    #+#             */
/*   Updated: 2018/06/24 15:41:22 by bgonzale         ###   ########.fr       */
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
			if ((row == 1 && col == 1) || (row == y && col == 1))
				ft_putchar('A');
			else if ((row == 1 & col == x) || (row == y && col == x))
				ft_putchar('C');
			else if ((row == 1 || col == 1 || row == y || col == x))
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
