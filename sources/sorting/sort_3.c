/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nippolit <nippolit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 18:37:09 by nippolit          #+#    #+#             */
/*   Updated: 2024/10/12 22:50:23 by nippolit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort3(t_data *data)
{
	if (*(int *)data->stacks.a->content > *(int *)data->stacks.a->next->content)
	{
		if (*(int *)data->stacks.a->content
			> *(int *)data->stacks.a->next->next->content)
			return (process_ra(data, true, 1));
	}
	return (process_sa(data, true, 1));
}
/*
[5, 2, 1] > ra -> sa
[1, 5, 2] > sa -> ra
[2, 1, 5] > sa
[5, 1, 2] > ra
*/
