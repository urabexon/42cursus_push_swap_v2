/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_start_6_to_20.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 19:05:27 by hurabe            #+#    #+#             */
/*   Updated: 2024/09/27 20:07:42 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	sort_start_6_to_20(t_list **la, t_list **lb, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if ((*la)->index == i)
		{
			pb(la, lb, MANDATORY);
			i++;
		}
		else
			ra(la, MANDATORY);
	}
	while (i > 0)
	{
		pa(lb, la, MANDATORY);
		i--;
	}
}
