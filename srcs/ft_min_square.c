/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_square.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubard <jaubard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 11:12:32 by jaubard           #+#    #+#             */
/*   Updated: 2015/12/16 12:38:21 by jaubard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header_fillit.h"

int		ft_min_square(t_id *lst)
{
	t_id	*tmp;
	int		i;

	i = 0;
	tmp = lst;
	while (tmp->next != NULL)
		tmp = tmp->next;
	while ((tmp->position * 4) > i * i)
		i++;
	return (i);
}
