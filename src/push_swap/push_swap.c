/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 19:51:39 by hurabe            #+#    #+#             */
/*   Updated: 2024/09/29 17:21:45 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*la;
	int		size;

	la = NULL;
	if (argc == 1)
		return (1);
	if (argc >= 2)
	{
		if (!check_argv(argc, argv))
			return (put_error(), 1);
		if (!set_stack(&la, argc, argv))
			return (put_error(), 1);
		size = ft_lstsize(&la);
		compression(&la, size);
		if (check_order(size, &la))
			return (ft_lstclear(&la), 0);
		sort_start(size, &la);
		return (ft_lstclear(&la), 0);
	}
}
