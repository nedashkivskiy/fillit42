/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedashk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 15:51:40 by vnedashk          #+#    #+#             */
/*   Updated: 2018/12/19 15:51:42 by vnedashk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(const void *content, size_t content_size)
{
	t_list	*list;

	if (!(list = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (!(content))
	{
		content_size = 0;
		list->content = NULL;
	}
	else
	{
		if (!(list->content = (void *)malloc(content_size)))
		{
			free(list);
			return (NULL);
		}
		list->content_size = content_size;
		list->content = ft_memcpy(list->content, content, content_size);
	}
	list->next = NULL;
	return (list);
}
