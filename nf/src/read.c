/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amironen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 19:16:38 by amironen          #+#    #+#             */
/*   Updated: 2017/07/12 19:16:44 by amironen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

void			align(void)
{
	unsigned char	i;
	t_c				p;
	t_c				l;

	i = 0;
	l = (t_c){4, 4};
	while (i < 4)
	{
		if ((p.x = getv(g_t, i * 2)) < l.x)
			l.x = p.x;
		if ((p.y = getv(g_t, (i * 2) + 1)) < l.y)
			l.y = p.y;
		i++;
	}
	i = 0;
	if (l.x)
		while (i++ < 4)
			setv(&g_t, (i - 1) * 2, getv(g_t, (i - 1) * 2) - l.x);
	i = 0;
	if (l.y)
		while (i++ < 4)
			setv(&g_t, ((i - 1) * 2) + 1, getv(g_t, ((i - 1) * 2) + 1) - l.y);
}

unsigned char	process(void)
{
	while (*g_p)
	{
		if (*g_p == '.')
			if (g_c.x == 4 || g_tabi == 26 || g_p[1] == '\0')
				return (0);
			else
				g_c.x++;
		else if (*g_p == '#')
		{
			if (!hash() || g_tabi == 26 || g_p[1] == '\0')
				return (0);
		}
		else if (*g_p == '\n')
		{
			g_help = nl();
			if (!g_help)
				return (0);
			if (g_help == 2)
				continue;
		}
		else
			return (0);
		g_p++;
	}
	return (1);
}

unsigned char	hash(void)
{
	if (g_tpi == 4)
		return (0);
	convert(g_tpi);
	g_tpi++;
	g_c.x++;
	return (1);
}

unsigned char	nl(void)
{
	if (g_c.x != 4)
		return (0);
	if (g_c.y == 3)
	{
		if (g_p[1] != '\0' && (g_p[2] != '.' && g_p[2] != '#'))
			return (0);
		align();
		if (!compare() || (g_p[1] != '\n' && g_p[1] != '\0'))
			return (0);
		g_c = (t_c){0, 0};
		g_tpi = 0;
		g_t = 0;
		g_p += 2;
		g_tabi++;
		return (2);
	}
	g_c.x = 0;
	g_c.y++;
	return (1);
}
