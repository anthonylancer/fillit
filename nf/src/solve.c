#include "fillit.h"

unsigned char	place(char map[14][14], t_v sq, unsigned short *pcs)
{
	t_v i;
	t_c co;

	co = (t_c){0,0};
	i = (t_v){0,0};
	while (sq.i < 14)
	{
		while (i.i < sq.o)
		{
			while (i.i < sq.i && i.o < i.i + 1)
			{
				co = 
				if (map[])
					if ()

			}
		}
		sq.i++;
		sq.o = (sq.i * 2) - 1;
	}
}

unsigned char	fits(char *map[14][14], unsigned short *pc, t_c coor)
{
	unsigned char i;

	i = 0;
	while (i < 4)
	{
		if ()
	}

}