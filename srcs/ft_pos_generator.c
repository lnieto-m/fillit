/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pos_generator.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubard <jaubard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 16:20:37 by jaubard           #+#    #+#             */
/*   Updated: 2015/12/14 18:14:00 by jaubard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header_fillit.h"

void	ft_pos_generator(t_id *lst, char *str, int pos)
{
	int		j;
	int		k;

	k = 0;
	j = 0;
	while (str[pos] != '#')
		pos++;
	while (j < 3)
	{
		pos++;
		k++;
		if (str[pos] == '#')
		{
			if (j == 0)
				lst->x = k;
			if (j == 1)
				lst->y = k;
			if (j == 2)
				lst->z = k;
			j++;
		}
	}
}
