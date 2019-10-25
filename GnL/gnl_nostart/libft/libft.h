/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: prouvoet <prouvoet@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/21 17:31:35 by prouvoet       #+#    #+#                */
/*   Updated: 2019/04/10 17:40:36 by prouvoet      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstnew(const void *content, size_t content_size);
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
size_t				ft_strlen(const char *str);
size_t				ft_intlen(int n);
size_t				ft_strlcpy(char *dst, const char *src, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t n);
void				ft_putnbr(int n);
void				ft_putnbr_fd(int n, int fd);
void				ft_putchar(char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr(char const *str);
void				ft_putstr_fd(char const *str, int fd);
void				ft_putendl(char const *str);
void				ft_putendl_fd(char const *s, int fd);
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_striter(char *str, void (*f)(char *));
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void				ft_striteri(char *str, void (*f)(unsigned int, char *));
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_strclr(char *str);
void				ft_bzero(void *s, size_t n);
void				ft_memdel(void **ap);
void				ft_strdel(char **as);
void				*ft_memalloc(size_t size);
void				*ft_memset(void *b, int c, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t n);
char				*ft_itoa(int a);
char				*ft_strnew(size_t size);
char				*ft_strtrim(char const *str);
char				*ft_strdup(const char *str);
char				*ft_strstr(const char *haystack, const char *needle);
char				*ft_strnstr(const char *hstack, const char *ndle, size_t n);
char				*ft_strsub(const char *str, unsigned int start, size_t lg);
char				*ft_strchr(const char *str, int c);
char				*ft_strrchr(const char *str, int c);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strncpy(char *dest, const char *src, size_t lg);
char				*ft_strcat(char *str1, const char *str2);
char				*ft_strncat(char *str1, const char *str2, size_t n);
char				*ft_strjoin(const char *str1, const char *str2);
char				*ft_strmap(const char *str, char (*f)(char));
char				*ft_strmapi(const char *str, char (*f)(unsigned int, char));
char				**ft_strsplit(const char *str, char c);
int					ft_isdigit(int c);
int					ft_isalpha(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_isspace(int c);
int					ft_issspace(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
int					ft_atoi(const char *str);
int					ft_strequ(const char *str1, const char *str2);
int					ft_strnequ(const char *str1, const char *str2, size_t n);
int					ft_strcmp(const char *str1, const char *str2);
int					ft_strncmp(const char *str, const char *str2, size_t n);
int					ft_memcmp(const void *str1, const void *str2, size_t n);

#endif
