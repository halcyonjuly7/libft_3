/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 14:32:02 by hramirez          #+#    #+#             */
/*   Updated: 2018/03/05 13:31:26 by hramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		new_strlen;
	char	*new_str;
	int		str1_index;
	int		str2_index;

	new_strlen = (ft_strlen(s1) + ft_strlen(s2));
	new_str = malloc(sizeof(char) + (new_strlen + 1));
	if (new_str == NULL)
		return (NULL);
	str1_index = 0;
	while (s1[str1_index])
	{
		new_str[str1_index] = s1[str1_index];
		str1_index++;
	}
	str2_index = 0;
	while (s2[str2_index])
	{
		new_str[str1_index + str2_index] = s2[str2_index];
		str2_index++;
	}
	new_str[str1_index + str2_index] = '\0';
	return (new_str);
}
