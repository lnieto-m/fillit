/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete_lst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubard <jaubard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 15:22:58 by jaubard           #+#    #+#             */
/*   Updated: 2015/12/16 12:35:56 by jaubard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header_fillit.h"

t_id	*ft_delete_lst(t_id *lst)
{
	t_id	*tmp;
	t_id	*tmp_next;

	tmp_next = NULL;
	tmp = lst;
	while (tmp != NULL)
	{
		tmp_next = tmp->next;
		free(tmp);
		tmp = tmp_next;
	}
	return (NULL);
}
