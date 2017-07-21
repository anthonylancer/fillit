#include "fillit.h"

void	fail(void)
{
	ft_putstr("error\n");
	exit(0);
}

void	setup(void)
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

int		main(int ac, char **av)
{
	char	p[560];
	if (ac != 2)
	{
		fail();
	}
	if (read(open(av[1], O_RDONLY), p, 560) == -1)
	{
		fail();
	}
	setup();

	return 0;
}