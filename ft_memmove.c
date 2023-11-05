/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:42:03 by aabouqas          #+#    #+#             */
/*   Updated: 2023/11/05 10:56:38 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*d;
	char	*s;
	size_t	i;

	i = 0;
	d = dest;
	s = (char *) src;
	if (!d || !s)
		return (0);
	if (d > s)
		while (len--)
			d[len] = s[len];
	else
	{
		while (s[i] && len--)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (d);
}
