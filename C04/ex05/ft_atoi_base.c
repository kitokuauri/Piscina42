/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aursuare <aursuare@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 20:56:16 by aursuare          #+#    #+#             */
/*   Updated: 2024/04/04 22:52:12 by aursuare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_valid_char(char c)
{
	return ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f')
		|| (c >= 'A' && c <= 'F'));
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
		if (!is_valid_char(base[i]))
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

int	base_value(char c)
{
	if (c >= '0' && c <= '9')
		return (c - 48);
	else if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	else if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (0);
}

void	check_signo(char *str, int *i, int *signo)
{
	while (str[*i] == 32 || (str[*i] >= 9 && str[*i] <= 13))
		(*i)++;
	while (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			*signo *= -1;
		(*i)++;
	}
}

int	ft_atoi_base(char *str, char *base)
{
	int			signo;
	long long	result;
	int			i;
	int			size;

	signo = 1;
	result = 0;
	i = 0;
	size = 0;
	if (!check_base(base))
		return (0);
	check_signo(str, &i, &signo);
	while (base[size])
		size++;
	while (str[i] && is_valid_char(str[i]))
	{
		if (base_value(str[i]) >= size)
			return (0);
		result = result * size + base_value(str[i]);
		i++;
	}
	return (result * signo);
}
