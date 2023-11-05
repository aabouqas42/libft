/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 22:31:13 by aabouqas          #+#    #+#             */
/*   Updated: 2023/11/05 13:27:53 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			j;
	size_t			slen;
	char			*str1;
	char			*str2;

	str1 = (char *)s;
	slen = ft_strlen(s);
	j = 0;
	if (start < slen)
		str1 += start;
	while (s[j] && j < len)
		j++;
	str2 = malloc (j + 1);
	if (!str2)
		return (0);
	i = 0;
	while (str1[i] && i < len && start < slen)
	{
		str2[i] = str1[i];
		i++;
	}
	str2[i] = '\0';
	return (str2);
}
