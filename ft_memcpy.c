/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:41:22 by aabouqas          #+#    #+#             */
/*   Updated: 2023/11/01 18:10:55 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dst;
	char	*source;
	int		i;

	dst = (char *) dest;
	source = (char *) src;
	i = 0;
	while (source[i] && n)
	{
		dst[i] = source[i];
		i++;
		n--;
	}
	dst[i] = '\0';
	return (dst);
}
