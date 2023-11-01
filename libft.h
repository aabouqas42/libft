/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:37:38 by aabouqas          #+#    #+#             */
/*   Updated: 2023/11/01 19:13:19 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <stdlib.h>


int ft_isascii(int c);
int ft_isalnum(int c);
int ft_idigit(int c);
int ft_isalpha(int c);
size_t ft_strlen(const char *s);
int ft_isprint(int c);
void *ft_memset(void *b, int c, size_t len);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
int	ft_atoi(const char *str);
void ft_bzero(void *s, size_t n);
char *ft_strrchr(const char *s, int c);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t len);
size_t ft_strlcpy(char *dest, const char *src, size_t dstsize);
void *ft_calloc(size_t count, size_t size);
char *ft_strdup(const char *s1);

#endif /* LIBFT_H */
