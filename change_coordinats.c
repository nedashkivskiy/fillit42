/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   change_coordinats.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedashk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 17:14:32 by vnedashk          #+#    #+#             */
/*   Updated: 2019/04/26 17:14:34 by vnedashk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	change_coord(t_matr *tmp)
{
	int p;

	p = 0;
	while (p + 1 <= 3)
	{
		tmp->visota[p + 1] = tmp->visota[p + 1] - tmp->visota[0];
		tmp->dlina[p + 1] = tmp->dlina[p + 1] - tmp->dlina[0];
		p++;
	}
}
