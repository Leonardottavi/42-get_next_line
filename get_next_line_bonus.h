/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lottavi <lottavi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:08:16 by lottavi           #+#    #+#             */
/*   Updated: 2023/02/01 17:08:25 by lottavi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100
# endif

typedef struct s_list
{
	struct s_list	*first;
	int				fd;
	char			*buff;
	struct s_list	*next;
}					t_clist;

size_t	ft_strlen(char *s);
int		ft_find_line(char *s);
char	*ft_strmerge(char *buff, char *tmp_buff);
char	*ft_return_line(char *buff);
char	*ft_prepare_next(char *buff);
char	*get_next_line(int fd);
char	*ft_recover(int fd, char *buff);

#endif
