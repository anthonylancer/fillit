/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amironen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 23:59:53 by amironen          #+#    #+#             */
/*   Updated: 2017/04/24 00:00:05 by amironen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static size_t	intlen(int n)
{
	size_t i;

	i = 1;
	if (n < 0)
		i++;
	while (n /= 10)
		i++;
	return (i);
}

char			*ft_itoa(int n)
{
	char	*res;
	size_t	len;
	int		flag;

	len = intlen(n);
	if (!(res = ft_strnew(len)))
		return (NULL);
	if (n < 0)
	{
		*res = '-';
		n *= -1;
		flag = 1;
	}
	else
		flag = 0;
	while (len--)
	{
		if (n || !flag)
			res[len] = (n % 10) + '0';
		n /= 10;
	}
	return (res);
}
