/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amironen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/22 19:14:00 by amironen          #+#    #+#             */
/*   Updated: 2017/04/22 19:14:02 by amironen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char a;

	a = (char)c;
	while (*s)
		if (*s++ == a)
			return ((char *)--s);
	if (a == '\0')
		return ((char *)s);
	else
		return (NULL);
}
