/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 07:35:26 by fpetras           #+#    #+#             */
/*   Updated: 2018/02/18 10:21:56 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H

# include "libft/libft.h"
# include "libft/get_next_line/get_next_line.h"
# include "libft/ft_printf/ft_printf.h"

# include <stdio.h>

typedef struct	s_filler
{
	char		my_piece;
	int			map_height;
	int			map_width;
	int			piece_height;
	int			piece_width;
	char		**map;
	char		**piece;
}				t_filler;

int				ft_map_info(t_filler *f);
int				ft_piece_info(t_filler *f);
int				ft_position_is_valid(int i, int j, t_filler *f);
void			ft_free_tab(char **tab);

#endif
