#ifndef FILLIT_H
#define FILLIT_H
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

typedef struct	s_c
{
	unsigned short x;
	unsigned short y;
}				t_c;

typedef struct	s_v
{
	unsigned char i;
	unsigned char o;
}				t_v;

unsigned short	g_ts[19];
unsigned short	g_tmp = 0;
unsigned short	*g_tab[26];
char			g_map[13][13];

void	setup(void);
void	fail(void);

#endif
