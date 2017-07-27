#include "fillit.h"

unsigned char	place(char map[14][14], unsigned char pc)
{
	t_v i;

	if (!(*g_tab[pc]))
		pmap(map);
	i = (t_v){0,0};
	while (i.i < g_sq.o)
	{
		if (i.i < g_sq.i)
			while (i.o < i.i + 1)
			{
				norm(&map, pc, i);
				i.o++;
			}
		else 
			while (i.o < g_sq.o - i.i)
			{
				norm(&map, pc, i);
				i.o++;
			}
		i = (t_v){i.i + 1, 0};
	}
	return (0);
}

void			norm(char (*) map[14][14], unsigned char pc, t_v co)
{
	t_v	cc;

	cc = (t_v){co.};
	if (fits(map, pc, c))
	{
		putpc(pc, map, c);
		if (!place(*map, pc + 1))
	}	

}

void			trysize(void)
{
	while (g_sq.i < 14)
	{
		if (place (g_map, g_tabi))
			return ;
		g_sq.i++;
		g_sq.o += 2;
	}
}

unsigned char	fits(char (*) map[14][14], unsigned char pc, t_c c)
{
	unsigned char	i;
	unsigned short	t;

	t = *g_tab[pc];
	i = 0;
	while (i < 4)
	{
		if (*map[getv(t, (i * 2) + 1) + c.y][getv(t, i * 2) + c.x])
			return (0);
	}
	return (1);
}