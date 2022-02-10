/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bokim <bokim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 18:23:53 by bokim             #+#    #+#             */
/*   Updated: 2022/02/10 21:23:43 by bokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	error_exit(char *msg)
{
	ft_printf("Error: %s\n", msg);
	exit(1);
}

int	main(int argc, char **argv)
{
	t_stack	*stack;

	stack = init_stack();
	parse(stack, argv);
	display_stack(stack);
	return (0);
}
