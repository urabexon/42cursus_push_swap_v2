/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 19:40:26 by hurabe            #+#    #+#             */
/*   Updated: 2024/09/29 18:16:27 by hurabe           ###   ########.fr       */
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
# define FALSE 0
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
t_list	*ft_lstnew(int num);
int		ft_lstsize(t_list **lst);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst);

//command process items
void	sa(t_list **la, int select);
void	sb(t_list **lb, int select);
void	ss(t_list **la, t_list **lb, int select);
void	pa(t_list **lst1, t_list **lst2, int select);
void	pb(t_list **lst1, t_list **lst2, int select);
void	ra(t_list **la, int select);
void	rb(t_list **lb, int select);
void	rr(t_list **la, t_list **lb, int select);
void	rra(t_list **la, int select);
void	rrb(t_list **lb, int select);
void	rrr(t_list **la, t_list **lb, int select);

// node_hundling
void	func_s(t_list **lst);
void	func_p(t_list **lst1, t_list **lst2);
void	func_r(t_list **lst);
void	func_rr(t_list **lst);

// check
int		check_argv(int i, char **argv);
int		check_atoi(char *str);
int		check_double(t_list **la);
int		check_order(int size, t_list **la);
int		check_index(t_list **lst, int index, int size);

// put_result
int		put_error(void);

// make_stack
int		set_stack(t_list **la, int argc, char **argv);
int		make_stack(t_list **la, int argc, char **argv);
int		set_new_node(t_list **la, char *str);

// compression
void	compression(t_list **la, int size);

// sort_start
void	sort_start(int size, t_list **la);
void	sort_start_3(t_list **la);
void	sort_start_4(t_list **la, t_list **lb, int index);
void	sort_start_5(t_list **la, t_list **lb);
void	sort_start_6_to_20(t_list **la, t_list **lb, int size);
void	sort_start_x(t_list **la, t_list **lb, int size);
void	sort_start_pb(t_list **la, t_list **lb, int size, int range);
void	marge_or_not(t_list **la, t_list **lb, int range);
void	rotate_j(t_list **la, t_list **lb, int j);
void	rev_rotate_j(t_list **la, t_list **lb, int j);

#endif