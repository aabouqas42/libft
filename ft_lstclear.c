/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 19:11:21 by aabouqas          #+#    #+#             */
/*   Updated: 2023/11/10 22:16:58 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*curr;

	if (!lst || !*lst || !del)
		return ;
	node = *lst;
	while (node)
	{
		curr = node->next;
		del(node->content);
		free (node);
		node = curr;
	}
	*lst = NULL;
}
