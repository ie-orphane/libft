/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielyatim <ielyatim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 08:41:25 by ielyatim          #+#    #+#             */
/*   Updated: 2024/10/29 12:03:31 by ielyatim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start_lst;
	t_list	*new_lst;

	start_lst = NULL;
	while (lst)
	{
		new_lst = ft_lstnew(f(lst->content));
		if (!new_lst)
		{
			ft_lstclear(&new_lst, del);
			continue ;
		}
		if (!start_lst)
			start_lst = new_lst;
		else
			ft_lstadd_back(&start_lst, new_lst);
		lst = lst->next;
	}
	return (start_lst);
}
