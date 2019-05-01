/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedashk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 17:31:53 by vnedashk          #+#    #+#             */
/*   Updated: 2018/11/28 17:26:01 by vnedashk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t len)
{
	size_t	n;
	char	*tmp;

	n = 0;
	tmp = (char *)ptr;
	while (n < len)
	{
		tmp[n] = (unsigned char)x;
		n++;
	}
	return (ptr);
}
