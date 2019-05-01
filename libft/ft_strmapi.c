/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedashk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 17:04:46 by vnedashk          #+#    #+#             */
/*   Updated: 2018/12/14 17:04:48 by vnedashk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t	n;
	size_t	x;
	char	*res;

	if (!s || !f)
		return (NULL);
	n = ft_strlen(s);
	x = 0;
	if (!(res = (char *)malloc(sizeof(char) * (n + 1))))
		return (NULL);
	while (s[x])
	{
		res[x] = f(x, s[x]);
		x++;
	}
	res[x] = '\0';
	return (res);
}
