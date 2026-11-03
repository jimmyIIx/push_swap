/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cont.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nippolit <nippolit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 02:27:01 by nippolit          #+#    #+#             */
/*   Updated: 2024/10/14 02:27:25 by nippolit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	cont(t_list *stack, size_t index)
{
	size_t	i;

	i = 0;
	while (stack)
	{
		if (i++ == index)
			return (*(int *)stack->content);
		stack = stack->next;
	}
	return (0);
}
