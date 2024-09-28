/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_rr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 18:31:49 by hurabe            #+#    #+#             */
/*   Updated: 2024/09/28 17:46:49 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rra(t_list **la, int select)
{
	if (!(*la))
		return ;
	func_rr(la);
	if (select == MANDATORY)
		write(1, "rra\n", 4);
}

void	rrb(t_list **lb, int select)
{
	if (!(*lb))
		return ;
	func_rr(lb);
	if (select == MANDATORY)
		write(1, "rrb\n", 4);
}

void	rrr(t_list **la, t_list **lb, int select)
{
	if (!(*la) || !(*lb))
		return ;
	func_rr(la);
	func_rr(lb);
	if (select == MANDATORY)
		write(1, "rrr\n", 4);
}
