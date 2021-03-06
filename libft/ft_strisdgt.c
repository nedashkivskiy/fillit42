/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisdgt.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedashk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 18:09:46 by vnedashk          #+#    #+#             */
/*   Updated: 2019/01/10 18:09:49 by vnedashk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strisdgt(char *s)
{
	int	c;

	c = 0;
	if (!s[c])
		return (0);
	while (s[c])
	{
		if (!ft_isdigit(s[c++]))
			return (0);
	}
	return (1);
}
