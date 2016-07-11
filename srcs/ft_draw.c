/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubard <jaubard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 15:53:37 by jaubard           #+#    #+#             */
/*   Updated: 2015/12/16 14:40:37 by jaubard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header_fillit.h"

static void		ft_draw_bis(char *square, t_id *piece, int pos)
{
	square[pos] = 64 + piece->position;
	square[pos + ft_diff(square, piece->x, piece)] = 64 + piece->position;
	square[pos + ft_diff(square, piece->y, piece)] = 64 + piece->position;
	square[pos + ft_diff(square, piece->z, piece)] = 64 + piece->position;
}

int				ft_draw(char *square, t_id *piece, int i)
{
	size_t	x;
	size_t	y;
	size_t	z;

	x = ft_diff(square, piece->x, piece);
	y = ft_diff(square, piece->y, piece);
	z = ft_diff(square, piece->z, piece);
	while (square[i] != '.' || square[i + x] != '.' || square[i + y] != '.'
			|| square[i + z] != '.')
	{
		if (i + x > ft_strlen(square) || i + y > ft_strlen(square)
			|| i + z > ft_strlen(square))
			return (0);
		i++;
	}
	ft_draw_bis(square, piece, i);
	piece->o = i;
	return (i + 1);
}
