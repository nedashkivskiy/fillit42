/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedashk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 19:03:06 by vnedashk          #+#    #+#             */
/*   Updated: 2019/04/29 01:33:33 by vnedashk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int			last_shit_ft(t_matr *ttr, int y)
{
	ttr->visota[0] = y;
	return (-1);
}

int					backtrack(t_matr **ttr, char **map, int n)
{
	int x;
	int y;

	y = -1;
	while ((size_t)++y < ft_strlen(map[0]))
	{
		x = last_shit_ft(ttr[n], y);
		while ((size_t)++x < ft_strlen(map[0]))
		{
			ttr[n]->dlina[0] = x;
			if (check_for_input(map, ttr[n]))
			{
				RET((ttr[n + 1]->symbol == '\0'), (1));
				RET((backtrack(ttr, map, n + 1)), (1));
				if (!(backtrack(ttr, map, n + 1)))
				{
					del_from_map(ttr, map, n);
					n--;
				}
				n++;
			}
		}
	}
	return (0);
}
