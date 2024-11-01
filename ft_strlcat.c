/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielyatim <ielyatim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 08:36:45 by ielyatim          #+#    #+#             */
/*   Updated: 2024/11/01 09:50:49 by ielyatim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	if (!dst && size == 0)
		return (size);
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	j = 0;
	i = dst_len;
	if (dst_len >= size)
		return (size + src_len);
	while (src[j] != '\0' && j < (size - dst_len - 1))
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (src_len + dst_len);
}
