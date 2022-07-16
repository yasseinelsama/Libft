/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymohamed <ymohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 16:07:33 by ymohamed          #+#    #+#             */
/*   Updated: 2022/07/15 19:55:26 by ymohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_strlen(char *str);
void	*ft_memset(void *b, int c, unsigned long len);
void	ft_bzero(void *s, unsigned long n);
void	*ft_memcpy(void *restrict d, const void *restrict s, unsigned long n);
void	*ft_memmove(void *d, const void *s, unsigned long n);
#endif