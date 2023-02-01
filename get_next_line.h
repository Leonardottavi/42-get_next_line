/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lottavi <lottavi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:06:34 by lottavi           #+#    #+#             */
/*   Updated: 2023/02/01 17:06:43 by lottavi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100
# endif

size_t	ft_strlen(char *s);
int		ft_find_line(char *s);
char	*ft_strmerge(char *buff, char *tmp_buff);
char	*ft_return_line(char *buff);
char	*ft_prepare_next(char *buff);
char	*get_next_line(int fd);
char	*ft_recover(int fd, char *buff);

#endif
