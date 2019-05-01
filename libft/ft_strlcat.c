/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedashk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 15:00:22 by vnedashk          #+#    #+#             */
/*   Updated: 2018/12/06 15:14:53 by vnedashk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *s1, const char *s2, size_t n)
{
	size_t	res;

	if (ft_strlen(s1) >= n)
		return (ft_strlen((char *)s2) + n);
	res = ft_strlen(s1) + ft_strlen(s2);
	while (*s1 && n--)
		s1++;
	while (n > 1 && *s2)
	{
		*(s1++) = *(s2++);
		n--;
	}
	*s1 = '\0';
	return (res);
}
