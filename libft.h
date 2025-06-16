/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaygus <mukaygus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 15:19:36 by mukaygus          #+#    #+#             */
/*   Updated: 2025/06/01 17:05:25 by mukaygus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <stdlib.h>
int ft_isalnum(int n);
int	ft_isalpha(int c);
int ft_isascii(int n);
int	ft_isdigit(int n);
int ft_isprint(int n);
int ft_atoi(const char *str);
void ft_bzero(void *s, size_t n);
size_t	ft_strlcat(char *dest, char *src, size_t size);
size_t	ft_strlcpy(char *dest, char *src, size_t size);
size_t	ft_strlen(char *str);
char    *ft_strchr(const char *s, int c);
char *strnstr(const char *haystack, const char *needle, size_t len);
char *strnstr(const char *haystack, const char *needle, size_t len);
char *ft_strrchr(const char *s, int c);
char *ft_strdup(const char *src);
int	ft_strncmp(char *s1, char *s2, size_t n);
int ft_tolower(int n);
int ft_toupper(int n);
void *memchr(const void *s, int c, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
void *memcpy(void *dest, const void *src, size_t n);
void *memmove(void *dest, const void *src, size_t n);
void *memset(void *s, int c, size_t n);
#endif