/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 17:58:50 by meserghi          #+#    #+#             */
/*   Updated: 2024/01/04 17:04:04 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define lBUFFER_SIZE 42
# endif

int		ft_check(char *str);
char	*get_next_line(int fd);
char	*next_line(char *str);
char	*get_res(char *str);
char	*ft_fill_res(int fd, char *res);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_fill(char *s1, char *s2, char *res);
int		ft_strlen(char *s);
char	*ft_strjoin(char *s1, char *s2);

#endif
