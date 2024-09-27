/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_start_5.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 19:05:24 by hurabe            #+#    #+#             */
/*   Updated: 2024/09/27 20:03:37 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	sort_start_5(t_list **la, t_list **lb)
{
	int	order;

	order = check_index(la, 0, 5);
	if (order == 1 || order == 2)
	{
		while (order > 0)
		{
			ra(la, MANDATORY);
			order--;
		}
	}
	else if (order == 3 || order == 4)
	{
		while (order < 5)
		{
			rra(la, MANDATORY);
			order++;
		}
	}
	pb(la, lb, MANDATORY);
	sort_start_4(la, lb, 1);
	pa(lb, la, MANDATORY);
}
