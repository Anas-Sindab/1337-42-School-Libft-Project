/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasinda <anasinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 13:06:56 by anasinda          #+#    #+#             */
/*   Updated: 2025/11/02 13:50:48 by anasinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
int	main(void)
{
	t_list *lst = malloc(sizeof(t_list));
	t_list *sec = malloc(sizeof(t_list));
	t_list *new = malloc(sizeof(t_list));

	lst->content = malloc(sizeof(char) * strlen("ZED") + 1);
	lst->content = strcpy(lst->content, "ZED");
	lst->next = NULL;


	void   (*ptr)(void *);
	ptr = del;
	ft_lstdelone(lst, ptr);
	ft_lstdelone(sec, ptr);
	ft_lstdelone(new, ptr);
}*/