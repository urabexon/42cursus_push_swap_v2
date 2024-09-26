/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 19:40:26 by hurabe            #+#    #+#             */
/*   Updated: 2024/09/26 20:42:55 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// include
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>
# include <stdbool.h>
# include <math.h>

// define
# define TRUE 1
# define FALSE 2
# define MANDATORY	1
# define BONUS		2

// struct
typedef struct s_list
{
	struct s_list	*pre;
	struct s_list	*next;
	int				num;
	int				index;
}				t_list;

// libft
int		ft_atoi(const char *str);
long	ft_atol(char *str);
int		ft_isdigit(int c);
int		ft_isint(long num);
int		ft_issign(char c);
int		ft_isspace(char c);
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *s);
char	**ft_split(char const *s, char c);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
t_list	*ft_lstnew(int num);
int		ft_lstsize(t_list **lst);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst);


//command process function
//スタックを操作するコマンド関数
//void	push(t_dst **send, t_dst **recieve);
//void	reverse_rotate(t_dst **dst);
//void	rotate(t_dst **dst);
//void	swap(t_dst **dst);

//command process items
//スタックを操作するコマンド関数
void	sa(t_dst **a);
void	sb(t_dst **b);
void	ss(t_dst **a, t_dst **b);
void	pa(t_dst **a, t_dst **b);
void	pb(t_dst **a, t_dst **b);
void	ra(t_dst **a);
void	rb(t_dst **b);
void	rr(t_dst **a, t_dst **b);
void	rra(t_dst **a);
void	rrb(t_dst **b);
void	rrr(t_dst **a, t_dst **b);

//error
//エラーチェック
int		output_error(void);
void	error_component(char **stk, char **argv, int i);
int		is_argv_error(char **argv);

//coordinate press
//座標圧縮、値の範囲を縮めて基数ソートの効率を図る
//int		partition(long *arr, int low, int high);
//void	quicksort(long *arr, int low, int high);
//long	*sort(char **argv, int len);
long	*coordinate_press(char **argv, int len);

// init_dst
void	init_dst(t_dst **a, t_dst **b, char **argv, t_config *conf);
int		is_ascending(t_dst **a);
int		is_descending(t_dst **b);

// ps_isfunction
void	three_arg(char **argv, t_dst **a, t_dst **b);
int		is_swap(t_dst **a, t_dst **b);
int		is_rotate(t_dst **a, t_dst **b);
void	let_go(t_dst **a, t_dst **b, int is_swap, int is_rotate);
int		alg_1(t_dst **a, t_dst **b);

//radix sort
//基数ソート本体、スタックA（t_dst **a）をソートし、必要に応じてスタックB（t_dst **b）を使用してデータの移動を行う
//long	get_top(t_dst *dst);
void	radix_sort(t_dst **a, t_dst **b, t_config *conf);

// sep_pivot
long	get_pivot_n(char **argv);
void	sep_pivot(char **argv, t_dst **a, t_dst **b, long pivot_num);

// kim
int		split_argv(char ***strs, char **argv, char *sep);
int		is_valid(char **strs);


//main
int		count_argv(char **argv);
void	many_pb(t_dst **a, t_dst **b);
int		under_5_argv(t_dst **a, t_dst **b, char **argv, t_config *conf);

//
void push_smallest_to_b(t_dst **a, t_dst **b);
void four_arg(char **argv, t_dst **a, t_dst **b);
void five_arg(char **argv, t_dst **a, t_dst **b);
void six_arg(char **argv, t_dst **a, t_dst **b);

#endif