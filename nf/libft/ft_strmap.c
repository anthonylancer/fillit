/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amironen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/24 00:05:05 by amironen          #+#    #+#             */
/*   Updated: 2017/04/24 00:05:09 by amironen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*fresh;

	if (!s || !f || !(fresh = ft_strnew(ft_strlen(s))))
		return (NULL);
	i = 0;
	while (s[i++])
		fresh[i - 1] = f(s[i - 1]);
	return (fresh);
}
