/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_tetrimino.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubard <jaubard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 11:08:09 by jaubard           #+#    #+#             */
/*   Updated: 2015/12/16 12:39:18 by jaubard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header_fillit.h"

static int	ft_tetriminus_2(char *str, int i)
{
	char	c;
	int		j;

	j = i;
	c = '#';
	while (i < j + 20)
	{
		if (str[i] == c)
		{
			if ((str[i + 4] == c && str[i + 5] == c && str[i + 10] == c)
				|| (str[i + 5] == c && str[i + 6] == c && str[i + 10] == c)
				|| (str[i + 5] == c && str[i + 10] == c && str[i + 11] == c)
				|| (str[i + 5] == c && str[i + 9] == c && str[i + 10] == c)
				|| (str[i + 1] == c && str[i + 5] == c && str[i + 10] == c)
				|| (str[i + 3] == c && str[i + 4] == c && str[i + 5] == c)
				|| (str[i + 5] == c && str[i + 6] == c && str[i + 7] == c)
				|| (str[i + 1] == c && str[i + 2] == c && str[i + 5] == c)
				|| (str[i + 1] == c && str[i + 2] == c && str[i + 7] == c)
				|| (str[i + 1] == c && str[i + 2] == c && str[i + 6] == c)
				|| (str[i + 4] == c && str[i + 5] == c && str[i + 6] == c))
				return (1);
		}
		i++;
	}
	return (0);
}

static int	ft_tetriminus(char *str, int i)
{
	char	c;
	int		j;

	j = i;
	c = '#';
	while (i < j + 20)
	{
		if (str[i] == c)
		{
			if ((str[i + 5] == c && str[i + 10] == c && str[i + 15] == c)
				|| (str[i + 1] == c && str[i + 2] == c && str[i + 3] == c)
				|| (str[i + 1] == c && str[i + 5] == c && str[i + 6] == c)
				|| (str[i + 1] == c && str[i + 6] == c && str[i + 7] == c)
				|| (str[i + 4] == c && str[i + 5] == c && str[i + 9] == c)
				|| (str[i + 1] == c && str[i + 4] == c && str[i + 5] == c)
				|| (str[i + 1] == c && str[i + 6] == c && str[i + 11] == c)
				|| (str[i + 5] == c && str[i + 6] == c && str[i + 11] == c)
				|| ft_tetriminus_2(str, j) == 1)
				return (1);
		}
		i++;
	}
	return (0);
}

static int	ft_is_quad_tetri(char *str, size_t j)
{
	int		i;
	size_t	k;

	k = j;
	i = 0;
	while (j < k + 20)
	{
		if (str[j] == '#')
		{
			if (i > 3)
				return (0);
			i++;
		}
		j++;
	}
	if (i != 4)
		return (0);
	return (1);
}

int			ft_is_tetrimino(char *str)
{
	size_t	j;

	j = 0;
	while (j < ft_strlen(str) - 1)
	{
		if (ft_is_quad_tetri(str, j) == 0 || ft_tetriminus(str, j) == 0)
			return (0);
		j = j + 21;
	}
	return (1);
}
