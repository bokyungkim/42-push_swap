/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bokim <bokim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 21:14:00 by bokim             #+#    #+#             */
/*   Updated: 2022/02/10 17:39:57 by bokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_range(long long res)
{
	if (res > 2147483647 || res < -2147483648)
		return (-1);
	return (1);
}

int	ft_atoi(const char *str)
{
	long long	result;
	int			sign;

	result = 0;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
			return (-1);
		while (*str >= '0' && *str <= '9')
		{
			result = result * 10 + (*str - '0');
			if (check_range(result * sign) == -1)
				return (-1);
			str++;
		}
	}
	return (result * sign);
}
