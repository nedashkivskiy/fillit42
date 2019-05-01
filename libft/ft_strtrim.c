/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedashk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 19:24:06 by vnedashk          #+#    #+#             */
/*   Updated: 2018/12/14 19:24:09 by vnedashk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	size_t	n;
	size_t	x;
	size_t	c;
	char	*res;

	if (!s)
		return (NULL);
	x = 0;
	c = 0;
	n = ft_strlen(s);
	while (s[x] == ' ' || s[x] == '\n' || s[x] == '\t')
		x++;
	if (x != n)
	{
		while (s[n - 1] == ' ' || s[n - 1] == '\n' || s[n - 1] == '\t')
			n--;
	}
	res = (char *)malloc(sizeof(char) * (n - x + 1));
	if (!res)
		return (NULL);
	while (x < n)
		res[c++] = s[x++];
	res[c] = '\0';
	return (res);
}
