/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amironen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/22 19:19:53 by amironen          #+#    #+#             */
/*   Updated: 2017/04/22 19:19:55 by amironen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static char	*util(char *dest, char *src, size_t len)
{
	ft_strncpy(dest, src, len);
	dest[len] = '\0';
	return (dest);
}

char		*ft_strtrim(char const *s)
{
	char	*pt;
	size_t	len;

	if (s)
	{
		while (*s == ' ' || *s == '\n' || *s == '\t')
			s++;
		len = ft_strlen(s);
		if (len)
			while (s[len - 1] == ' ' || s[len - 1] == '\n'
				|| s[len - 1] == '\t')
				len--;
		if (!(pt = (char *)malloc(sizeof(char) * (len + 1))))
			return (NULL);
		else if (!len)
		{
			*pt = '\0';
			return (pt);
		}
		else
			return (util(pt, (char *)s, len));
	}
	else
		return (NULL);
}
