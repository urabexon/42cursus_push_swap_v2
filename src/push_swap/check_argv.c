/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 19:51:42 by hurabe            #+#    #+#             */
/*   Updated: 2024/09/29 17:46:42 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	check_argv(int i, char **argv)
{
	int	count;
	int	j;

	while (--i > 0)
	{
		if (!argv[i][0])
			return (FALSE);
		j = 0;
		count = 0;
		while (argv[i][j])
		{
			while (argv[i][j] && ft_isspace(argv[i][j]))
				j++;
			if (argv[i][j] && (ft_issign(argv[i][j]) || ft_isdigit(argv[i][j])))
				count += check_atoi(&argv[i][j]);
			if (ft_issign(argv[i][j]))
				j++;
			while (argv[i][j] && ft_isdigit(argv[i][j]))
				j++;
			if ((argv[i][j] && !ft_isspace(argv[i][j])) || !count)
				return (FALSE);
		}
	}
	return (TRUE);
}

int	check_atoi(char *str)
{
	if (ft_isint(ft_atol(str)))
		return (TRUE);
	else
		return (FALSE);
}
