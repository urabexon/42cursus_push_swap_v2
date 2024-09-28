/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_result.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 20:39:40 by hurabe            #+#    #+#             */
/*   Updated: 2024/09/28 18:07:45 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	put_error(void)
{
	ft_putstr_fd("Error\n", 2);
	return (1);
}

//void	put_bonus_result(t_list **la, t_list **lb, int size)
//{
//	if (check_order(size, la) && !list_size(lb))
//		ft_putstr_fd("OK\n", 1);
//	else
//		ft_putstr_fd("KO\n", 1);
//}
