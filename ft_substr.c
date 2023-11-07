/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 22:31:13 by aabouqas          #+#    #+#             */
/*   Updated: 2023/11/07 15:53:59 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			j;
	size_t			slen;
	char			*str;

	slen = ft_strlen(s);
	j = 0;
	if (start < slen)
		s += start;
	while (s[j] && j < len)
		j++;
	str = malloc (j + 1);
	if (!str)
		return (0);
	i = 0;
	while (s[i] && i < len && start < slen)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
