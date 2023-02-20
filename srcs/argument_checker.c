/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_checker.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 12:27:48 by dhussain          #+#    #+#             */
/*   Updated: 2023/02/20 17:53:24 by dhussain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	digit_check(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (str[index] == '-')
			index++;
		if (str[index] == '\0')
			return (-1);
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
	if (argv[1][index_x] == ' ' && argv[1][index_x + 1] != '\0')
	{
		argv = ft_split(argv[1], ' ');
		return (argv);
	}
	else
		exit(EXIT_SUCCESS);
	return (argv);
}

char	**argument_check(int argc, char *argv[])
{
	int	index;

	index = 1;
	if (argc < 2)
		return (NULL);
	if (argc == 2)
	{
		if (argv[index][0] == '\0')
			return (NULL);
		index = 0;
		argv = string_argument(argv);
		return (argv);
	}
	while (argv[index])
	{
		if (argv[index][0] == '\0')
			return (NULL);
		if (digit_check(argv[index]) == -1)
			return (NULL);	
		index++;
	}
	return (argv);
}