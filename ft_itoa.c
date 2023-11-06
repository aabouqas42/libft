/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:57:51 by aabouqas          #+#    #+#             */
/*   Updated: 2023/11/05 19:01:43 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	negative(int n)
{
	n--;
	return (n < 0);
}

int	intlen(int n)
{
	int	len;
	int	num;

	len = 0;
	num = n;
	if (n == 0)
		return (1);
	if (num < 0)
		num *= (-1);
	while (num)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*scpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

char	*set(int n)
{
	char	*str;

	str = malloc (2);
	if (!str)
		return (0);
	str[0] = '0';
	str[1] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		num;

	num = n;
	if (n == 0)
		return (set(0));
	len = intlen(num);
	if (n < 0)
	{
		len++;
		num *= (-1);
	}
	str = malloc (len + 1);
	if (!str)
		return (0);
	if (n == -2147483648)
		return (scpy(str, "-2147483648"));
	str[len--] = 0;
	while (num)
		str[len--] = (num % 10) + 48 + ((num /= 10) * 0);
	if (n < 0)
		str[0] = '-';
	return (str);
}
