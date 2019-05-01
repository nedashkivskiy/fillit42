/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedashk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 17:02:35 by vnedashk          #+#    #+#             */
/*   Updated: 2018/12/04 17:29:31 by vnedashk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*tdst;
	unsigned const char	*tsrc;
	size_t				n;

	tdst = (unsigned char *)dst;
	tsrc = (unsigned const char *)src;
	n = 0;
	if (!src && !dst)
		return (NULL);
	if (tdst < tsrc)
	{
		while (n < len)
		{
			tdst[n] = tsrc[n];
			n++;
		}
	}
	else if (tdst > tsrc)
	{
		while (len--)
			tdst[len] = tsrc[len];
	}
	return (tdst);
}
