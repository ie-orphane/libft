/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielyatim <ielyatim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 09:58:54 by ielyatim          #+#    #+#             */
/*   Updated: 2024/10/25 21:20:27 by ielyatim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_instr(const char c, const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	str_size;
	char	*str;

	str_size = 0;
	i = 0;
	while (s1[i] && ft_instr(s1[i], set) == 1)
		i++;
	while (s1[i + str_size] && ft_instr(s1[i + str_size], set) == 0)
		str_size++;
	str = malloc(str_size + 1);
	if (str)
	{
		j = 0;
		while (j < str_size)
			str[j++] = s1[i++];
		str[j] = '\0';
	}
	return (str);
}
