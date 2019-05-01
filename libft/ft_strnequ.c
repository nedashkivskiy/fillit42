/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedashk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 15:22:05 by vnedashk          #+#    #+#             */
/*   Updated: 2018/12/17 15:22:06 by vnedashk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(const char *s1, const char *s2, size_t n)
{
	size_t	c;

	if (!s1 || !s2)
		return (0);
	c = ft_strlen(s1);
	if (c != ft_strlen(s2) && (n > c || n > ft_strlen(s2)))
		return (0);
	c = 0;
	while (*s1 && *s2 && c < n)
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
		c++;
	}
	return (1);
}
