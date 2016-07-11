/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete_piece.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubard <jaubard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 15:28:25 by jaubard           #+#    #+#             */
/*   Updated: 2015/12/15 11:56:12 by jaubard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header_fillit.h"

void	ft_delete_piece(char *square, t_id *piece)
{
	int		size_square;

	size_square = 0;
	while (square[size_square] != '\0')
		size_square++;
	square[piece->o] = '.';
	square[piece->o + ft_diff(square, piece->x, piece)] = '.';
	square[piece->o + ft_diff(square, piece->y, piece)] = '.';
	square[piece->o + ft_diff(square, piece->z, piece)] = '.';
	piece->o = 0;
}
