/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedashk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 17:30:24 by vnedashk          #+#    #+#             */
/*   Updated: 2018/12/04 17:55:24 by vnedashk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*x;
	char	y;
	size_t	i;

	x = (char *)s;
	y = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (x[i] != y)
			i++;
		else
			return (&x[i]);
	}
	return (NULL);
}
