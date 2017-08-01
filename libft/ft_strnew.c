/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amironen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/22 19:18:31 by amironen          #+#    #+#             */
/*   Updated: 2017/04/22 19:18:32 by amironen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strnew(size_t size)
{
	char	*pt;
	size_t	i;

	i = 0;
	if ((pt = (char *)malloc(sizeof(char) * (size + 1))))
		while (size--)
			pt[i++] = '\0';
	else
		return (NULL);
	pt[i] = '\0';
	return (pt);
}
