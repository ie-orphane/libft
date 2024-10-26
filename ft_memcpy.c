/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielyatim <ielyatim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 08:26:06 by ielyatim          #+#    #+#             */
/*   Updated: 2024/10/24 09:12:20 by ielyatim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dstr;
	unsigned char	*srcr;

	if (src != 0 && dst != 0)
	{
		dstr = (unsigned char *)dst;
		srcr = (unsigned char *)src;
		while (n > 0)
		{
			*(dstr++) = *(srcr++);
			n--;
		}
	}
	return (dst);
}
