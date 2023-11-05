/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:09:00 by aabouqas          #+#    #+#             */
/*   Updated: 2023/11/05 11:05:45 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	slen(const char *str)
{
	size_t	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

size_t ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;

	len = slen(dest);
	i = 0;
	while (src[i] && dstsize)
	{
		dest[len] = src[i];
		len++;
		i++;
		dstsize--;
	}
	dest[len] = 0;
	return (len + i);
}
