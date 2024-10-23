/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielyatim <ielyatim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:05:25 by ielyatim          #+#    #+#             */
/*   Updated: 2024/10/23 15:28:26 by ielyatim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	index;
	size_t	substr_len;
	char	*str;
	char	*substr;

	str = (char *)big;
	substr = (char *)little;
	substr_len = 0;
	while (substr[substr_len])
		substr_len++;
	if (substr_len == 0)
		return (str);
	index = 0;
	while (str[index] != '\0' && index < len)
	{
		if (ft_strncmp((str + index), substr, substr_len) == 0)
			return (str + index);
		index++;
	}
	return (0);
}
