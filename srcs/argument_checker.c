/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_checker.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 12:27:48 by dhussain          #+#    #+#             */
/*   Updated: 2023/02/08 12:10:49 by dhussain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// int	doubles_check(char *argv[])
// {

// }

int	digit_check(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (str[index] == '-')
			index++;
		if (ft_isdigit(str[index]) != 1)
			return (-1);
		index++;
	}
	return (1);
}

char	**string_argument(char *argv[])
{
	int	index_x;

	index_x = 0;
	while (argv[1][index_x] && argv[1][index_x] != ' ')
		index_x++;
	if (argv[1][index_x] == ' ')
	{
		argv = ft_split(argv[1], ' ');
		return (argv);
	}
	else
		exit(EXIT_SUCCESS);
	return (argv);
}

int	argument_check(int argc, char *argv[])
{
	int	index;

	index = 1;
	if (argc < 2)
		return (-1);
	if (argc == 2)
	{
		index = 0;
		argv = string_argument(argv);
	}
	while (argv[index])
	{
		if (digit_check(argv[index]) == -1)
			return (-1);
		// if (doubles_check(argv) == -1)
		// 	return (-1);		
		index++;
	}
	return (1);
}