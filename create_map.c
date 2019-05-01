/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedashk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 16:16:11 by vnedashk          #+#    #+#             */
/*   Updated: 2019/04/24 16:16:17 by vnedashk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int			shittyfunck(int mult, int size)
{
	int		n;

	n = 0;
	while (n * n < size * 4)
		n++;
	n = n + mult;
	return (n);
}

char				**create_map(int size, int mult)
{
	int		n;
	int		x;
	int		y;
	char	**map;

	n = shittyfunck(mult, size);
	ERROR((map = (char **)ft_memalloc(sizeof(char *) * n + 1)));
	x = -1;
	while (x++ < n - 1)
		ERROR((map[x] = (char *)ft_memalloc(sizeof(char) * n + 1)));
	x = 0;
	while (x < n)
	{
		y = 0;
		while (y < n)
		{
			map[x][y] = '.';
			y++;
		}
		x++;
	}
	map[x] = NULL;
	return (map);
}
