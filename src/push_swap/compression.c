/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compression.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 21:01:44 by hurabe            #+#    #+#             */
/*   Updated: 2024/09/28 17:49:29 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	compression(t_list **la, int size)
{
	t_list		*i;
	t_list		*j;
	int			size_i;
	int			size_j;

	i = *la;
	size_i = 0;
	while (size_i < size)
	{
		j = (*la)->pre;
		size_j = 0;
		while (size_j < size)
		{
			if (i->num > j->num)
				(i->index)++;
			j = j->next;
			size_j++;
		}
		i = i->next;
		size_i++;
	}
}
