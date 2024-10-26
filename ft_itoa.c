/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielyatim <ielyatim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 21:47:14 by ielyatim          #+#    #+#             */
/*   Updated: 2024/10/26 21:53:46 by ielyatim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(long nbr)
{
	int	size;

	if (nbr == 0)
		return (2);
	size = 0;
	if (nbr < 0)
	{
		size += 1;
		nbr *= -1;
	}
	while (nbr > 0)
	{
		size++;
		nbr /= 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	long	nbr;
	char	*str;
	int		size;
	int		end;

	nbr = (long)n;
	size = ft_size(nbr);
	str = malloc(size);
	end = 0;
	if (nbr == 0)
	{
		end = 2;
		str[0] = '0';
	}
	if (nbr < 0)
	{
		str[0] = '-';
		end = 1;
		nbr *= -1;
	}
	str[size] = '\0';
	while (size > end)
	{
		str[--size] = nbr % 10 + 48;
		nbr /= 10;
	}
	return (str);
}
