/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 21:56:09 by ookamonu          #+#    #+#             */
/*   Updated: 2023/09/22 22:22:10 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	minnum(t_push **a)
{
	int		min;
	t_push	*p;

	min = (*a)->number;
	p = *a;
	p = p->next;
	while (p != NULL)
	{
		if (p->number < min)
			min = p->number;
		p = p->next;
	}
	return (min);
}

int	maxnum(t_push **a)
{
	int		max;
	t_push	*p;

	max = (*a)->number;
	p = *a;
	p = p->next;
	while (p != NULL)
	{
		if (p->number > max)
			max = p->number;
		p = p->next;
	}
	return (max);
}

int	maxindex(t_push **a)
{
	int		max_index;
	t_push	*p;

	p = *a;
	max_index = p->index;
	p = p->next;
	while (p != NULL)
	{
		if (max_index < p->index)
			max_index = p->index;
		p = p->next;
	}
	return (max_index);
}
