/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save_into_ur_ass.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedashk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 18:32:22 by vnedashk          #+#    #+#             */
/*   Updated: 2019/04/24 18:32:24 by vnedashk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void				save_into_ur_ass(t_matr *ttr, char **map)
{
	int l;

	l = 1;
	map[ttr->visota[0]][ttr->dlina[0]] = ttr->symbol;
	while (l < 4)
	{
		map[ttr->visota[0] + ttr->visota[l]]
		[ttr->dlina[0] + ttr->dlina[l]] = ttr->symbol;
		l++;
	}
}
