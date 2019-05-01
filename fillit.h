/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedashk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 16:13:01 by vnedashk          #+#    #+#             */
/*   Updated: 2019/04/11 16:13:03 by vnedashk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include "libft/libft.h"
# define ERROR(x) if (!x) ft_error(1)
# define RET(x, y) if (x) return (y)

typedef struct		s_matr
{
	int				dlina[4];
	int				visota[4];
	char			symbol;
}					t_matr;

void				ft_error(int status);
t_matr				**input_valid(int fd);
char				**create_map(int size, int mult);
int					backtrack(t_matr **ttr, char **map, int n);
int					check_for_input(char **map, t_matr *ttr);
void				save_into_ur_ass(t_matr *ttr, char **map);
void				del_from_map(t_matr **ttr, char **map, int n);
void				change_coord(t_matr *tmp);
void				save_coord(t_matr *tmp, int i, int p, int l);
void				mmr_fre(char **arr, int n);
int					checksmth(int fd, char **arr);

#endif
