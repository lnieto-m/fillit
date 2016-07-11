/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_end_list.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubard <jaubard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 16:07:40 by jaubard           #+#    #+#             */
/*   Updated: 2015/12/16 11:31:24 by jaubard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header_fillit.h"

t_id	*ft_add_end_list(t_id *lst, int position, int w, char *str)
{
	t_id	*new_elem;
	t_id	*tmp;

	tmp = lst;
	if (!(new_elem = (t_id *)malloc(sizeof(t_id))))
		return (NULL);
	new_elem->o = 0;
	ft_pos_generator(new_elem, str, w);
	new_elem->position = position;
	new_elem->next = NULL;
	if (lst == NULL)
		return (new_elem);
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_elem;
	}
	return (lst);
}
