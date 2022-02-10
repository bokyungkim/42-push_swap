/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bokim <bokim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 18:23:53 by bokim             #+#    #+#             */
/*   Updated: 2022/02/10 18:54:57 by bokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	error_exit(char *msg){
	ft_printf("Error: %s\n", msg);
	exit(1);
}

int	fill_stack_a(t_stack *stack, char **argv)
{
	int size;
	int value;
	int	i;
	int	j;
	char	**split;

	size = 0;
	i = 1;
	split = NULL;
	while (argv[i]){
		split = ft_split(argv[i], ' ');
		if (!split)
			error_exit("Split error");
		j = 0;
		while (split[j]){
			value = ft_atoi(split[j]);
			if (value < 0)
				error_exit("Wrong input");
			add_node(stack, value);
			j++;
		}
		i++;
	}
	return (SUCCESS);
}


int	main(int argc, char **argv)
{
	t_stack	*stack;

	stack = init_stack();
	fill_stack_a(stack, argv);
	display_stack(stack);
	return (0);
}