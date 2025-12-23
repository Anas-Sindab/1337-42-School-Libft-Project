/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasinda <anasinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 13:06:21 by anasinda          #+#    #+#             */
/*   Updated: 2025/12/23 16:21:18 by anasinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			sum;
	void			*ptr;
	unsigned char	*byte_ptr;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (size > SIZE_MAX / nmemb)
		return (NULL);
	sum = nmemb * size;
	sum = nmemb * size;
	ptr = malloc(sum);
	if (!ptr)
		return (NULL);
	byte_ptr = (unsigned char *)ptr;
	ft_memset(byte_ptr, 0, sum);
	return (ptr);
}
