/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   volvo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amironen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/29 16:36:04 by amironen          #+#    #+#             */
/*   Updated: 2017/07/29 16:36:07 by amironen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

unsigned char	place(char mcp[14][14], unsigned char pc)
{
	char	map[14][14];
	t_c		j;

	j = (t_c){0, 0};
	mapcp(mcp, map);
	if (!g_tab[pc])
		finish(map);
	while (j.y < g_sq.o)
	{
		while (j.x < g_sq.o)
		{
			if (fits(map, pc, j))
				if (putpc(map, pc, j))
					return (1);
			j.x++;
		}
		j.x = 0;
		j.y++;
	}
	return (0);
}

unsigned char	putpc(char map[14][14], unsigned char pc, t_c c)
{
	unsigned char	i;
	unsigned short	p;

	p = *g_tab[pc];
	i = 0;
	while (i < 4)
	{
		map[getv(p, (i * 2) + 1) + c.y][getv(p, i * 2) + c.x] = ('A' + pc);
		i++;
	}
	i = 0;
	if (place(map, pc + 1))
		return (1);
	else
		while (i < 4)
		{
			map[getv(p, (i * 2) + 1) + c.y][getv(p, i * 2) + c.x] = '.';
			i++;
		}
	return (0);
}

void			trysize(void)
{
	t_v	ct;

	ct = (t_v){0, 0};
	while (g_sq.i < 14)
	{
		while (ct.i < g_sq.i)
		{
			while (ct.o < g_sq.i)
			{
				g_map[ct.i][ct.o] = '.';
				ct.o++;
			}
			ct.i++;
			ct.o = 0;
		}
		ct = (t_v){0, 0};
		if (place(g_map, g_tabi))
			return ;
		g_sq.i++;
		g_sq.o += 2;
	}
}

unsigned char	fits(char map[14][14], unsigned char pc, t_c c)
{
	unsigned char	i;
	unsigned short	p;

	i = 0;
	p = *g_tab[pc];
	while (i < 4)
	{
		if (map[getv(p, (i * 2) + 1) + c.y][getv(p, i * 2) + c.x] != '.')
			return (0);
		i++;
	}
	return (1);
}
