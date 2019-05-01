/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedashk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 18:59:33 by vnedashk          #+#    #+#             */
/*   Updated: 2018/12/06 18:59:35 by vnedashk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		n;

	n = 0;
	while (s[n])
		n++;
	if (c == '\0')
		return ((char *)s + n);
	while (n >= 0)
	{
		if (s[n] == (char)c)
			return ((char *)s + n);
		n--;
	}
	return (NULL);
}
