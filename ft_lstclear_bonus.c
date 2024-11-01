/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielyatim <ielyatim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:13:48 by ielyatim          #+#    #+#             */
/*   Updated: 2024/10/31 16:19:50 by ielyatim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current_lst;

	if (lst && del)
	{
		current_lst = (*lst);
		while (current_lst)
		{
			del(current_lst->content);
			free(current_lst);
			current_lst = current_lst->next;
		}
		*lst = NULL;
	}
}
