/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:00:15 by jvalenci          #+#    #+#             */
/*   Updated: 2021/11/10 10:37:12 by jvalenci         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#define BOOL(x) (x == 1 ? printf(GREEN("ok\n")) : printf(RED("ko\n")))
#define GET_FILE "test.txt"

/* HEADERS */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/* PRINTING WITH COLORS */
#define BLACK(string) "\033[1;30m" string "\033[0m"
#define GRAY(string) "\033[1;38;5;8m" string "\033[0m"
#define L_GRAY(string) "\033[1;38;5;245m" string "\033[0m"
#define RED(string) "\033[1;31m" string "\033[0m"
#define L_RED(string) "\033[1;38;5;9m" string "\033[0m"
#define GREEN(string) "\033[1;32m" string "\033[0m"
#define D_GREEN(string) "\033[1;38;5;22m" string "\033[0m"
#define V_GREEN(string) "\033[1;38;5;82m" string "\033[0m"
#define PETROL_G(string) "\033[1;38;5;23m" string "\033[0m"
#define PETROL_B(string) "\033[1;38;5;24m" string "\033[0m"
#define YELLOW(string) "\033[1;33m" string "\033[0m"
#define V_YELLOW(string) "\033[1;33m" string "\033[0m"
#define L_YELLOW(string) "\033[1;38;5;191m" string "\033[0m"
#define BLUE(string) "\033[1;34m" string "\033[0m"
#define V_BLUE(string) "\033[1;38;5;27m" string "\033[0m"
#define VIOLET(string) "\033[1;35m" string "\033[0m"
#define PINK(string) "\033[1;38;5;199m" string "\033[0m"
#define LILAC(string) "\033[1;38;5;13m" string "\033[0m"
#define PURPLE(string) "\033[1;38;5;93m" string "\033[0m"
#define CYAN(string) "\033[1;36m" string "\033[0m"
#define V_CYAN(string) "\033[1;38;5;44m" string "\033[0m"
#define ORANGE(string) "\033[1;38;5;166m" string "\033[0m"
#define V_ORANGE(string) "\033[1;38;5;202m" string "\033[0m"
#define WHITE(string) "\033[1;37m" string "\033[0m"

/* FUCTIONS PROTOTYPES */

void *ft_memset(void *s, int c, size_t len);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
size_t ft_strlen(const char *s);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);
char *ft_strchr(const char *s, int c);
int ft_toupper(int c);
int ft_tolower(int c);
int ft_memcmp(const void *s1, const void *s, size_t n);
char *ft_strrchr(const char *s, int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strnstr(const char *little, const char *big, int n);
int ft_atoi(const char *str);
char *ft_strdup(const char *s);
void *ft_calloc(size_t nmemb, size_t size);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_itoa(int n);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);
char **ft_split(char const *s, char c);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void ft_striteri(char *s, void (*f)(unsigned int, char*));
void ft_putchar_fd(char c, int fd);
#endif
