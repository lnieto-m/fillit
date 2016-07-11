/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_diff.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubard <jaubard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 12:16:30 by jaubard           #+#    #+#             */
/*   Updated: 2015/12/16 12:04:33 by jaubard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header_fillit.h"

int		ft_diff(char *square, int i, t_id *lst)
{
	int		size_square;
	int		diff;

	size_square = 0;
	while (square[size_square] != '\n')
		size_square++;
	diff = size_square - 4;
	if (i == 3 && lst->z == 5 && lst->y == 4)
		return (i + diff);
	if (i > 3 && i <= 8)
		return (i + diff);
	else if (i > 8 && i <= 13)
		return (i + (diff + diff));
	else if (i > 13)
		return (i + diff + (diff * 2));
	return (i);
}
