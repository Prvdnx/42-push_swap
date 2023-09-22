/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:55:26 by ookamonu          #+#    #+#             */
/*   Updated: 2023/09/22 22:22:11 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_push **list_a)
{
	int	first;
	int	second;

	first = (*list_a)->next->number;
	second = (*list_a)->number;
	(*list_a)->number = first;
	(*list_a)->next-> number = second;
	write(1, "sa\n", 3);
}

void	sb(t_push **list_b)
{
	int	first;
	int	second;

	first = (*list_b)->next->number;
	second = (*list_b)->number;
	(*list_b)->number = first;
	(*list_b)->next->number = second;
	write(1, "sb\n", 3);
}

void	ss(t_push **list_a, t_push **list_b)
{
	sa(list_a);
	sb(list_b);
	write(1, "ss\n", 3);
}
