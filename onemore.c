/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   onemore.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedashk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 16:52:52 by vnedashk          #+#    #+#             */
/*   Updated: 2019/04/18 16:52:53 by vnedashk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void					check_connections(t_matr *tetr)
{
	int				x;
	int				y;
	int				count;

	x = 0;
	y = 1;
	count = 0;
	while (x <= 3)
	{
		while (y <= 3)
		{
			if ((tetr->dlina[x] == tetr->dlina[y]) &&
				((tetr->visota[x] - tetr->visota[y] == 1) ||
					(tetr->visota[x] - tetr->visota[y] == -1)))
				count++;
			if ((tetr->visota[x] == tetr->visota[y]) &&
				((tetr->dlina[x] - tetr->dlina[y] == 1) ||
					(tetr->dlina[x] - tetr->dlina[y] == -1)))
				count++;
			y++;
		}
		x++;
		y = 1 + x;
	}
	ERROR((count == 4 || count == 3));
}

static t_matr				*save_fig(char **arr, int k)
{
	int				i;
	int				p;
	int				l;
	t_matr			*tmp;

	i = k * 5;
	l = 0;
	tmp = (t_matr *)ft_memalloc(sizeof(t_matr));
	while (l != 4)
	{
		p = 0;
		while (arr[i][p])
		{
			if (arr[i][p] == '#')
			{
				save_coord(tmp, i, p, l);
				l++;
			}
			p++;
		}
		i++;
	}
	check_connections(tmp);
	change_coord(tmp);
	return (tmp);
}

static void					arr_valid(char **arr)
{
	int				n;
	int				hash;
	int				k;

	n = 0;
	k = 0;
	hash = 0;
	while (arr[n])
	{
		while (arr[n][k])
		{
			if (arr[n][k] == '#')
				hash++;
			k++;
		}
		k = 0;
		n++;
		if (!((n + 1) % 5))
		{
			ERROR(((hash == 4)));
			hash = 0;
		}
	}
}

t_matr						**input_valid(int fd)
{
	int				line_num;
	int				k;
	t_matr			**ttr;
	char			**arr;

	arr = (char **)ft_memalloc(sizeof(char *) * 129);
	line_num = checksmth(fd, arr);
	ERROR(!((line_num + 2) % 5));
	ERROR((!(line_num > 128)));
	arr_valid(arr);
	ttr = (t_matr **)ft_memalloc(sizeof(t_matr *) * (line_num + 2) / 5 + 1);
	k = 0;
	while (k != (line_num + 2) / 5)
	{
		ttr[k] = save_fig(arr, k);
		k++;
	}
	ttr[k] = (t_matr *)ft_memalloc(sizeof(t_matr));
	mmr_fre(arr, line_num);
	return (ttr);
}
