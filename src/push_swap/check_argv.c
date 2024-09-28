/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 19:51:42 by hurabe            #+#    #+#             */
/*   Updated: 2024/09/28 21:33:42 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int is_correct_str(char *str){
    int	j;

		j = 0;
		while (str[j] != '\0')
		{
			//while (str[j] && ft_isspace(str[j]))
			//	j++;
			//if (str[j] && (ft_issign(str[j]) || ft_isdigit(str[j])))
			//	count += check_atoi(&str[j]);
			if (ft_issign(str[j]))
				break;
			else if (!ft_isdigit(str[j])){
				
				return (FALSE);
			}
			//while (str[j] && ft_isdigit(str[j]))
			//	j++;
			//if ((str[j] && !ft_isspace(str[j])) || !count)
			//	return (FALSE);
			j++;
		}
		while (str[j] != '\0'){
			if (!ft_isdigit(str[j])){
				return (FALSE);
			}
			j++;
		}
		return (TRUE);

}


int	check_argv(int argc, char **argv){

    argc--; // file minus

	while (0 <= argc - 1)
	{
		//if (argv[argc][0] != '\0')
		//	return (FALSE);
		if (!is_correct_str(argv[argc])){
			return (FALSE);
		}
		argc--;
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
