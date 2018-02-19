/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_position.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/18 10:16:27 by fpetras           #+#    #+#             */
/*   Updated: 2018/02/18 10:18:06 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

static int	ft_check_coordinate(int i, int j, char enemy_piece, t_filler *f)
{
	int i2;
	int j2;
	int is_valid;

	i2 = 0;
	is_valid = 0;
	while (i2 < f->piece_height)
	{
		j2 = 0;
		while (j2 < f->piece_width)
		{
			if (f->map[i + i2][j + j2] == enemy_piece &&
				f->piece[i2][j2] == '*')
				return (0);
			if ((f->map[i + i2][j + j2] == f->my_piece ||
				f->map[i + i2][j + j2] == f->my_piece + 32) &&
				f->piece[i2][j2] == '*')
				is_valid++;
			if (is_valid > 1)
				return (0);
			j2++;
		}
		i2++;
	}
	return (is_valid);
}

int			ft_position_is_valid(int i, int j, t_filler *f)
{
	char	enemy_piece;

	if (f->my_piece == 'O')
		enemy_piece = 'X';
	else
		enemy_piece = 'O';
	if (i + f->piece_height > f->map_height)
		return (0);
	if (j + f->piece_width > f->map_width)
		return (0);
	return (ft_check_coordinate(i, j, enemy_piece, f));
}
