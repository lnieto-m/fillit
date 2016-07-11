/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubard <jaubard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 16:25:00 by jaubard           #+#    #+#             */
/*   Updated: 2015/12/16 14:40:28 by jaubard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header_fillit.h"

int		ft_errors(char *str)
{
	if (ft_strlen(str) > BUF_SIZE - 1)
		return (0);
	if (ft_check_strings(str) == 0 || ft_check_dimensions(str) == 0 ||
	ft_check_spaces(str) == 0 || ft_is_tetrimino(str) == 0)
		return (0);
	return (1);
}
