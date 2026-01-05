/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasinda <anasinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 13:07:18 by anasinda          #+#    #+#             */
/*   Updated: 2026/01/05 06:32:59 by anasinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*p_dest;
	unsigned char	*p_src;

	p_dest = (unsigned char *)dest;
	p_src = (unsigned char *)src;
	if (dest != src)
	{
		if (p_dest > p_src)
		{
			while (n--)
				p_dest[n] = p_src[n];
		}
		else
		{
			while (n--)
			{
				*p_dest = *p_src;
				p_dest++;
				p_src++;
			}
		}
	}
	return (dest);
}

