/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_index.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 19:53:19 by hurabe            #+#    #+#             */
/*   Updated: 2024/09/28 17:49:21 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	check_index(t_list **lst, int index, int size)
{
	t_list	*ptr;
	int		order;

	ptr = *lst;
	order = 0;
	while (order < size)
	{
		if (ptr->index == index)
			return (order);
		else
			ptr = ptr->next;
		order++;
	}
	return (-1);
}
