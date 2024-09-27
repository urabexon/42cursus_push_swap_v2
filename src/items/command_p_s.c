/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_p_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 21:16:03 by hurabe            #+#    #+#             */
/*   Updated: 2024/09/27 18:21:26 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	sa(t_list **la, int select)
{
	if (!(*la))
		return ;
	func_s(la);
	if (select == MANDATORY)
		write(1, "sa\n", 3);
}

void	sb(t_list **lb, int select)
{
	if (!(*lb))
		return ;
	func_s(lb);
	if (select == MANDATORY)
		write(1, "sb\n", 3);
}

void	ss(t_list **la, t_list **lb, int select)
{
	if (!(*la) || !(*lb))
		return ;
	func_s(la);
	func_s(lb);
	if (select == MANDATORY)
		write(1, "ss\n", 3);
}

void	pa(t_list **lst1, t_list **lst2, int select)
{
	if (!(*lst1))
		return ;
	func_p(lst1, lst2);
	if (select == MANDATORY)
		write(1, "pa\n", 3);
}

void	pb(t_list **lst1, t_list **lst2, int select)
{
	if (!(*lst1))
		return ;
	func_p(lst1, lst2);
	if (select == MANDATORY)
		write(1, "pb\n", 3);
}
