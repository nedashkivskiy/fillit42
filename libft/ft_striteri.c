/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedashk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 16:43:38 by vnedashk          #+#    #+#             */
/*   Updated: 2018/12/14 16:43:45 by vnedashk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t n;
	size_t x;

	if (s && f)
	{
		n = ft_strlen(s);
		x = 0;
		while (x < n)
		{
			f(x, &s[x]);
			x++;
		}
	}
}
