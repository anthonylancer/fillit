/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblank.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amironen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 20:24:42 by amironen          #+#    #+#             */
/*   Updated: 2017/07/26 20:24:54 by amironen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	ft_isblank(char str)
{
	if (str == '\n' || str == '\t' || str == '\r' || str == '\v' ||
			str == '\f' || str == ' ')
		return (1);
	else
		return (0);
}