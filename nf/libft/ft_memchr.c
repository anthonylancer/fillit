/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amironen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/22 19:10:46 by amironen          #+#    #+#             */
/*   Updated: 2017/04/22 19:10:49 by amironen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;
	unsigned char ch;

	ch = (unsigned char)c;
	str = (unsigned char *)s;
	while (n--)
		if (*str == ch)
			return (str);
		else
			str++;
	return (NULL);
}
