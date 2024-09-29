/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aursuare <aursuare@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 22:52:34 by aursuare          #+#    #+#             */
/*   Updated: 2024/04/10 23:22:33 by aursuare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	n;

	i = 1;
	n = nb;
	if (power < 0)
		return (0);
	else if ((nb == 0 && power == 0) || power == 0)
		return (1);
	else
	{
		while (i < power)
		{
			n *= nb;
			i++;
		}
	}
	return (n);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_power(-2, 3));
	return (0);
}*/
