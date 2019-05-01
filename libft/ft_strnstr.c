/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedashk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 17:44:35 by vnedashk          #+#    #+#             */
/*   Updated: 2018/12/12 17:44:39 by vnedashk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t x;
	size_t n;

	x = 0;
	if (!haystack && !needle)
		return (NULL);
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[x] && len > x)
	{
		n = 0;
		while (haystack[x + n] == needle[n] && ((x + n) < len))
		{
			if (!(needle[n + 1]))
				return ((char *)haystack + x);
			n++;
		}
		x++;
	}
	return (NULL);
}
