/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielyatim <ielyatim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:11:04 by ielyatim          #+#    #+#             */
/*   Updated: 2024/10/24 11:26:52 by ielyatim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dstr;
	unsigned char	*srcr;

	if (src != 0 && dst != 0)
	{
		dstr = (unsigned char *)dst;
		srcr = (unsigned char *)src;
		dstr += len - 1;
		srcr += len - 1;
		while (len > 0)
		{
			*(dstr--) = *(srcr--);
			len--;
		}
	}
	return (dst);
}
