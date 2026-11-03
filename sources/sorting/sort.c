/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nippolit <nippolit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 18:33:49 by nippolit          #+#    #+#             */
/*   Updated: 2024/10/14 03:06:04 by nippolit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	pushing(t_data *data);
static void	palpatine(t_data *data);
static void	finish_sort(t_data *data);

void	sort(t_data *data)
{
	if (data->size_a == 2)
		return (sort2(data));
	if (data->size_a == 3 && stack_verif(data->stacks.a) == false)
		return (sort3(data));
	if (data->size_a > 3 && data->is_pushed == false)
		return (pushing(data));
	if (data->size_b > 0 && data->is_pushed == true)
		return (palpatine(data));
	if (data->size_b == 0 && data->is_pushed == true)
		return (finish_sort(data));
}

static void	pushing(t_data *data)
{
	size_t	i;

	i = 0;
	if (data->size_t > 50)
	{
		while (i < data->size_t && data->size_b < data->size_t / 2)
		{
			if (*(int *)data->stacks.a->content < data->average)
				process_pb(data, true, 1);
			else
				process_ra(data, true, 1);
			i++;
		}
	}
	process_pb(data, true, data->size_a - 3);
	data->is_pushed = true;
}

static void	palpatine(t_data *data)
{
	t_pack	pack;

	st_pack_initialize(&pack);
	calculate(&pack, data);
	while (pack.nbr_ra > 0 && pack.nbr_rb > 0)
	{
		process_rr(data, true, 1);
		--pack.nbr_ra;
		--pack.nbr_rb;
	}
	while (pack.nbr_ra < 0 && pack.nbr_rb < 0)
	{
		process_rrr(data, true, 1);
		++pack.nbr_ra;
		++pack.nbr_rb;
	}
	if (pack.nbr_ra > 0)
		process_ra(data, true, pack.nbr_ra);
	else if (pack.nbr_ra < 0)
		process_rra(data, true, -pack.nbr_ra);
	if (pack.nbr_rb > 0)
		process_rb(data, true, pack.nbr_rb);
	else if (pack.nbr_rb < 0)
		process_rrb(data, true, -pack.nbr_rb);
	process_pa(data, true, 1);
}

static void	finish_sort(t_data *data)
{
	size_t	index;
	t_list	*temp;
	int		min;

	min = look_min(data->stacks.a);
	index = 0;
	temp = data->stacks.a;
	while (temp)
	{
		if (*(int *)temp->content == min)
			break ;
		temp = temp->next;
		index++;
	}
	if (index > data->size_a / 2)
		return (process_rra(data, true, data->size_a - index));
	return (process_ra(data, true, index));
}
