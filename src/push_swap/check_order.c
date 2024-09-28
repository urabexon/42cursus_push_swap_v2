/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_order.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 21:07:59 by hurabe            #+#    #+#             */
/*   Updated: 2024/09/28 17:49:24 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	check_order(int size, t_list **la)
{
	t_list	*ptr;

	if (!(*la))
		return (0);
	if (size == 1)
		return (1);
	ptr = *la;
	while (size > 1)
	{
		if (ptr->index + 1 == ptr->next->index)
			ptr = ptr->next;
		else
			return (0);
		size--;
	}
	if (size > 1)
		return (0);
	return (1);
}
