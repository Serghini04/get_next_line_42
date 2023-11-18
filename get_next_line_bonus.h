/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 13:01:21 by meserghi          #+#    #+#             */
/*   Updated: 2023/11/17 13:19:51 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

int		ft_check(char *str);
char	*get_next_line(int fd);
char	*next_line(char *str);
char	*get_res(char *str);
char	*ft_get_line(int fd, char *res);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_fill(char *s1, char *s2, char *res);
int		ft_strlen(char *s);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_finito(char *s1, char *s2);

#endif