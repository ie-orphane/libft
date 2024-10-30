/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielyatim <ielyatim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:11:04 by ielyatim          #+#    #+#             */
/*   Updated: 2024/10/30 11:20:47 by ielyatim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_tmp;	
	unsigned char	*src_tmp;

	if (!dst && !src)
		return (NULL);
	dst_tmp = (unsigned char *)dst;
	src_tmp = (unsigned char *)src;
	if (dst_tmp > src_tmp)
	{
		dst_tmp += len - 1;
		src_tmp += len - 1;
		while (len-- > 0)
			*(dst_tmp--) = *(src_tmp--);
	}
	else
	{
		while (len-- > 0)
			*(dst_tmp++) = *(src_tmp++);
	}
	return (dst);
}
