/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 14:28:16 by hramirez          #+#    #+#             */
/*   Updated: 2018/03/07 12:22:40 by hramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_reverse(char *str, int *len)
{
	int		start;
	int		end;
	char	temp;

	start = 0;
	end = *len - 1;
	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}

static void	convert(int nb, int *index, int is_negative, char *str)
{
	int		rem;
	int		ind;

	ind = *index;
	while (nb != 0)
	{
		rem = nb % 10;
		str[ind++] = (rem * is_negative) + '0';
		nb = nb / 10;
	}
	*index = ind;
}

char		*ft_itoa(int nb)
{
	int		is_negative;
	int		index;
	char	*str;

	is_negative = (nb < 0) ? -1 : 1;
	index = 0;
	str = malloc(sizeof(char) * nb == 0 ? 2 : 12);
	if (str == NULL)
		return (NULL);
	if (nb == 0)
	{
		str[index++] = '0';
		str[index] = '\0';
		return (str);
	}
	convert(nb, &index, is_negative, str);
	if (is_negative == -1)
		str[index++] = '-';
	ft_reverse(str, &index);
	str[index] = '\0';
	return (str);
}
