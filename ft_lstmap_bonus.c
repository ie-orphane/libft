/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielyatim <ielyatim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 08:41:25 by ielyatim          #+#    #+#             */
/*   Updated: 2024/11/02 18:05:32 by ielyatim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start_lst;
	t_list	*new_lst;
	void	*new_content;

	start_lst = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		if (!new_content)
		{
			ft_lstclear(&start_lst, del);
			return (NULL);
		}
		new_lst = ft_lstnew(new_content);
		if (!new_lst)
		{
			del(new_content);
			ft_lstclear(&start_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&start_lst, new_lst);
		lst = lst->next;
	}
	return (start_lst);
}
