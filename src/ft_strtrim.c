/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasinda <anasinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 02:42:41 by anasinda          #+#    #+#             */
/*   Updated: 2025/12/23 16:21:18 by anasinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	ft_check_set(int index, char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (s1[index] == set[i])
			return (1);
		i++;
	}
	return (0);
}

static char	*ft_fill_array(char const *s1, char *ptr, int start, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ptr[i] = s1[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*ptr;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_check_set(start, s1, set))
		start++;
	end = ft_strlen(s1) - 1;
	while (end >= start && ft_check_set(end, s1, set))
		end--;
	ptr = malloc(sizeof(char) * (end - start + 2));
	if (!ptr)
		return (NULL);
	return (ft_fill_array(s1, ptr, start, end - start + 1));
}
