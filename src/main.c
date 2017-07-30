/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amironen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 20:40:57 by amironen          #+#    #+#             */
/*   Updated: 2017/07/26 20:41:04 by amironen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

void			fail(void)
{
	ft_putstr("error\n");
	exit(0);
}

void			setup(void)
{
	g_ts[0] = 291;
	g_ts[1] = 1164;
	g_ts[2] = 294;
	g_ts[3] = 1042;
	g_ts[4] = 1110;
	g_ts[5] = 17702;
	g_ts[6] = 33113;
	g_ts[7] = 345;
	g_ts[8] = 1153;
	g_ts[9] = 1161;
	g_ts[10] = 1157;
	g_ts[11] = 16726;
	g_ts[12] = 16729;
	g_ts[13] = 338;
	g_ts[14] = 18453;
	g_ts[15] = 342;
	g_ts[16] = 1113;
	g_ts[17] = 16722;
	g_ts[18] = 1045;
}

void			finish(char map[14][14])
{
	t_v i;

	i = (t_v){0, 0};
	while (i.i < g_sq.i)
	{
		ft_putstr(ft_strsub(map[i.i], 0, g_sq.i));
		ft_putchar('\n');
		i.i++;
	}
	exit(0);
}

void			mapcp(char map[14][14], char sap[14][14])
{
	t_v	i;

	i = (t_v){0, 0};
	while (i.i < 14)
	{
		while (i.o < 14)
		{
			sap[i.i][i.o] = map[i.i][i.o];
			i.o++;
		}
		i.o = 0;
		i.i++;
	}
}

int				main(int ac, char **av)
{
	if (ac != 2)
		fail();
	g_p = malloc(570);
	if (read(open(av[1], O_RDONLY), g_p, 570) == -1)
		fail();
	setup();
	if (*g_p != '.' && *g_p != '#')
		fail();
	else if (!process())
		fail();
	g_sq = (t_v)ssq(g_tabi);
	g_tabi = 0;
	trysize();
	return (0);
}
