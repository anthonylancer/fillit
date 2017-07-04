#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct
{
	unsigned short x;
	unsigned short y;
}	curs;

unsigned short tris[19];
unsigned short temp;
unsigned short * tab[26];
unsigned char tabi;
unsigned char tpi;
unsigned char nlc;
unsigned char lpc;
char * p;
curs c;
curs list[26];

unsigned short getv(unsigned short t, unsigned char pos)
{
	t <<= pos*2;
	return (t >> 14);
}

void setv(unsigned short *t, unsigned char pos, unsigned short val)
{
	*t &= ~(3 << (14-(pos*2)));
	*t |= val << (14-(pos*2));
}

void convert(unsigned short *t, curs c, unsigned char pos)
{
	*t |= c.x << (((3-pos)*4)+2);
	*t |= c.y << (3-pos)*4;
}

void align(unsigned short *t)
{
	curs g = (curs){0,0};
	curs l = (curs){4,4};
	for(unsigned char i=0;i < 4; i++)
	{
		if (g.x = getv(*t, i*2) < l.x)
			l.x = g.x;
		if (g.y = getv(*t, (i*2)+1) < l.y)
			l.y = g.y;
	}
	if (l.x)
		for(unsigned char i=0;i < 4; i++)
			setv(t, i*2, getv(*t, i*2) - l.x);
	if (l.y)
		for(unsigned char i=0;i < 4; i++)
			setv(t, (i*2)+1, getv(*t, (i*2)+1) - l.y);
}

unsigned short compare(unsigned short t)
{
	for(unsigned char i = 0; i<19; i++)
	{
		if(t == tris[i])
		{
			tab[tabi] = &tris[i];
			return (1);
		}
	}
	return (0);
}

unsigned char process()
{
	while (*p)
	{
		if (*p == '.')
		{
			if (c.x == 4)
				return (0);
			c.x++;
		}
		else if (*p == '#')
		{
			if (tpi == 4)
				return (0);
			convert(&temp, c, tpi);
			tpi++;
			c.x++;
		}
		else if (*p == '\n')
		{
			if (nlc == 3)
			{
				align(&temp);
				if (!compare(temp))
					return (0);
				c.y = 0;
				c.x = 0;
				tpi = 0;
				nlc = 0;
				tabi++;
				if (p[1] != '\n' && p[1] != '\0') 
					return (0);
				p += 2;
				temp = 0;
				continue;				
			}
			c.x = 0;
			c.y++;
			nlc++;
		}
		else
			return (0);
		p++;
	}
	return (1);
}

void init()
{
	tris[0] = 291;		// |
	tris[1] = 1164;		// _
	tris[2] = 294;		// L
	tris[3] = 1042;
	tris[4] = 1110;
	tris[5] = 17702;
	tris[6] = 33113;	//J
	tris[7] = 345;
	tris[8] = 1153;
	tris[9] = 1161;
	tris[10] = 1157;	//T
	tris[11] = 16726;
	tris[12] = 16729;
	tris[13] = 338;
	tris[14] = 18453;	//S
	tris[15] = 342;
	tris[16] = 1113;	//Z
	tris[17] = 16722;
	tris[18] = 1045;	//O
	temp = 0;
	tabi = 0;
	tpi = 0;
	nlc = 0;
	lpc = 0;
	c = (curs){0,0};
	p = malloc(560);
}
