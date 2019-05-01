/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedashk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 17:35:33 by vnedashk          #+#    #+#             */
/*   Updated: 2018/12/14 17:35:35 by vnedashk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char			*res;
	unsigned int	n;
	size_t			x;

	n = 0;
	if (!s)
		return (NULL);
	x = ft_strlen(s);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	while (start < x && len)
	{
		res[n++] = s[start++];
		len--;
	}
	res[n] = '\0';
	return (res);
}
