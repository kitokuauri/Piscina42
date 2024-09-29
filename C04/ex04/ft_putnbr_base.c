/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aursuare <aursuare@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 17:40:08 by aursuare          #+#    #+#             */
/*   Updated: 2024/04/03 20:52:55 by aursuare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_base(char *base)
{
	int	i;

	i = 0;
	if (*base == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (!(base[i] >= 32 && base[i] <= 126))
			return (0);
		if (base[i] == base[i + 1])
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

void	print_base(unsigned int n, char *base, int size)
{
	if (n >= (unsigned int)size)
		print_base(n / size, base, size);
	ft_putchar(base[n % size]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned long	n;
	unsigned int	size;

	n = 0;
	size = 0;
	if (check_base(base))
	{
		while (base[size])
			size++;
		if (nbr < 0)
		{
			ft_putchar('-');
			n = -nbr;
		}
		else
			n = nbr;
		print_base(n, base, size);
	}
}
