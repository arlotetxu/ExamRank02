/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ExamRank02_Prep.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:09:36 by jflorido          #+#    #+#             */
/*   Updated: 2023/01/20 08:55:33 by arlo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXAMRANK02_PREP_EXAMRANK02_PREP_H
#  define EXAMRANK02_PREP_EXAMRANK02_PREP_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>

typedef struct s_list
{
	void			*content;
	struct 	s_list	*next;
} 					t_list;

//put your function headers here
int		ft_isalpha(int c);
int		ft_isdigit(int n);
int		ft_isalnum(int n);
int		ft_isascii(int n);
int		ft_isprint(int n);
size_t	ft_strlen(const char *s);
char 	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len); //TODO Check code. No controls if the number of bytes to write are greater than the source or destination
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n); //TODO Check code. No control if the number of bytes to read are more than strings length.
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize); // TODO No same result between original and created function
int		ft_toupper(int c);
int		ft_toupper(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n); // TODO error in arm64. To check in x86 architecture
char	*ft_strnstr(const char *h, const char *n, size_t len);
char 	*ft_strdup(const char *s1);
int		ft_atoi(const char *str);
char	*ft_itoa(int n);
void 	*ft_calloc(size_t count, size_t size);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s1, char const *set);
void	ft_Double_pt(void);
void	ft_bzero(void *s, size_t n);
char 	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
void	ft_print_reversed(char *str);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_largest_nb(int *list, int len);
void 	quicksort(int vector[],int inf, int sup);
int		ft_swap_2digits_nb(int nb);
void	ft_reverse_nb(int nb);
void	ft_check_amstrong(int nb);
char	*ft_convert_nb_to_binary(int nb);
int		ft_binary_to_dec(char binario[]); //TODO Chequear operaciones con bits
int 	ft_sum_recursive(int start, int end);
void	ft_print_array_recursive(char *str, int start, int len);
unsigned long long ft_factorial_recursive(int nb);
void	ft_swap_values_pointer(int *i, int *j);
#  endif