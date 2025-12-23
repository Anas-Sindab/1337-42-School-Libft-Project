/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasinda <anasinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 02:36:51 by anasinda          #+#    #+#             */
/*   Updated: 2025/12/23 16:21:18 by anasinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
int main()
{
	t_list *lst = malloc(sizeof(t_list));
	t_list *sec = malloc(sizeof(t_list));
	t_list *new = malloc(sizeof(t_list));

	char *str = "Zed";
	char *strt = "Akali";
	char *nnn = "Yasuo";

	lst->content = str;
	lst->next = NULL;

	sec->content = strt;
	sec->next = NULL;

	new->content = nnn;
	ft_lstadd_front(&lst, new);

	while (lst != NULL)
	{
		printf("%s \n", (char *)lst->content);
		lst = lst->next;
	}
}*/
