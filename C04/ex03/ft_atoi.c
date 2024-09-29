/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aursuare <aursuare@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 19:39:36 by aursuare          #+#    #+#             */
/*   Updated: 2024/04/02 20:48:44 by aursuare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_num(char d)
{
	return (d >= '0' && d <= '9');
}

int	ft_atoi(char *str)
{
	int	signo;
	int	result;
	int	i;

	signo = 1;
	result = 0;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signo *= -1;
		i++;
	}
	while (is_num(str[i]))
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	return (result * signo);
}
