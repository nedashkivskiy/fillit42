/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedashk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 16:55:38 by vnedashk          #+#    #+#             */
/*   Updated: 2019/01/26 16:55:41 by vnedashk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	sohr_ost(char *buf, t_list *rst, int j)
{
	char	*str;
	int		len;

	if (rst->content)
	{
		str = rst->content;
		len = ft_strlen(str);
		rst->content = (char *)ft_memalloc(sizeof(char) * len + j);
		ft_strcpy(rst->content, str);
		ft_strncpy(rst->content + len, buf, j - 1);
		ft_strdel(&str);
	}
	else
	{
		rst->content = (char *)ft_memalloc(sizeof(char) * j);
		ft_strcpy(rst->content, buf);
	}
}

static	int		delaem_vivod(char *str, t_list *nlst, int n, char **line)
{
	char	*ayt;
	int		len;

	if (nlst->content)
	{
		len = ft_strlen(nlst->content);
		ayt = (char *)ft_memalloc(sizeof(char) * len + n + 1);
		ft_strcpy(ayt, nlst->content);
		ft_strncpy(ayt + len, str, n);
	}
	else
	{
		MEMERR((ayt = (char *)ft_memalloc(sizeof(char) * (n + 1))));
		ft_strncpy(ayt, str, n);
	}
	*line = ayt;
	if (nlst->content)
		ft_memdel(&nlst->content);
	if (*(str + n + 1))
	{
		len = ft_strlen(str);
		MEMERR((nlst->content = (char *)ft_memalloc(sizeof(char) * len - n)));
		ft_strncpy(nlst->content, &str[n + 1], len - n - 1);
	}
	return (1);
}

static	int		read_in_list(t_list *rst, char **line, int fd)
{
	char	buf_read[BUFF_SIZE + 1];
	int		n;
	int		size;

	n = -1;
	ft_bzero(buf_read, BUFF_SIZE + 1);
	if (!(size = read(fd, buf_read, BUFF_SIZE)) && !(rst->content))
		return (0);
	while ((++n != (BUFF_SIZE + 1)) && size)
	{
		if (!buf_read[n])
		{
			sohr_ost(buf_read, rst, size + 1);
			ft_bzero(buf_read, BUFF_SIZE + 1);
			size = read(fd, buf_read, BUFF_SIZE);
			n = -1;
		}
		if (buf_read[n] == '\n')
			return (delaem_vivod(buf_read, rst, n, line));
	}
	*line = rst->content;
	rst->content = NULL;
	return (1);
}

static	int		retfd(t_list *cst, char **line, int fd)
{
	int		pos;
	char	*result;
	char	*data;
	int		len;

	data = cst->content;
	pos = 0;
	while (data && data[pos] && data[pos] != '\n')
		pos++;
	if (!data || !data[pos])
		return (read_in_list(cst, line, fd));
	MEMERR((result = (char *)ft_memalloc(sizeof(char) * (pos + 1))));
	ft_strncpy(result, data, pos);
	*line = result;
	len = ft_strlen(data);
	MEMERR((result = (char *)ft_memalloc(sizeof(char) * (len - pos))));
	ft_strncpy(result, data + pos + 1, (len - pos - 1));
	ft_memdel(&cst->content);
	if (*result)
		cst->content = result;
	else
		ft_strdel(&result);
	return (1);
}

int				get_next_line(const int fd, char **line)
{
	t_list			*rab;
	static t_list	*stat = NULL;

	if (!line || BUFF_SIZE < 0 || (read(fd, 0, 0)) < 0)
		return (-1);
	if (!stat)
		stat = ft_lstnew("\0", fd);
	rab = stat;
	while (rab)
	{
		if (rab->content_size == (size_t)fd)
			break ;
		rab = rab->next;
	}
	if (!rab)
	{
		ft_lstadd(&stat, ft_lstnew("\0", fd));
		rab = stat;
	}
	*line = NULL;
	return (retfd(rab, line, fd));
}
