/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 08:00:00 by fpetras           #+#    #+#             */
/*   Updated: 2018/02/21 10:50:24 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

static int		ft_get_player_check_error(t_filler *f)
{
	char *line;

	if (get_next_line(0, &line) < 1)
	{
		free(f);
		ft_dprintf(2, "Error: Invalid input\n");
		return (-1);
	}
	else if (line[10] == '1')
		f->my_piece = 'O';
	else if (line[10] == '2')
		f->my_piece = 'X';
	else
	{
		free(line);
		free(f);
		ft_dprintf(2, "Error: Invalid input\n");
		return (-1);
	}
	free(line);
	if (f->my_piece == 'O')
		f->enemy_piece = 'X';
	else if (f->my_piece == 'X')
		f->enemy_piece = 'O';
	return (0);
}

static t_filler	*ft_init_struct(t_filler *f)
{
	f = (t_filler*)malloc(sizeof(t_filler));
	f->my_piece = 0;
	f->enemy_piece = 0;
	f->map_height = 0;
	f->map_width = 0;
	f->piece_height = 0;
	f->piece_width = 0;
	f->map = NULL;
	f->piece = NULL;
	f->my_start_h = 0;
	f->enemy_start_h = 0;
	f->count = 0;
	f->halfway = 0;
	return (f);
}

int				main(void)
{
	int			game;
	t_filler	*f;

	game = 1;
	f = NULL;
	f = ft_init_struct(f);
	if (ft_get_player_check_error(f) == -1)
		return (-1);
	while (game != 4)
	{
		if (ft_map_info(f) == -1 || ft_piece_info(f) == -1)
			break ;
		if (!ft_place_piece(f))
			game = ft_printf("0 0\n");
		ft_free_tab(f->map);
		ft_free_tab(f->piece);
	}
	free(f);
	return (0);
}
