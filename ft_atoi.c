/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:38:30 by aabouqas          #+#    #+#             */
/*   Updated: 2023/11/07 17:06:17 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	white_spaces(char c)
{
	return ((c >= 9 && c <= 13) || (c == 32));
}

int	ft_atoi(const char *str)
{
	int	s;
	int	r;

	s = 1;
	r = 0;
	while (white_spaces(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			s = -1;
		str++;
	}
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			r = r * 10 + (*str - 48);
		else
			break ;
		str++;
	}
	return (r * s);
}
