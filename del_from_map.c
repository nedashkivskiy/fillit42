/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_from_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedashk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 18:06:15 by vnedashk          #+#    #+#             */
/*   Updated: 2019/04/25 18:06:19 by vnedashk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	del_from_map(t_matr **ttr, char **map, int n)
{
	int l;

	l = 1;
	map[ttr[n]->visota[0]][ttr[n]->dlina[0]] = '.';
	while (l < 4)
	{
		map[ttr[n]->visota[l] + ttr[n]->visota[0]]
		[ttr[n]->dlina[l] + ttr[n]->dlina[0]] = '.';
		l++;
	}
}
