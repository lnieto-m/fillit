/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolution.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubard <jaubard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 10:55:24 by jaubard           #+#    #+#             */
/*   Updated: 2015/12/16 14:40:09 by jaubard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header_fillit.h"

static int	ft_real_resolve(char *square, t_id *piece)
{
	t_id	*tmp;
	size_t	i;

	i = 0;
	tmp = piece;
	while (i < ft_strlen(square))
	{
		if (ft_draw(square, tmp, i) == 0)
			return (0);
		i = tmp->o + 1;
		if (tmp->next == NULL && i != 0)
			return (1);
		if (ft_real_resolve(square, tmp->next) == 1)
			return (1);
		ft_delete_piece(square, tmp);
	}
	return (0);
}

int			ft_resolution(t_id *lst)
{
	char	*square;
	int		ret;
	int		i;

	i = ft_min_square(lst);
	ret = 0;
	square = NULL;
	while (ret == 0)
	{
		square = ft_generate_square(i);
		if (!square)
			;
		else
		{
			ret = ft_real_resolve(square, lst);
			i++;
			free(square);
		}
	}
	ft_putstr(square);
	return (0);
}
