/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 14:52:17 by hramirez          #+#    #+#             */
/*   Updated: 2018/03/13 18:41:00 by hramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	i;
	unsigned int	a;
	unsigned int	b;
	char			*str;

	i = 0;
	b = 0;
	if (!s)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (s[i] == '\0')
		return (ft_strcpy(ft_memalloc(sizeof(char) * 2), ""));
	a = ft_strlen(s) - 1;
	while (s[a] == ' ' || s[a] == '\n' || s[a] == '\t')
		a--;
	if (!(str = (char *)malloc(sizeof(char) * (a - i + 2))))
		return (NULL);
	while (b < a - i + 1)
	{
		str[b] = s[i + b];
		b++;
	}
	str[b] = '\0';
	return (str);
}
