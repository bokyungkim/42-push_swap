/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bokim <bokim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 21:23:27 by bokim             #+#    #+#             */
/*   Updated: 2022/02/10 21:28:39 by bokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	check_wrong_input(char *input)
{
	if (ft_strncmp(input, "", ft_strlen(input)) == 0
		|| ft_strncmp(input, " ", ft_strlen(input)) == 0
		|| ft_strnstr(input, "  ", ft_strlen(input)) != NULL)
		error_exit("Wrong input");
}

void	check_repeat(t_stack *stack)
{
	int		i;
	int		j;
	t_node	*node1;
	t_node	*node2;

	i = 0;
	node1 = stack->head->next;
	while (i + 1 < stack->size)
	{
		j = 0;
		node2 = node1->next;
		while (j + 1 < stack->size - i)
		{
			if (node1->value == node2->value)
				error_exit("Repeated input");
			node2 = node2->next;
			j++;
		}
		node1 = node1->next;
		i++;
	}
}

void	fill_stack_a(t_stack *stack, char **split)
{
	int	i;
	int	value;

	i = 0;
	while (split[i])
	{
		value = ft_atoi(split[i]);
		if (value < 0)
			error_exit("Wrong input");
		add_node(stack, value);
		i++;
	}
}

void	parse(t_stack *stack, char **argv)
{
	int		size;
	int		i;
	char	**split;

	size = 0;
	i = 1;
	split = NULL;
	while (argv[i])
	{
		check_wrong_input(argv[i]);
		split = ft_split(argv[i], ' ');
		if (!split)
			error_exit("Split error");
		fill_stack_a(stack, split);
		i++;
	}
	check_repeat(stack);
}
