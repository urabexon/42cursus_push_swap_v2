/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 20:49:20 by hurabe            #+#    #+#             */
/*   Updated: 2024/09/26 21:00:01 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	set_stack(t_list **la, int argc, char **argv)
{
	int	i;

	i = 0;
	if (!make_stack(la, argc, argv))
		return (FALSE);
	else if (!check_double(la))
		return (ft_lstclear(la), FALSE);
	else
		return (TRUE);
}

int	make_stack(t_list **la, int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (++i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			while (argv[i][j] && ft_isspace(argv[i][j]))
				j++;
			if (argv[i][j] && (ft_issign(argv[i][j] || ft_isdigit(argv[i][j]))))
			{
				if (!set_new_node(la, &argv[i][j++]))
					return (ft_lstclear(la), FALSE);
			}
			while (argv[i][j] && ft_isdigit(argv[i][j]))
				j++;
		}
	}
	return (TRUE);
}

int	set_new_node(t_list **la, char *str)
{
	long	num;
	t_list	*new;

	num = ft_atol(str);
	new = NULL;
	if (ft_isint(num) == 0)
		return (FALSE);
	else
	{
		new = ft_lstnew((int)num);
		if (!new)
			return (ft_lstclear(la), FALSE);
	}
	ft_lstadd_back(la, new);
	return (TRUE);
}
