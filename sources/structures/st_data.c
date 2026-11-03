/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_data.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nippolit <nippolit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 21:54:26 by jimmy             #+#    #+#             */
/*   Updated: 2024/10/12 22:11:04 by nippolit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	st_data_clear(t_data *data)
{
	st_stacks_clear(&data->stacks);
}

void	st_data_initialize(t_data *data)
{
	st_stacks_initialize(&data->stacks);
	data->size_a = 0;
	data->size_b = 0;
	data->size_t = 0;
	data->average = 0;
	data->is_pushed = false;
}
