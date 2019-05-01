/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedashk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 15:42:18 by vnedashk          #+#    #+#             */
/*   Updated: 2018/12/06 15:54:04 by vnedashk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		n;
	char	*tmp;

	n = 0;
	tmp = (char *)s;
	while (tmp[n])
	{
		if (tmp[n] != (char)c)
			n++;
		else
			return (&tmp[n]);
	}
	if ((char)c == '\0')
		return (&tmp[n]);
	return (NULL);
}
