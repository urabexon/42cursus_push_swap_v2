/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_start_3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 19:05:16 by hurabe            #+#    #+#             */
/*   Updated: 2024/09/27 19:16:53 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	sort_start_3(t_list **la)
{
	int	index1;
	int	index2;

	index1 = (*la)->next->index;
	index2 = (*la)->next->next->index;
	if ((*la)->index < index2 && index2 < index1)
	{
		sa(la, MANDATORY);
		ra(la, MANDATORY);
	}
	else if (index1 < (*la)->index && (*la)->index < index2)
		sa(la, MANDATORY);
	else if (index2 < (*la)->index && (*la)->index < index1)
		rra(la, MANDATORY);
	else if (index2 < index1 && index1 < (*la)->index)
	{
		ra(la, MANDATORY);
		sa(la, MANDATORY);
	}
	else if (index1 < index2 && index2 < (*la)->index)
		ra(la, MANDATORY);
}
