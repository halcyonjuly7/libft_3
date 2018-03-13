/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 16:47:39 by hramirez          #+#    #+#             */
/*   Updated: 2018/02/26 14:08:01 by hramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_copy;
	unsigned char	*src_copy;
	int				index;

	dst_copy = (unsigned char *)dst;
	src_copy = (unsigned char *)src;
	index = 0;
	if (src > dst)
	{
		while (index < n)
		{
			dst_copy[index] = src_copy[index];
			index++;
		}
	}
	else
	{
		while (n > 0)
		{
			n--;
			dst_copy[n] = src_copy[n];
		}
	}
	return (dst);
}
