/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 12:38:29 by hramirez          #+#    #+#             */
/*   Updated: 2018/02/27 16:33:05 by hramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		new_strindex;
	int		index;
	char	*new_str;

	new_strindex = 0;
	new_str = malloc(sizeof(char) * (len + 1));
	if (new_str == NULL)
		return (NULL);
	while (s[start] && new_strindex < len)
	{
		new_str[new_strindex] = s[start];
		new_strindex++;
		start++;
	}
	new_str[new_strindex] = '\0';
	return (new_str);
}
