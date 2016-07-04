/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_dimensions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubard <jaubard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 13:22:57 by jaubard           #+#    #+#             */
/*   Updated: 2015/12/16 10:25:12 by jaubard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header_fillit.h"

int		ft_check_dimensions(char *str)
{
	int		columns;
	int		lines;
	int		total;

	columns = 0;
	lines = 0;
	total = 0;
	while (str[total] != '\0')
	{
		lines++;
		while (str[total] != '\n')
		{
			columns++;
			total++;
		}
		if (columns != 4 && lines % 5 != 0)
			return (0);
		total++;
		columns = 0;
	}
	if (lines < 4)
		return (0);
	return (1);
}
