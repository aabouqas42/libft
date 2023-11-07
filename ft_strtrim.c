/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:26:45 by aabouqas          #+#    #+#             */
/*   Updated: 2023/11/07 20:05:04 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	find(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	s;
	size_t	e;
	size_t	i;

	s = 0;
	if (!s1 || !set)
		return (0);
	while (find(set, s1[s]))
		s++;
	if (!s1[s])
		return (ft_strdup(""));
	e = ft_strlen(s1) - 1;
	while (find(set, s1[e]))
		e--;
	str = malloc ((e - s) + 2);
	if (!str)
		return (0);
	i = 0;
	while (s <= e)
		str[i++] = s1[s++];
	str[i] = '\0';
	return (str);
}
