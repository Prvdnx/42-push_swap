/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 21:58:00 by ookamonu          #+#    #+#             */
/*   Updated: 2023/09/22 22:25:47 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_push **a, int num)
{
	t_push	*tmp;

	tmp = malloc(sizeof(t_push));
	if (!tmp)
		return ;
	tmp->number = num;
	tmp->next = *a;
	*a = tmp;
}

void	free_stack(t_push **stack)
{
	t_push	*current;
	t_push	*next;

	current = *stack;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*stack = NULL;
}

int	main(int argc, char *argv[])
{
	t_push	*a;
	t_push	*b;
	int		size;
	int		num;

	a = NULL;
	b = NULL;
	size = argc - 1;
	if (argc > 1)
	{
		while (argc != 1)
		{
			num = ft_atoi(argv[--argc]);
			push_a(&a, num);
		}
	}
	if (a != NULL && size > 0)
	{
		check_rep(&a);
		if (!is_sorted(&a))
			sort(&a, &b, size);
		free_stack(&a);
	}
	return (0);
}
