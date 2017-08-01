/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amironen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/22 19:18:48 by amironen          #+#    #+#             */
/*   Updated: 2017/04/22 19:18:50 by amironen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strnstr(const char *big, const char *lil, size_t len)
{
	size_t llen;

	if (!*lil)
		return ((char *)big);
	llen = ft_strlen(lil);
	while (*big && len-- >= llen)
	{
		if (*big == *lil && !ft_strncmp(big, lil, llen))
			return ((char *)big);
		big++;
	}
	return (NULL);
}
