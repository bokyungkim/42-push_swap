/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doublylist.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bokim <bokim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:56:23 by bokim             #+#    #+#             */
/*   Updated: 2022/02/22 03:12:44 by bokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	init_node(t_node *node, int value, t_node *prev, t_node *next)
{
	node->value = value;
	node->prev = prev;
	node->next = next;
}

t_stack	*init_stack(void)
{
	t_stack	*stack;

	stack = (t_stack *)malloc(sizeof(t_stack));
	if (!stack)
		error_exit("Stack malloc error");
	stack->size = 0;
	stack->head = (t_node *)malloc(sizeof(t_node));
	stack->tail = (t_node *)malloc(sizeof(t_node));
	stack->cursor = (t_node *)malloc(sizeof(t_node));
	if (!stack->head || !stack->tail || !stack->cursor)
		error_exit("Node malloc error");
	init_node(stack->head, 0, 0, 0);
	init_node(stack->tail, 0, 0, 0);
	init_node(stack->cursor, 0, 0, 0);
	return (stack);
}

t_op	*init_op(void)
{
	t_op	*operation;

	operation = (t_op *)malloc(sizeof(t_op));
	if (!operation)
		error_exit("Operation list malloc error");
	operation->size = 0;
	operation->head = (t_node *)malloc(sizeof(t_node));
	if (!operation->head)
		error_exit("Node malloc error");
	init_node(operation->head, 0, 0, 0);
	return (operation);
}

void	add_node(t_stack *stack, int value)
{
	t_node	*node;
	t_node	*head;

	head = stack->head;
	node = (t_node *)malloc(sizeof(t_node));
	if (!node)
		error_exit("Node malloc error");
	init_node(node, value, 0, head->next);
	if (stack->size == 0)
		stack->tail->prev = node;
	else
		head->next->prev = node;
	head->next = node;
	node->prev = head;
	stack->size++;
}

// int	move_node(t_stack* stack, t_node *position, t_node *node){
// 	if (stack->tail = node)
// 		stack->tail->prev = node->prev;
// 	node->prev->next = node->next;
// 	if ()
// }