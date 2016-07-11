/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_spaces.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubard <jaubard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 11:43:21 by jaubard           #+#    #+#             */
/*   Updated: 2015/12/16 14:40:48 by jaubard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header_fillit.h"

int		ft_check_spaces(char *str)
{
	size_t	i;

	i = 20;
	if (ft_strlen(str) < 20)
		return (1);
	while (i < ft_strlen(str))
	{
		if (str[i] == '\n' && str[i + 1] == '\0')
			return (0);
		if (str[i] != '\n')
			return (0);
		i = i + 21;
	}
	return (1);
}
