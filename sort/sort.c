/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 21:54:50 by ookamonu          #+#    #+#             */
/*   Updated: 2023/09/22 22:22:18 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort(t_push **a, t_push **b, int size)
{
	if (2 <= size && size <= 5)
	{
		if (size == 2)
			do_sort_2(a);
		else if (size == 3)
			do_sort_3(a);
		else if (size == 4 || size == 5)
			do_sort_5(a, b, size);
	}
	if (6 <= size)
	{
		do_index(a, size);
		if (6 <= size && size <= 100)
			do_sort_100(a, b);
		else
			do_sort_500(a, b);
	}
}
