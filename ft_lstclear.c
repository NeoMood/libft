/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:18:10 by sgmira            #+#    #+#             */
/*   Updated: 2021/11/19 11:46:01 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*head;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		head = *lst;
		*lst = (*lst)->next;
		del (head -> content);
		free (head);
	}
	*lst = NULL;
}
