/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amironen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/22 19:19:16 by amironen          #+#    #+#             */
/*   Updated: 2017/04/22 19:19:18 by amironen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t llen;

	if (!*little)
		return ((char *)big);
	llen = ft_strlen(little);
	while (*big)
	{
		if (*big == *little)
			if (!ft_strncmp(big, little, llen))
				return ((char *)big);
		big++;
	}
	return (NULL);
}
