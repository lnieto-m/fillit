/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header_fillit.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubard <jaubard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 10:56:57 by jaubard           #+#    #+#             */
/*   Updated: 2015/12/18 10:27:49 by jaubard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_FILLIT_H
# define HEADER_FILLIT_H
# define BUF_SIZE 546

# include "libft.h"
# include <stdlib.h>
# include <fcntl.h>

typedef struct		s_id
{
	int				position;
	int				o;
	int				x;
	int				y;
	int				z;
	struct s_id		*next;
}					t_id;

int					ft_errors(char *str);
int					ft_check_strings(char *str);
int					ft_check_dimensions(char *str);
int					ft_check_spaces(char *str);
int					ft_diff(char *square, int i, t_id *lst);
int					ft_draw(char *square, t_id *piece, int i);
int					ft_min_square(t_id *lst);
int					ft_resolution(t_id *lst);
int					ft_is_tetrimino(char *str);
char				*ft_generate_square(int size);
void				ft_pos_generator(t_id *lst, char *str, int pos);
void				ft_delete_piece(char *square, t_id *piece);
t_id				*ft_add_end_list(t_id *lst, int position, int w, char *str);
t_id				*ft_fill_lst(char *str);
t_id				*ft_delete_lst(t_id *lst);

#endif
