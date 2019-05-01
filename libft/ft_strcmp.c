/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedashk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 18:02:49 by vnedashk          #+#    #+#             */
/*   Updated: 2018/12/12 18:02:53 by vnedashk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	size_t n;

	n = 0;
	while (s1[n] && s2[n])
	{
		if (s1[n] != s2[n])
			return ((unsigned char)s1[n] - (unsigned char)s2[n]);
		n++;
	}
	return ((unsigned char)s1[n] - (unsigned char)s2[n]);
}
