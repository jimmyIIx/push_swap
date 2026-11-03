/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nippolit <nippolit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 02:08:18 by nippolit          #+#    #+#             */
/*   Updated: 2024/10/14 02:57:28 by nippolit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	verif1(t_data *data, const size_t index_a, const int cb)
{
	return (((cont(data->stacks.a, index_a - 1) < cb
				&& cont(data->stacks.a, index_a) > cb)
			|| (look_min(data->stacks.a) > cb
				&& cont(data->stacks.a, index_a)
				== look_min(data->stacks.a))
			|| (look_max(data->stacks.a) < cb
				&& cont(data->stacks.a, index_a)
				== look_min(data->stacks.a))));
}

bool	verif2(t_data *data, const size_t index_a, const int cb)
{
	return ((((cont(data->stacks.a, index_a - 1) < cb
					&& cont(data->stacks.a, 0) > cb)
				|| (look_min(data->stacks.a) > cb
					&& cont(data->stacks.a, index_a)
					== look_min(data->stacks.a))
				|| (look_max(data->stacks.a) < cb
					&& cont(data->stacks.a, index_a)
					== look_min(data->stacks.a)))));
}

bool	verif3(t_data *data, const size_t index_a, const int cb)
{
	return (((cont(data->stacks.a, data->size_a - 1) < cb
				&& cont(data->stacks.a, index_a) > cb)
			|| (look_min(data->stacks.a) > cb
				&& cont(data->stacks.a, index_a) == look_min(data->stacks.a))
			|| (look_max(data->stacks.a) < cb
				&& cont(data->stacks.a, index_a)
				== look_min(data->stacks.a))));
}
