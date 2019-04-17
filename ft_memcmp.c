/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzimmerm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 14:13:10 by lzimmerm          #+#    #+#             */
/*   Updated: 2019/04/01 14:14:08 by lzimmerm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (!n)
		return (0);
	while (n-- && (*((unsigned char *)s1++) == *((unsigned char *)s2++)))
	{
	}
	return (*((unsigned char *)s1 - 1) - *((unsigned char *)s2 - 1));
}
