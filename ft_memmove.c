/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:42:03 by aabouqas          #+#    #+#             */
/*   Updated: 2023/11/01 21:17:01 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>


void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*dst;
	char	*source;
	char	*temp;
	size_t		i;

	dst = dest;
	source = (char *) src;
	i = 0;
	while (source[i])
	{
		temp[i] = source[i];
		i++;
	}

	return dst;
}

int main() {
    char str[] = "Hello, World!";
    char *src = str + 6;  // Pointing to "World!"
    char *dst = str + 7;  // Overlapping with "World!"

    printf("Original string: %s\n", str);

    ft_memmove(dst, src, 7);

    printf("Modified string: %s\n", str);

    return 0;
}
