/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:21:00 by aabouqas          #+#    #+#             */
/*   Updated: 2023/11/01 18:31:56 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = malloc(count * size);
	while (ptr[i])
	{
		ptr[i] = 0;
		i++;
	}
	return ptr;
}