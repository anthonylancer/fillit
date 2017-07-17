/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amironen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 19:17:09 by amironen          #+#    #+#             */
/*   Updated: 2017/07/12 19:17:11 by amironen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	help(void)
{
	g_tris[0] = 291;
	g_tris[1] = 1164;
	g_tris[2] = 294;
	g_tris[3] = 1042;
	g_tris[4] = 1110;
	g_tris[5] = 17702;
	g_tris[6] = 33113;
	g_tris[7] = 345;
	g_tris[8] = 1153;
	g_tris[9] = 1161;
	g_tris[10] = 1157;
	g_tris[11] = 16726;
	g_tris[12] = 16729;
	g_tris[13] = 338;
	g_tris[14] = 18453;
	g_tris[15] = 342;
	g_tris[16] = 1113;
	g_tris[17] = 16722;
	g_tris[18] = 1045;
	g_t = 0;
	g_tabi = 0;
	g_tpi = 0;
	g_nlc = 0;
	g_sqi = 0;
	g_ssq = 0;
}

int		main(int ac, char **av)
{
	if (ac != 2)
	{
		printf("error\n");
		return (0);
	}
	help();
	g_help = 0;
	g_c = (t_curs){0, 0};
	g_p = malloc(560);
	read(open(av[1], O_RDONLY), g_p, 560);
	if (*g_p != '.' && *g_p != '#')
		printf("error\n");
	else if (!process())
		printf("error\n");
	//for (int i=0; i < g_tabi; i++)
	//{
	//	printf("%p\n", g_tab[i]);
	//}
	printf("%i\n", g_tabi);
	return (0);
}
