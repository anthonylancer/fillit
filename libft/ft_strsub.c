/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amironen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/22 19:19:31 by amironen          #+#    #+#             */
/*   Updated: 2017/04/22 19:19:33 by amironen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *pt;

	if (!(pt = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	else if (s)
		if (ft_strncpy(pt, s + start, len))
			pt[len] = '\0';
	return (pt);
}
