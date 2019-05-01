/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedashk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 16:29:11 by vnedashk          #+#    #+#             */
/*   Updated: 2019/01/10 16:29:13 by vnedashk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *s)
{
	int		len;
	char	tmp1;
	int		c;

	len = ft_strlen(s) - 1;
	c = 0;
	while (c < len)
	{
		tmp1 = s[c];
		s[c] = s[len];
		s[len] = tmp1;
		c++;
		len--;
	}
	return (s);
}
