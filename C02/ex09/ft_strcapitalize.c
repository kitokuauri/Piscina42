/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aursuare <aursuare@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 18:47:17 by aursuare          #+#    #+#             */
/*   Updated: 2024/03/27 19:54:33 by aursuare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_abc(char a)
{
	return (a >= 'a' && a <= 'z');
}

char	*ft_strcapitalize(char *str)
{
	int	n;

	n = 0;
	while (str[n])
	{
		if (n == 0 && ft_str_abc(str[n]))
		{
			str[n] = str[n] - 32;
		}
		else if (ft_str_abc(str[n]) && str[n - 1] >= 32 && str[n - 1] <= 47)
		{
			str[n] = str[n] - 32;
		}
		else if (ft_str_abc(str[n]) && str[n - 1] >= 58 && str[n - 1] <= 64)
		{
			str[n] = str[n] - 32;
		}
		else if (str[n] >= 'A' && str[n] <= 'Z')
			str[n] = str[n] + 32;
		n++;
	}
	return (str);
}
