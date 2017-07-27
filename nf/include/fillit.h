#ifndef FILLIT_H
# define FILLIT_H
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include "../libft/libft.h"
# include <stdio.h>

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
unsigned short	g_t;
unsigned short	*g_tab[27];
char			g_map[14][14];
unsigned char	g_tabi;
unsigned char	g_tpi;
char			*g_p;
t_c				g_c;
t_v				g_sq;
unsigned char	g_help;

void			setup(void);
void			fail(void);
unsigned short	getv(unsigned short t, unsigned char pos);
void			setv(unsigned short *t, unsigned char pos, unsigned short val);
void			convert(unsigned char pos);
void			align(void);
unsigned char	compare(void);
unsigned char	process();
unsigned char	hash(void);
unsigned char	nl(void);
void			help(void);
#endif
