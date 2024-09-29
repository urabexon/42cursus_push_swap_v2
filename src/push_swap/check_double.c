/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_double.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:29:11 by hurabe            #+#    #+#             */
/*   Updated: 2024/09/29 17:22:09 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	check_double(t_list **la)
{
	t_list	*i;
	t_list	*j;
	int		count;

	i = *la;
	while (1)
	{
		count = 0;
		j = *la;
		while (1)
		{
			if (i->num == j->num)
				count++;
			j = j->next;
			if (j == *la)
				break ;
		}
		if (count > 1)
			return (FALSE);
		i = i->next;
		if (i == *la)
			break ;
	}
	return (TRUE);
}
