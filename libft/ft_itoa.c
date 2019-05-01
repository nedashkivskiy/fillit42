/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedashk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 18:28:15 by vnedashk          #+#    #+#             */
/*   Updated: 2018/12/17 18:28:16 by vnedashk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_intlen(unsigned int z)
{
	int t;

	t = 0;
	while (z)
	{
		z = z / 10;
		t++;
	}
	return (t);
}

static void		ft_neg_chk(int n, int *c, unsigned int *z, int *k)
{
	if (n <= 0)
	{
		*c = *c + 1;
		*z = n * -1;
		if (n < 0)
			*k = 1;
	}
}

char			*ft_itoa(int n)
{
	int					k;
	int					c;
	unsigned int		z;
	char				*res;

	c = 1;
	z = n;
	k = 0;
	ft_neg_chk(n, &c, &z, &k);
	c += ft_intlen(z);
	if (!(res = (char *)ft_memalloc(sizeof(char) * c)))
		return (NULL);
	res[c] = '\0';
	c--;
	while (c--)
	{
		res[c] = z % 10 + '0';
		z = z / 10;
	}
	if (k)
		res[0] = '-';
	return (res);
}
