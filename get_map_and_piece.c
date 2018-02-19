/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map_and_piece.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/18 09:38:00 by fpetras           #+#    #+#             */
/*   Updated: 2018/02/18 10:05:08 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

static void		ft_skip_line(void)
{
	char *line;

	get_next_line(0, &line);
	free(line);
}

int				ft_piece_info(t_filler *f)
{
	int		i;
	char	*line;

	i = 6;
	if (get_next_line(0, &line) < 1)
		return (-1);
	f->piece_height = ft_atoi(&line[i]);
	while (line[i] != ' ' && line[i + 1])
		i++;
	f->piece_width = ft_atoi(&line[i + 1]);
	free(line);
	if (f->piece_height > f->map_height || f->piece_width > f->map_width)
		ft_dprintf(2, "Error: Piece too big\n");
	f->piece = (char**)malloc(sizeof(char*) * (f->piece_height + 1));
	i = 0;
	while (i < f->piece_height && get_next_line(0, &line))
	{
		f->piece[i] = ft_strdup(line);
		i++;
		free(line);
	}
	f->piece[i] = 0;
	return (0);
}

int				ft_map_info(t_filler *f)
{
	int		i;
	char	*line;

	i = 8;
	if (get_next_line(0, &line) < 1)
		return (-1);
	f->map_height = ft_atoi(&line[i]);
	while (line[i] != ' ' && line[i + 1])
		i++;
	f->map_width = ft_atoi(&line[i + 1]);
	free(line);
	if (f->map_height > 999 || f->map_width > 999)
		ft_dprintf(2, "Error: Map too big\n");
	f->map = (char**)malloc(sizeof(char*) * (f->map_height + 1));
	i = 0;
	ft_skip_line();
	while (i < f->map_height && get_next_line(0, &line))
	{
		f->map[i] = ft_strdup(&line[4]);
		i++;
		free(line);
	}
	f->map[i] = 0;
	return (0);
}
