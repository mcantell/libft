/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcantell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:36:04 by mcantell          #+#    #+#             */
/*   Updated: 2024/01/23 18:37:35 by mcantell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int	ft_atoi(const	char	*str);
void	*ft_bzero(void *s, size_t n);
void *ft_calloc(size_t count, size_t size);
int ft_isalnum(int  i);
int ft_isalpha(int  i);
int ft_isascii(int  i);
int ft_isdigit(int  i);
int ft_isprint(int  i);
char *ft_itoa(int i);
int ft_strlen(const char *str);
void *ft_memchr(const void *str, int i, size_t s);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t s);
void *ft_memmove(void *dest, const void *src, size_t s);
void *ft_memset(void *dest, int i, size_t count);
void ft_putchar_fd(char c, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
void ft_putstr_fd(char *s, int fd);
char **ft_split(char const *s, char c);
char *ft_strchr(const char *str, int i);
size_t ft_strlcpy(char *dest, const char *src, size_t s);
char *ft_strdup(const char *s1);
void ft_striteri(char *s, void (*f)(unsigned int, char*));
char *ft_strjoin(char const *s1, char const *s2);
size_t ft_strlcat(char *dest, const char *src, size_t s);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
int ft_strncmp(const char *str1, const char *str2, size_t s);
char *ft_strnstr(const char *h, const char *n, size_t lenh);
char *ft_strrchr(const char *str, int i);
char *ft_strtrim(char const *s1, char const *set);
char *ft_substr(char const *s, unsigned int start, size_t len);
int ft_tolower(int  i);
int ft_toupper(int  i);
typedef struct s_list
{
	void *content;
	struct s_list *next;
}				t_list;
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstnew(void *content);
int	ft_lstsize(t_list *lst);