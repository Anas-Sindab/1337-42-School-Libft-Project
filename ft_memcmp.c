/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasinda <anasinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 02:38:05 by anasinda          #+#    #+#             */
/*   Updated: 2025/10/31 02:38:06 by anasinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p_s1;
	const unsigned char	*p_s2;

	p_s1 = (const unsigned char *)s1;
	p_s2 = (const unsigned char *)s2;
	while (n--)
	{
		if (*p_s1 != *p_s2)
			return (*p_s1 - *p_s2);
		p_s1++;
		p_s2++;
	}
	return (0);
}
/*
int main()
{
    char s1[5] = "123";
    char s2[5] = "123";
    printf("This is ours:%d \n", ft_memcmp(s1, s2, 6));
    printf("This is ori:%d \n", memcmp(s1, s2, 6));
    //printf("This is ours:%s \n", arr);
    //printf("This is ori:%s \n", arro);

}*/