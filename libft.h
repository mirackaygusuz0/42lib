/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaygus <mukaygus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 15:19:36 by mukaygus          #+#    #+#             */
/*   Updated: 2025/06/21 18:50:26 by mukaygus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
void ft_putchar_fd(char c, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
void ft_putstr_fd(char *s, int fd);
char *ft_substr(char const *s, unsigned int start, size_t len);
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
char	*ft_strtrim(char const *s1, char const *set);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char	*ft_itoa(int n);

#endif