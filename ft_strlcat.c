/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:09:00 by aabouqas          #+#    #+#             */
/*   Updated: 2023/11/05 21:11:17 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

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
	size_t	dlen;

	len = slen(dest);
	dlen = len;
	i = 0;
	while (src[i] && i < dstsize)
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len] = 0;
	return (dlen + slen(src));
}


// int main()
// {
// 	char d[20] ;
// 	d[14] = 'a';
// 	ft_strlcat(d, "lorem ipsum dolor sit amet", 15);
// 	printf("%s\n", d);
// }
