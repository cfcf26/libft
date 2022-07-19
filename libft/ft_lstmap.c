/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekwak <ekwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 11:41:59 by ekwak             #+#    #+#             */
/*   Updated: 2022/07/18 20:42:22 by ekwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newcontent;
	t_list	*newlst;

	newlst = NULL;
	while (lst != NULL)
	{
		newcontent = ft_lstnew(f(lst->content));
		if (newcontent == NULL)
		{
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, newcontent);
		lst = lst->next;
	}
	newcontent = NULL;
	return (newlst);
}
