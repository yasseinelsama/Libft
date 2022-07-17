/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymohamed <ymohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 16:07:33 by ymohamed          #+#    #+#             */
/*   Updated: 2022/07/17 18:12:53 by ymohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

typedef unsigned long	t_s;

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
t_s		ft_strlen(const char *s);
void	*ft_memset(void *b, int c, t_s len);
void	ft_bzero(void *s, t_s n);
void	*ft_memcpy(void *d, const void *s, t_s n);
void	*ft_memmove(void *d, const void *s, t_s n);
t_s		ft_strlcpy(char *d, const char *s, t_s k);
t_s		ft_strlcat(char *dst, const char *src, t_s dsize);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, t_s n);
void	*ft_memchr(const void *s, int c, t_s n);
int		ft_memcmp(const void *s1, const void *s2, t_s n);
char	*ft_strnstr(const char *haystack, const char *needle, t_s len);
#endif