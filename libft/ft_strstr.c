/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedashk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 16:50:44 by vnedashk          #+#    #+#             */
/*   Updated: 2018/12/12 16:50:50 by vnedashk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int j;
	int counter;

	counter = 0;
	if (s2[0] == '\0')
		return ((char *)s1);
	while (s1[counter] != '\0')
	{
		j = 0;
		while (s1[counter + j] == s2[j])
		{
			if (s2[j + 1] == '\0')
				return ((char *)s1 + counter);
			j++;
		}
		counter++;
	}
	return (0);
}
