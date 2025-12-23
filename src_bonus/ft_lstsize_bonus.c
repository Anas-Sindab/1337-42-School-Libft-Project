/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasinda <anasinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 02:37:39 by anasinda          #+#    #+#             */
/*   Updated: 2025/12/23 16:21:18 by anasinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
/*
int main()
{
    t_list *head = malloc(sizeof(t_list));
    t_list *second = malloc(sizeof(t_list));
    t_list *third = malloc(sizeof(t_list));
    t_list *fourth = malloc(sizeof(t_list));
    t_list *last = malloc(sizeof(t_list));

    int count = 0;

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = last;
    last->next = NULL;

    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    printf("%d \n", ft_lstsize(NULL));
}*/
