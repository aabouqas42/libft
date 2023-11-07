/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 22:03:46 by aabouqas          #+#    #+#             */
/*   Updated: 2023/11/07 20:46:27 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define uchar unsigned char

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*cc;

	cc = 0;
	while (*s)
	{
		if ((uchar)*s == (uchar)c)
			cc = (char *)s;
		s++;
	}
	if ((uchar)*s == (uchar)c)
		return ((char *)s);
	return (cc);
}
