/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasinda <anasinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 02:37:52 by anasinda          #+#    #+#             */
/*   Updated: 2025/10/31 02:37:54 by anasinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr_s;

	ptr_s = (unsigned char *)s;
	while (n--)
	{
		if (*ptr_s == (unsigned char)c)
			return ((void *)ptr_s);
		ptr_s++;
	}
	return (NULL);
}
/*
int main()
{
	char s1[5] = "BCA";
	//char s2[5] = "";
	printf("This is ours:%p \n", ft_memchr(s1, -10, 3));
	printf("This is ori:%p \n", memchr(s1, -10, 3));
	//printf("This is ours:%s \n", arr);
	//printf("This is ori:%s \n", arro);

}*/
