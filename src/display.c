/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bokim <bokim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:54:37 by bokim             #+#    #+#             */
/*   Updated: 2022/02/10 21:35:14 by bokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_node	*get_node(t_stack *stack, int position)
{
	int		i;
	t_node	*node;

	i = 0;
	if (position <= stack->size / 2)
	{
		node = stack->head;
		while (i < position + 1)
		{
			node = node->next;
			i++;
		}
	}
	else
	{
		node = stack->tail;
		while (i < stack->size - position)
		{
			node = node->prev;
			i++;
		}
	}
	return (node);
}

void	display_stack(t_stack *stack)
{
	int	i;

	i = 0;
	if (stack->size > 0)
	{
		while (i < stack->size)
		{
			ft_printf("[%d] : %d\n", i, get_node(stack, i)->value);
			i++;
		}
		ft_printf("--------\n");
	}
	else
	{
		ft_printf("No elements\n");
	}
}
