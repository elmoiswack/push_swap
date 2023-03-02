/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   overflow_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 14:08:33 by dhussain          #+#    #+#             */
/*   Updated: 2023/03/02 10:56:50 by dhussain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	free_succes(char *str)
{
	free(str);
	return (1);
}

int	free_failure(char *str)
{
	free(str);
	return (-1);
}

int	check_negative(char *str_arg)
{
	char	*str;
	int		index;

	index = 0;
	str = ft_calloc(13, sizeof(char));
	if (!str)
		return (-1);
	ft_strlcpy(str, "-2147483648", 12);
	if (ft_strlen(str_arg) < 11)
		return (free_succes(str));
	if (ft_strlen(str_arg) > 11)
		return (free_failure(str));
	while (str_arg[index])
	{
		if (str_arg[index] > str[index])
			return (free_failure(str));
		index++;
	}
	return (free_succes(str));
}

int	check_positive(char *str_arg)
{
	char	*str;
	int		index;

	index = 0;
	str = ft_calloc(12, sizeof(char));
	if (!str)
		return (-1);
	ft_strlcpy(str, "2147483647", 11);
	if (ft_strlen(str_arg) < 10)
		return (free_succes(str));
	if (ft_strlen(str_arg) > 10)
		return (free_failure(str));
	while (str_arg[index])
	{
		if (str_arg[index] > str[index])
			return (free_failure(str));
		index++;
	}
	return (free_succes(str));
}

int	overflow_check(int argc, char *argv[])
{
	int	index;
	int	max;

	max = 0;
	while (argv[max])
		max++;
	if (argc == 2)
		index = 0;
	else
		index = 1;
	while (index < max)
	{
		if (argv[index][0] == '-')
		{
			if (check_negative(argv[index]) == -1)
				return (-1);
		}	
		else
		{
			if (check_positive(argv[index]) == -1)
				return (-1);
		}	
		index++;
	}
	return (1);
}
