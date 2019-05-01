/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedashk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 18:16:37 by vnedashk          #+#    #+#             */
/*   Updated: 2018/12/04 18:30:14 by vnedashk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			c;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	c = 0;
	if (!n)
		return (0);
	while (c < n)
	{
		if (str1[c] == str2[c])
			c++;
		else
			break ;
	}
	if (c == n)
		c--;
	return (str1[c] - str2[c]);
}
