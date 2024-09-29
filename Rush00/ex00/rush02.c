/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylfergu <lylfergu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 14:52:25 by lylfergu          #+#    #+#             */
/*   Updated: 2024/03/24 16:23:17 by lylfergu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_char(int x, int y, int i, int j)
{
	if ((i == 0 && j == 0) || (i == x - 1 && j == 0))
	{
		ft_putchar('A');
	}
	else if ((i == 0 && j == y - 1) || (i == x - 1 && j == y - 1))
	{
		ft_putchar('C');
	}
	else if ((i == 0) || (i == x - 1) || (j == 0) || (j == y - 1))
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	invalid_input(void)
{
	write(1, "Invalid input!\n", 16);
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if ((x < 1) || (y < 1))
	{
		invalid_input();
	}
	else
	{
		while (j < y)
		{
			while (i < x)
			{
				print_char(x, y, i, j);
				i++;
			}
			ft_putchar('\n');
			i = 0;
			j++;
		}
	}
}
