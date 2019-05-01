/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedashk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 16:11:00 by vnedashk          #+#    #+#             */
/*   Updated: 2018/12/17 16:11:07 by vnedashk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_cnt_wrd(const char *s, char c)
{
	int		n;
	int		check;

	check = 0;
	n = 0;
	while (*s)
	{
		if (check == 1 && *s == c)
			check = 0;
		if (check == 0 && *s != c)
		{
			check = 1;
			n++;
		}
		s++;
	}
	return (n);
}

static size_t	ft_len_w(const char *s, char c)
{
	size_t	n;

	n = 0;
	while (*s && *s != c)
	{
		n++;
		s++;
	}
	return (n);
}

char			**ft_strsplit(const char *s, char c)
{
	int		n;
	int		q;
	char	**tmp;

	if (!s)
		return (NULL);
	n = ft_cnt_wrd((const char *)s, c);
	q = 0;
	tmp = (char **)malloc(sizeof(*tmp) * (n + 1));
	if (!tmp)
		return (NULL);
	while (n--)
	{
		while (*s == c && *s)
			s++;
		tmp[q] = ft_strsub((const char *)s, 0, ft_len_w(s, c));
		if (!tmp[q])
			return (NULL);
		q++;
		s = s + ft_len_w(s, c);
	}
	tmp[q] = NULL;
	return (tmp);
}
