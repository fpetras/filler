/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 07:35:26 by fpetras           #+#    #+#             */
/*   Updated: 2018/02/21 10:50:06 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H

# include "libft/libft.h"
# include "libft/get_next_line/get_next_line.h"
# include "libft/ft_printf/ft_printf.h"

typedef struct	s_filler
{
	char		my_piece;
	char		enemy_piece;
	int			map_height;
	int			map_width;
	int			piece_height;
	int			piece_width;
	char		**map;
	char		**piece;
	int			my_start_h;
	int			enemy_start_h;
	int			count;
	int			halfway;
}				t_filler;

int				ft_map_info(t_filler *f);
int				ft_piece_info(t_filler *f);
int				ft_place_piece(t_filler *f);

int				ft_upper_left_horizontal(t_filler *f);
int				ft_upper_right_horizontal(t_filler *f);
int				ft_lower_left_horizontal(t_filler *f);
int				ft_lower_right_horizontal(t_filler *f);
int				ft_upper_left_vertical(t_filler *f);
int				ft_upper_right_vertical(t_filler *f);
int				ft_lower_left_vertical(t_filler *f);
int				ft_lower_right_vertical(t_filler *f);

int				ft_position_is_valid(int i, int j, t_filler *f);
void			ft_free_tab(char **tab);

#endif
