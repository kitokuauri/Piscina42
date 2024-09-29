/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aursuare <aursuare@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:52:34 by aursuare          #+#    #+#             */
/*   Updated: 2024/03/26 16:55:41 by aursuare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	j;
	int	i;
	int	swap;

	i = size - 1;
	j = 0;
	while (j < i)
	{
		swap = tab[j];
		tab[j] = tab[i];
		tab[i] = swap;
		j++;
		i--;
	}
}
