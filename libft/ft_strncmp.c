/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedashk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 18:23:24 by vnedashk          #+#    #+#             */
/*   Updated: 2018/12/12 18:23:26 by vnedashk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t len)
{
	size_t n;

	n = 0;
	while ((s1[n] || s2[n]) && n < len)
	{
		if (s1[n] == s2[n])
			n++;
		else
			return ((unsigned char)s1[n] - (unsigned char)s2[n]);
	}
	return (0);
}
