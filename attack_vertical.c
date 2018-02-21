/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   attack_vertical.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 05:37:57 by fpetras           #+#    #+#             */
/*   Updated: 2018/02/21 14:09:27 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int		ft_upper_left_vertical(t_filler *f)
{
	int i;
	int j;

	j = 0;
	while (j < f->map_width)
	{
		i = 0;
		while (i < f->map_width)
		{
			if (ft_position_is_valid(i, j, f) == 1)
			{
				ft_printf("%d %d\n", i, j);
				return (1);
			}
			i++;
		}
		j++;
	}
	return (0);
}

int		ft_upper_right_vertical(t_filler *f)
{
	int i;
	int j;

	j = f->map_width - 1;
	while (j >= 0)
	{
		i = 0;
		while (i < f->map_height)
		{
			if (ft_position_is_valid(i, j, f) == 1)
			{
				ft_printf("%d %d\n", i, j);
				return (1);
			}
			i++;
		}
		j--;
	}
	return (0);
}

int		ft_lower_left_vertical(t_filler *f)
{
	int i;
	int j;

	j = 0;
	while (j < f->map_width)
	{
		i = f->map_height - 1;
		while (i >= 0)
		{
			if (ft_position_is_valid(i, j, f) == 1)
			{
				ft_printf("%d %d\n", i, j);
				return (1);
			}
			i--;
		}
		j++;
	}
	return (0);
}

int		ft_lower_right_vertical(t_filler *f)
{
	int i;
	int j;

	j = f->map_width - 1;
	while (j >= 0)
	{
		i = f->map_height - 1;
		while (i >= 0)
		{
			if (ft_position_is_valid(i, j, f) == 1)
			{
				ft_printf("%d %d\n", i, j);
				return (1);
			}
			i--;
		}
		j--;
	}
	return (0);
}
