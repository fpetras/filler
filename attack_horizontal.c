/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   attack_horizontal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 05:37:40 by fpetras           #+#    #+#             */
/*   Updated: 2018/02/21 14:09:15 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int		ft_upper_left_horizontal(t_filler *f)
{
	int i;
	int j;

	i = 0;
	while (i < f->map_height)
	{
		j = 0;
		while (j < f->map_width)
		{
			if (ft_position_is_valid(i, j, f) == 1)
			{
				ft_printf("%d %d\n", i, j);
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int		ft_upper_right_horizontal(t_filler *f)
{
	int i;
	int j;

	i = 0;
	while (i < f->map_height)
	{
		j = f->map_width - 1;
		while (j >= 0)
		{
			if (ft_position_is_valid(i, j, f) == 1)
			{
				ft_printf("%d %d\n", i, j);
				return (1);
			}
			j--;
		}
		i++;
	}
	return (0);
}

int		ft_lower_left_horizontal(t_filler *f)
{
	int i;
	int j;

	i = f->map_height - 1;
	while (i >= 0)
	{
		j = 0;
		while (j < f->map_width)
		{
			if (ft_position_is_valid(i, j, f) == 1)
			{
				ft_printf("%d %d\n", i, j);
				return (1);
			}
			j++;
		}
		i--;
	}
	return (0);
}

int		ft_lower_right_horizontal(t_filler *f)
{
	int i;
	int j;

	i = f->map_height - 1;
	while (i >= 0)
	{
		j = f->map_width - 1;
		while (j >= 0)
		{
			if (ft_position_is_valid(i, j, f) == 1)
			{
				ft_printf("%d %d\n", i, j);
				return (1);
			}
			j--;
		}
		i--;
	}
	return (0);
}
