/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_start_x.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 19:05:30 by hurabe            #+#    #+#             */
/*   Updated: 2024/09/28 17:50:05 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_start_x(t_list **la, t_list **lb, int size)
{
	int	i;
	int	j;
	int	range;

	if (size <= 200)
		range = size / 10;
	else
		range = size / 12;
	sort_start_pb(la, lb, size, range);
	i = 0;
	while (i < size)
	{
		j = check_index(lb, size - 1 - i, size - i);
		if (j <= (size - i) / 2)
			rotate_j(la, lb, j);
		else
			rev_rotate_j(la, lb, (size - i) - j);
		i++;
	}
}

void	sort_start_pb(t_list **la, t_list **lb, int size, int range)
{
	int	max;
	int	sub_range;

	if (!(*la))
		return ;
	sub_range = range * 0.8;
	max = INT_MIN;
	while (size)
	{
		if ((*la)->index < range)
		{
			pb(la, lb, MANDATORY);
			if ((*lb)->index > max)
				max = (*lb)->index;
			if ((*lb)->index < max - sub_range)
				marge_or_not(la, lb, range);
			else if ((*lb)->index < (*lb)->next->index)
				sb(lb, MANDATORY);
			range++;
			size--;
		}
		else
			ra(la, MANDATORY);
	}
}

void	marge_or_not(t_list **la, t_list **lb, int range)
{
	if (*la && (*la)->index && !((*la)->index < range))
		rr(la, lb, MANDATORY);
	else
		rb(lb, MANDATORY);
}

void	rotate_j(t_list **la, t_list **lb, int j)
{
	while (j--)
		rb(lb, MANDATORY);
	pa(la, lb, MANDATORY);
}

void	rev_rotate_j(t_list **la, t_list **lb, int j)
{
	while (j--)
		rrb(lb, MANDATORY);
	pa(lb, la, MANDATORY);
}
