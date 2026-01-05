/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasinda <anasinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 02:36:56 by anasinda          #+#    #+#             */
/*   Updated: 2026/01/05 06:38:14 by anasinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;

	if (!lst || !(*lst) || !del)
		return ;
	while (*lst)
	{
		ptr = *lst;
		del(ptr->content);
		(*lst) = (*lst)->next;
		free(ptr);
	}
	(*lst) = NULL;
}
