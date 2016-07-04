/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubard <jaubard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 10:46:46 by jaubard           #+#    #+#             */
/*   Updated: 2015/12/17 17:37:42 by lnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header_fillit.h"

int		main(int argc, char **argv)
{
	int		fd;
	char	*str;
	t_id	*lst;

	fd = open(argv[1], O_RDONLY);
	if (!(str = (char *)malloc(sizeof(*str) * BUF_SIZE + 1)))
	{
		ft_putstr("error\n");
		exit(EXIT_FAILURE);
	}
	if (argc != 2 || read(fd, str, BUF_SIZE) == -1 || ft_errors(str) == 0)
	{
		ft_putstr("error\n");
		exit(EXIT_FAILURE);
	}
	lst = ft_fill_lst(str);
	ft_resolution(lst);
	ft_delete_lst(lst);
	free(str);
	close(fd);
	exit(EXIT_SUCCESS);
}
