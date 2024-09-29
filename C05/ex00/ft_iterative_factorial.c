/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aursuare <aursuare@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 22:13:05 by aursuare          #+#    #+#             */
/*   Updated: 2024/04/10 22:34:05 by aursuare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (nb > 0)
	{
		while (i <= nb)
		{
			result *= i;
			i++;
		}
	}
	else if (nb < 0)
		result = 0;
	return (result);
}
/*
int	main(void)
{
	int	i;

	i = ft_iterative_factorial(-3);
	printf("%d", i);
	return (0);
}
*/
