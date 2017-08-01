/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amironen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/22 19:18:58 by amironen          #+#    #+#             */
/*   Updated: 2017/04/22 19:19:01 by amironen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*res;
	char	a;

	a = (char)c;
	res = NULL;
	while (*s)
		if (*s == a)
			res = (char *)s++;
		else
			s++;
	if (*s == a)
		return ((char *)s);
	else
		return (res);
}
