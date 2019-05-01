/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedashk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 18:47:33 by vnedashk          #+#    #+#             */
/*   Updated: 2018/12/12 18:47:37 by vnedashk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_chk(size_t res, int k)
{
	if (res >= 9223372036854775807 && k == 1)
		return (-1);
	else if (res >= 9223372036854775807 && k == -1)
		return (0);
	else
		return ((int)res * k);
}

int			ft_atoi(const char *str)
{
	size_t	n;
	size_t	res;
	int		k;

	n = 0;
	k = 1;
	res = 0;
	while (str[n] == 32 || (str[n] > 8 && str[n] < 14))
		n++;
	if (str[n] == '+' || str[n] == '-')
	{
		if (str[n] == '-')
			k = -1;
		n++;
	}
	while (str[n])
	{
		if (str[n] > 57 || str[n] < 48)
			return (res * k);
		else
			res = (res * 10) + str[n] - '0';
		n++;
	}
	return (ft_chk(res, k));
}
