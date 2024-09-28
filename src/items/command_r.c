/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_r.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 18:25:04 by hurabe            #+#    #+#             */
/*   Updated: 2024/09/28 17:46:46 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ra(t_list **la, int select)
{
	if (!(*la))
		return ;
	func_r(la);
	if (select == MANDATORY)
		write(1, "ra\n", 3);
}

void	rb(t_list **lb, int select)
{
	if (!(*lb))
		return ;
	func_r(lb);
	if (select == MANDATORY)
		write(1, "rb\n", 3);
}

void	rr(t_list **la, t_list **lb, int select)
{
	if (!(*la) || !(*lb))
		return ;
	func_r(la);
	func_r(lb);
	if (select == MANDATORY)
		write(1, "rr\n", 3);
}
