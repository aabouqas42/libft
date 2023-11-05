/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 19:12:00 by aabouqas          #+#    #+#             */
/*   Updated: 2023/11/05 11:01:41 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t slen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[++i]);
	return (i);
}

char *ft_strdup(const char *s1)
{
	char	*ptr;
	int		i;

	ptr = malloc(slen(s1) + 1);
	i = 0;
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
