/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_start_4.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 19:05:20 by hurabe            #+#    #+#             */
/*   Updated: 2024/09/28 17:49:53 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_start_4(t_list **la, t_list **lb, int index)
{
	int	order;

	order = check_index(la, index, 4);
	if (order == 1)
		ra(la, MANDATORY);
	else if (order == 2 || order == 3)
	{
		while (order < 4)
		{
			rra(la, MANDATORY);
			order++;
		}
	}
	pb(la, lb, MANDATORY);
	sort_start_3(la);
	pa(lb, la, MANDATORY);
}
