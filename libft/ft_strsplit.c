/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amironen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 07:21:07 by amironen          #+#    #+#             */
/*   Updated: 2017/04/23 07:21:11 by amironen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	cntstr(char const *s, char c)
{
	size_t	res;
	int		flag;

	res = 0;
	flag = 0;
	while (*s)
	{
		if (flag == 0 && *s != c && *s)
		{
			flag = 1;
			res++;
		}
		else if (flag == 1 && *s == c)
			flag = 0;
		s++;
	}
	return (res);
}

static size_t	cntchar(char const *s, char c)
{
	size_t	res;

	res = 0;
	while (*s)
		if (*s++ != c)
			res++;
		else
			return (res);
	return (res);
}

static char		**help(char **t)
{
	t = (char **)malloc(sizeof(char *));
	*t = (char *)malloc(sizeof(char));
	*t = NULL;
	return (t);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**res;
	size_t	num;
	size_t	chars;
	size_t	i;

	if (!s || !c)
		return (NULL);
	if (!(num = cntstr(s, c)))
		return (help(res = NULL));
	i = 0;
	if (!(res = (char **)malloc(sizeof(char *) * (num + 1))))
		return (NULL);
	while (*s)
		if (*s == c)
			s++;
		else
		{
			chars = cntchar(s, c);
			res[i++] = ft_strsub(s, 0, chars);
			s += chars;
		}
	res[i] = NULL;
	return (res);
}
