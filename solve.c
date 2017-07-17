#include "fillit.h"

unsigned char ssq(unsigned char pcs)
{
	unsigned char i;

	i = 2;
	while (i < 14)
	{
		if (pcs * 4 <= i * i)
			return (i);
		i++;
	}
	return (0);
}

unsigned char try(char *map[13][13], unsigned char pos)
{
	if (empty())
		if (fits())
		{
			setp();
			if (pos < g_tabi)
				if (place(*map, pos++))
					return (1);
				else
					unset();
			else
				return (1);
		}	
	o++;
}

unsigned char place(char map[13][13], unsigned char pos)
{
	unsigned char i;
	unsigned char o;

	i = 0;
	o = 0;
	while (i < g_sqi)
	{
		if (i < g_ssq)
			while (o < i + 1)
			{
				try(&map, pos);
			}
		else
			while (o < g_sqi - i)
			{
				try(&map, pos);
			}
		i++;
		o = 0;
	}
	return (0);
}

