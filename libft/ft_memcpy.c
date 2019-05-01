/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedashk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 17:31:14 by vnedashk          #+#    #+#             */
/*   Updated: 2018/12/06 15:55:19 by vnedashk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*c;
	unsigned char	*z;

	c = (unsigned char *)dst;
	z = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		c[i] = z[i];
		i++;
	}
	return (dst);
}
