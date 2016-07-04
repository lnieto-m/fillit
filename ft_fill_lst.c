/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_lst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubard <jaubard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 13:10:50 by jaubard           #+#    #+#             */
/*   Updated: 2015/12/16 14:40:21 by jaubard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header_fillit.h"

t_id	*ft_fill_lst(char *str)
{
	t_id	*lst;
	int		pos;
	size_t	i;

	pos = 1;
	i = 0;
	lst = NULL;
	while (i < ft_strlen(str))
	{
		lst = ft_add_end_list(lst, pos, i, str);
		i = i + 21;
		pos++;
	}
	return (lst);
}
