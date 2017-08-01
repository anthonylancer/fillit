/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amironen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/22 19:16:26 by amironen          #+#    #+#             */
/*   Updated: 2017/04/22 19:16:32 by amironen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*pt;
	size_t	len;

	if (s1 && s2)
	{
		len = (ft_strlen(s1) + ft_strlen(s2) + 1);
		if (!(pt = (char *)malloc(sizeof(char) * len)))
			return (NULL);
		ft_strcpy(pt, s1);
		ft_strcpy(pt + ft_strlen(s1), s2);
		pt[len] = '\0';
		return (pt);
	}
	else
		return (NULL);
}
