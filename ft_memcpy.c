/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:41:22 by aabouqas          #+#    #+#             */
/*   Updated: 2023/11/05 21:28:44 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dst;
	char	*source;
	size_t		i;

	dst = (char *)dest;
	source = (char *)src;
	if (!dst && !source)
		return (0);
	i = 0;
	while (i < n)
	{
		dst[i] = source[i];
		i++;
	}
	return (dst);
}
