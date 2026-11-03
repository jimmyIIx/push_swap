/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   look_min.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nippolit <nippolit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 02:51:48 by nippolit          #+#    #+#             */
/*   Updated: 2024/10/13 03:04:45 by nippolit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	look_min(t_list *stack)
{
	int	min;

	min = *(int *)stack->content;
	stack = stack->next;
	while (stack)
	{
		if (min > *(int *)stack->content)
		{
			min = *(int *)stack->content;
		}
		stack = stack->next;
	}
	return (min);
}
