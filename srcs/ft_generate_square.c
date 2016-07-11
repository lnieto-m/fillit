/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generate_square.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubard <jaubard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 17:16:57 by jaubard           #+#    #+#             */
/*   Updated: 2015/12/16 12:37:59 by jaubard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header_fillit.h"

char	*ft_generate_square(int size)
{
	char	*square;
	int		height;
	int		length;
	int		i;

	i = 0;
	length = 0;
	height = 0;
	if (!(square = (char *)malloc(sizeof(char *) * BUF_SIZE)))
		return (NULL);
	while (height < size)
	{
		while (length < size)
		{
			square[i++] = '.';
			length++;
		}
		square[i++] = '\n';
		length = 0;
		height++;
	}
	square[i] = '\0';
	return (square);
}
