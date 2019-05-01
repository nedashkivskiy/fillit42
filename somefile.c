/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   somefile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedashk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 06:11:01 by vnedashk          #+#    #+#             */
/*   Updated: 2019/04/29 06:11:04 by vnedashk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void					line_valid(int line_num, char *str)
{
	int				len;
	int				k;

	k = -1;
	len = ft_strlen(str);
	if ((line_num % 5) != 0)
	{
		ERROR(!(len != 4));
		while (str[++k])
			ERROR(!(str[k] != '.' && str[k] != '#'));
	}
	else
		ERROR(!(len));
}

int							checksmth(int fd, char **arr)
{
	int				line_num;
	char			*tmp_buf;

	line_num = -1;
	while (get_next_line(fd, &tmp_buf))
	{
		arr[++line_num] = ft_strdup(tmp_buf);
		line_valid(line_num + 1, arr[line_num]);
		ft_strdel(&tmp_buf);
	}
	return (line_num);
}
