/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedashk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 17:39:03 by vnedashk          #+#    #+#             */
/*   Updated: 2018/12/19 17:39:12 by vnedashk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *nl;
	t_list *tl;
	t_list *hl;

	nl = NULL;
	tl = NULL;
	hl = NULL;
	if (!lst || !f)
		return (NULL);
	else
	{
		while (lst)
		{
			nl = f(lst);
			if (!nl)
				return (NULL);
			if (!tl)
				hl = nl;
			else
				tl->next = nl;
			tl = nl;
			lst = lst->next;
		}
	}
	return (hl);
}
