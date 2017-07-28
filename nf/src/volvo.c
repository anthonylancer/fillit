#include "../include/fillit.h"

unsigned char	place(char map[14][14], unsigned char pc)
{
	unsigned char i = 0;
	unsigned char o = 0;
	if (!g_tab[pc])
	{
		finish(map);
		return (1);
	}
	while (i < g_sq.o)
	{
		if (i < g_sq.i)
			while (o < i + 1)
			{
				if (fits(map, pc, itc(i,o,1)))
					if (putpc(map, pc, itc(i,o,1)))
						return (1);
				o++;
			}
		else
			while (o < g_sq.o - i)
			{
				if (fits(map, pc, itc(i,o,0)))
					if (putpc(map, pc, itc(i,o,0)))
						return (1);
				o++;
			}
		o = 0;
		i++;
	}
	return (0);
}
unsigned char	putpc(char map[14][14], unsigned char pc, t_c c)
{
	unsigned char i;

	i = 0;
	while (i < 4)
	{
		map[getv(*g_tab[pc], (i * 2) + 1) + c.y][getv(*g_tab[pc], i * 2) + c.x] = ('A' + pc);
		i++;
	}
	if (place(map, pc + 1))
		return (1);
	return (0);
}

t_c				itc(unsigned char i, unsigned char o, unsigned char d)
{
	t_c res;

	if (d)
		return (res = (t_c){i - o, o});
	else
		return (res = (t_c){g_sq.i - (o + 1), (i - g_sq.i) + o + 1});
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

unsigned char	fits(char (*map)[14], unsigned char pc, t_c c)
{
	unsigned char	i;

	i = 0;
	while (i < 4)
	{
		if (map[getv(*g_tab[pc], (i * 2) + 1) + c.y][getv(*g_tab[pc], i * 2) + c.x])
			return (0);
		i++;
	}
	return (1);
}