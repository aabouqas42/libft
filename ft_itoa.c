/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:57:51 by aabouqas          #+#    #+#             */
/*   Updated: 2023/11/05 16:55:26 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	negative(int n)
{
	n--;
	return (n < 0);
}

int	intlen(int	n)
{
	int			len;
	unsigned	num;

	len = 0;
	num = n;
	if (negative(n))
		n *= (-1);
	while (num)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*str;
	char			*nums;
	int				i;
	unsigned	num;

	nums = "0123456789";
	num = n;
	i = 0;
	if (n < 0)
	{
		num *= (-1);
		i++;
	}
	i = intlen(num);
	str = malloc (i + 1);
	str[i] = 0;
	//printf("len %d\n", i);
	i--;

	while (num)
	{
		str[i] = nums[num % 10];
		//printf("%c\n", str[i]);
		num /= 10;
		i--;
	}
	if (negative(n))
		str[0] = '-';
	return (str);
}

int main()
{
	char *s = ft_itoa(-26654);
	//int n = (int)2147483647;
	printf("%s\n",  s);
}
