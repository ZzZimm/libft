/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzimmerm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 13:59:55 by lzimmerm          #+#    #+#             */
/*   Updated: 2019/04/01 17:43:26 by lzimmerm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	unsigned long long	res;
	int					neg;

	res = 0;
	neg = 1;
	while ((*str >= 9 && *str <= 17) || *str == ' ' || *str == '-'
		|| *str == '+')
	{
		str++;
		if ((*(str - 1) == '-' && (neg = -1)) || *(str - 1) == '+')
			break ;
	}
	while (*str >= '0' && *str <= '9')
		res = res * 10 + *str++ - '0';
	if (res > 9223372036854775807)
		return (neg == -1 ? 0 : -1);
	return (neg * res);
}
