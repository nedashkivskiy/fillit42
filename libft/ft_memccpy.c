/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedashk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 15:28:08 by vnedashk          #+#    #+#             */
/*   Updated: 2018/12/04 16:59:56 by vnedashk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	x;
	char	*t_dst;
	char	*t_src;
	char	tmp;

	tmp = (unsigned char)c;
	x = 0;
	t_dst = (char *)dst;
	t_src = (char *)src;
	while (x < n)
	{
		t_dst[x] = t_src[x];
		if (t_dst[x] == tmp)
			return (dst + x + 1);
		x++;
	}
	return (NULL);
}
