/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_hundling.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:48:18 by hurabe            #+#    #+#             */
/*   Updated: 2024/09/28 17:49:37 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	func_s(t_list **lst)
{
	t_list	*last;
	t_list	*second;
	t_list	*third;
	int		len;

	len = ft_lstsize(lst);
	if (len <= 1)
		return ;
	if (len == 2)
		*lst = (*lst)->next;
	else
	{
		last = (*lst)->pre;
		second = (*lst)->next;
		third = (*lst)->next->next;
		last->next = second;
		third->pre = *lst;
		(*lst)->next = third;
		(*lst)->pre = second;
		second->next = *lst;
		second->pre = last;
		*lst = second;
	}
}

void	func_p(t_list **lst1, t_list **lst2)
{
	t_list	*last;

	if (!(*lst1))
		return ;
	last = (*lst1)->pre;
	if ((*lst1)->next == *lst1)
	{
		ft_lstadd_front(lst2, *lst1);
		*lst1 = NULL;
	}
	else
	{
		last->next = (*lst1)->next;
		((*lst1)->next)->pre = last;
		ft_lstadd_front(lst2, *lst1);
		*lst1 = last->next;
	}
}

void	func_r(t_list **lst)
{
	if (!(*lst))
		return ;
	else
		*lst = (*lst)->next;
}

void	func_rr(t_list **lst)
{
	if (!(*lst))
		return ;
	else
		*lst = (*lst)->pre;
}
