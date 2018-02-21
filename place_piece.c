/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place_piece.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 04:50:30 by fpetras           #+#    #+#             */
/*   Updated: 2018/02/21 11:14:39 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

static int		ft_halftime(t_filler *f)
{
	int dots;
	int pieces;
	int i;
	int j;

	dots = 0;
	pieces = 0;
	i = 0;
	while (i < f->map_height)
	{
		j = 0;
		while (j < f->map_width)
		{
			if (f->map[i][j] == '.')
				dots++;
			if (f->map[i][j] == f->my_piece || f->map[i][j] == f->enemy_piece
				|| f->map[i][j] == f->my_piece + 32
				|| f->map[i][j] == f->enemy_piece + 32)
				pieces++;
			j++;
		}
		i++;
	}
	return ((pieces > dots / 2) ? 1 : 0);
}

static void		ft_start_positions(t_filler *f)
{
	int i;
	int j;

	i = 0;
	while (i < f->map_height)
	{
		j = 0;
		while (j < f->map_width)
		{
			if (f->map[i][j] == f->my_piece)
				f->my_start_h = i;
			else if (f->map[i][j] == f->enemy_piece)
				f->enemy_start_h = i;
			j++;
		}
		i++;
	}
}

static int		ft_upper_start(t_filler *f)
{
	int placed;

	placed = 0;
	if (!f->halfway)
	{
		if ((f->count % 2) == 0)
			placed = ft_lower_right_horizontal(f);
		else
			placed = ft_upper_right_horizontal(f);
	}
	else
		placed = ft_upper_right_vertical(f);
	return (placed);
}

static int		ft_lower_start(t_filler *f)
{
	int placed;

	placed = 0;
	if (!f->halfway)
		placed = ft_upper_left_horizontal(f);
	else
	{
		if ((f->count % 2) == 0)
			placed = ft_lower_left_vertical(f);
		else
			placed = ft_upper_left_vertical(f);
	}
	return (placed);
}

int				ft_place_piece(t_filler *f)
{
	int placed;

	placed = 0;
	if (f->count == 0)
		ft_start_positions(f);
	if (f->halfway == 0)
		f->halfway = ft_halftime(f);
	if (f->my_start_h < f->enemy_start_h)
		placed = ft_upper_start(f);
	else
		placed = ft_lower_start(f);
	f->count++;
	return (placed);
}
