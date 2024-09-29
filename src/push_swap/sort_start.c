/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_start.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 21:12:54 by hurabe            #+#    #+#             */
/*   Updated: 2024/09/29 16:18:34 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_start(int size, t_list **la)
{
	t_list	*lb;

	lb = NULL;
	if (size == 2)
	{
		if ((*la)->index > (*la)->next->index)
			sa(la, MANDATORY);
	}
	else if (size == 3)
		sort_start_3(la);
	else if (size == 4)
		sort_start_4(la, &lb, 0);
	else if (size == 5)
		sort_start_5(la, &lb);
	else if (size > 5 && size < 20)
		sort_start_6_to_20(la, &lb, size);
	else
		sort_start_x(la, &lb, size);
}
