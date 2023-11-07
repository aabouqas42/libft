/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 20:56:46 by aabouqas          #+#    #+#             */
/*   Updated: 2023/11/07 19:56:30 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	word_count(char *str, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (str[i] && str[i] == c)
		i++;
	while (str[i])
	{
		while (str[i] && str[i] != c)
			i++;
		count++;
		while (str[i] && str[i] == c)
			i++;
	}
	return (count);
}

static char	*ft_strdub(char *str, int end)
{
	char	*ptr;
	size_t	i;

	i = 0;
	while (str[i] && i < end)
		i++;
	ptr = malloc(i + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (str[i] && i < end)
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	words;
	char	**splitted;
	char	*str;

	str = (char *)s;
	words = word_count(str, c);
	splitted = malloc ((words + 1) * sizeof(char *));
	if (!splitted)
		return (0);
	i = 0;
	while (i < words)
	{
		while (*str && *str == c)
			str++;
		j = 0;
		while (str[j] && str[j] != c)
			j++;
		splitted[i] = ft_strdub(str, j);
		str += j;
		i++;
	}
	splitted[i] = 0;
	return (splitted);
}
