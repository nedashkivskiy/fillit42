/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedashk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 16:22:20 by vnedashk          #+#    #+#             */
/*   Updated: 2019/04/14 16:22:22 by vnedashk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void	prodoljaem(t_matr **ttr)
{
	char	**arr;
	int		size;
	int		mult;

	size = 0;
	while (ttr[size]->symbol != '\0')
		size++;
	arr = create_map(size, 0);
	mult = 0;
	while (backtrack(ttr, arr, 0) == 0)
	{
		mult++;
		mmr_fre(arr, 1488);
		arr = create_map(size, mult);
	}
	mult = -1;
	while (arr[++mult])
		ft_putendl(arr[mult]);
	mmr_fre(arr, mult);
}

int			main(int argc, char **argv)
{
	int		fd;
	int		rd;
	char	buf[1];
	t_matr	**ttr;

	if (argc == 2)
	{
		ERROR(!((fd = open(argv[1], O_RDONLY)) == -1));
		while ((rd = read(fd, buf, 1)))
			;
		ERROR(!(buf[0] != '\n'));
		close(fd);
		ERROR(!((fd = open(argv[1], O_RDONLY)) == -1));
		ttr = input_valid(fd);
		prodoljaem(ttr);
	}
	else
		ft_putendl("usage: ./fillit source_file");
	return (0);
}
