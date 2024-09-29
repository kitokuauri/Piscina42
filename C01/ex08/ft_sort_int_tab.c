/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aursuare <aursuare@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:56:44 by aursuare          #+#    #+#             */
/*   Updated: 2024/03/26 19:22:50 by aursuare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	c;
	int	d;
	int	swap;

	c = 0;
	while (c < (size - 1))
	{
		d = 0;
		while (d < size - 1 - c)
		{
			if (tab[d] > tab[d + 1])
			{
				swap = tab[d];
				tab[d] = tab[d + 1];
				tab[d + 1] = swap;
			}
			d++;
		}
		c++;
	}
}
