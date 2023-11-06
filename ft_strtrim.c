/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:26:45 by aabouqas          #+#    #+#             */
/*   Updated: 2023/11/05 23:43:34 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	slen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	found(const char *str, const char c)
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

char	*ft_strldub(char *str, size_t len)
{
	size_t	i;
	char	*p;

	i = 0;
	p = malloc(len + 1);
	if (!p)
		return (0);
	while (str[i] && len)
	{
		p[i] = str[i];
		len--;
		i++;
	}
	p[i] = 0;
	return (p);
}

char	*ft_strcpy(char *dest, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	len;

	str = malloc (slen(s1) + 1);
	if (!str)
		return (0);
	ft_strcpy(str, s1);
	while (found(set, *str))
		str++;
	len = slen(str) - 1;
	while (found(set, str[len]))
		len--;
	return (ft_strldub(str, len + 1));
}
