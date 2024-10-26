/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielyatim <ielyatim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 20:20:13 by ielyatim          #+#    #+#             */
/*   Updated: 2024/10/26 21:42:16 by ielyatim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char *str, char c)
{
	int	i;
	int	words_count;

	i = 0;
	words_count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			while (str[i] != '\0' && str[i] != c)
				i++;
			words_count++;
		}
		i++;
	}
	return (words_count);
}

static char	*ft_walloc(char *str, char c, int *i)
{
	int		j;
	char	*dest;

	j = 0;
	while (str[*i + j] != '\0' && str[*i + j] != c)
		j++;
	dest = malloc(j + 1);
	j = 0;
	while (str[*i] != '\0' && str[*i] != c)
	{
		dest[j] = str[*i];
		(*i)++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		k;
	char	**arr;
	char	*str;
	int		str_len;

	str = (char *)s;
	str_len = ft_strlen(str);
	arr = malloc(sizeof(char *) * (ft_count_words(str, c) + 1));
	i = 0;
	k = 0;
	while (i < str_len)
	{
		if (str[i] != c)
		{
			arr[k] = ft_walloc(str, c, &i);
			k++;
		}
		i++;
	}
	arr[k] = NULL;
	return (arr);
}
