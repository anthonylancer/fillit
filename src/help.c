/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amironen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 19:16:55 by amironen          #+#    #+#             */
/*   Updated: 2017/07/12 19:17:00 by amironen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

unsigned short	getv(unsigned short t, unsigned char pos)
{
	t <<= pos * 2;
	return (t >> 14);
}

void			setv(unsigned short *t, unsigned char pos, unsigned short val)
{
	*t &= ~(3 << (14 - (pos * 2)));
	*t |= val << (14 - (pos * 2));
}

void			convert(unsigned char pos)
{
	g_t |= g_c.x << (((3 - pos) * 4) + 2);
	g_t |= g_c.y << ((3 - pos) * 4);
}

unsigned char	compare(void)
{
	unsigned char	i;

	i = 0;
	while (i < 19)
	{
		if (g_t == g_ts[i])
		{
			g_tab[g_tabi] = &g_ts[i];
			return (1);
		}
		i++;
	}
	return (0);
}

t_v				ssq(unsigned char pcs)
{
	unsigned char i;

	i = 2;
	while (i < 14)
	{
		if (pcs * 4 <= i * i)
			return (t_v){i, (i * 2) - 1};
		i++;
	}
	return (t_v){0,0};
}