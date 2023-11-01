/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:38:30 by aabouqas          #+#    #+#             */
/*   Updated: 2023/10/31 21:11:41 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	s;
	int	r;
	int	i;

	s = 1;
	r = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '-')
			s *= -1;
		i++;
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
