/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielyatim <ielyatim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:49:59 by ielyatim          #+#    #+#             */
/*   Updated: 2024/10/29 12:02:14 by ielyatim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lst_tmp;

	lst_tmp = (*lst);
	while (lst_tmp && lst_tmp->next)
		lst_tmp = lst_tmp->next;
	lst_tmp->next = new;
	new->next = NULL;
}
