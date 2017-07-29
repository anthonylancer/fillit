/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amironen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/22 19:10:56 by amironen          #+#    #+#             */
/*   Updated: 2017/04/22 19:10:57 by amironen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *s1p;
	unsigned char *s2p;

	s1p = (unsigned char *)s1;
	s2p = (unsigned char *)s2;
	while (n--)
	{
		if (*s1p != *s2p)
			return ((int)(*s1p - *s2p));
		s1p++;
		s2p++;
	}
	return (0);
}
