/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amironen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 19:16:09 by amironen          #+#    #+#             */
/*   Updated: 2017/07/12 19:16:27 by amironen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FILLIT_H
# define _FILLIT_H
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

# include <stdio.h>

typedef struct	s_curs
{
	unsigned short	x;
	unsigned short	y;
}				t_curs;

typedef struct	s_cvec
{
	unsigned char	i;
	unsigned char	o;
}				t_cvec;

unsigned short	g_tris[19];
unsigned short	g_t;
unsigned short	*g_tab[26];
char			g_map[13][13];

unsigned char	g_tabi;
unsigned char	g_tpi;
unsigned char	g_nlc;
char			*g_p;
t_curs			g_c;
t_cvec			g_i;
t_cvec			g_sq;
unsigned char	g_help;

unsigned short	getv(unsigned short t, unsigned char pos);
void			setv(unsigned short *t, unsigned char pos, unsigned short val);
void			convert(unsigned char pos);
void			align(void);
unsigned char	compare(void);
unsigned char	process(void);
unsigned char	hash(void);
unsigned char	nl(void);
void			help(void);
unsigned char	place(char map[13][13], unsigned char pos);
unsigned char	ssq(unsigned char pcs);
#endif
