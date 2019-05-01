/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_for_input.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedashk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 17:46:42 by vnedashk          #+#    #+#             */
/*   Updated: 2019/04/24 17:46:43 by vnedashk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int					check_for_input(char **map, t_matr *ttr)
{
	int l;
	int x;
	int y;

	l = 1;
	y = ttr->visota[0];
	x = ttr->dlina[0];
	if (map[y][x] == '.')
	{
		while (l < 4)
		{
			if (((y + ttr->visota[l]) < 0) || ((x + ttr->dlina[l]) < 0))
				return (0);
			if (((y + ttr->visota[l]) >= (int)ft_strlen(map[x])) ||
				((x + ttr->dlina[l]) >= (int)ft_strlen(map[x])))
				return (0);
			if (map[y + ttr->visota[l]][x + ttr->dlina[l]] != '.')
				return (0);
			l++;
		}
	}
	else
		return (0);
	save_into_ur_ass(ttr, map);
	return (1);
}
