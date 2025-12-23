/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasinda <anasinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 02:35:18 by anasinda          #+#    #+#             */
/*   Updated: 2025/11/02 03:35:15 by anasinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_count_len(long num, int *size)
{
	*size = 0;
	if (num <= 0)
		(*size)++;
	while (num != 0)
	{
		(*size)++;
		num /= 10;
	}
}

static	void	ft_rev_arr(char *ptr, int size, int is_negative)
{
	int		i;
	char	temp;

	i = 0;
	if (is_negative)
		i = 1;
	while (i < size)
	{
		temp = ptr[i];
		ptr[i] = ptr[size - 1];
		ptr[size - 1] = temp;
		i++;
		size--;
	}
}

static	void	ft_fill_arr(long num, int *sign, int size, char *ptr)
{
	int	i;

	i = 0;
	if (num < 0)
	{
		ptr[i++] = '-';
		*sign = 1;
		num = -num;
	}
	while (i < size)
	{
		ptr[i++] = (num % 10) + '0';
		num /= 10;
	}
	ptr[size] = '\0';
}

char	*ft_itoa(int n)
{
	int		size;
	int		sign;
	char	*ptr;
	long	num;

	num = n;
	sign = 0;
	ft_count_len(n, &size);
	ptr = malloc(sizeof(char) * (size + 1));
	if (!ptr)
		return (NULL);
	ft_fill_arr(num, &sign, size, ptr);
	ft_rev_arr(ptr, size, sign);
	return (ptr);
}
/*
int main()
{
	printf("%s \n", ft_itoa(-2147483648));
}*/
