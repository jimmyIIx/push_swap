/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nippolit <nippolit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 03:10:40 by nippolit          #+#    #+#             */
/*   Updated: 2024/10/14 03:15:09 by nippolit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	init_stack(t_data *data, const char *tmp)
{
	int	*nbr;

	nbr = malloc(sizeof(int));
	if (nbr == NULL)
		return (false);
	*nbr = ft_atoi(tmp);
	ft_lstadd_back(&data->stacks.a, ft_lstnew(nbr));
	ft_lstadd_back(&data->stacks.t, ft_lstnew(nbr));
	++data->size_a;
	++data->size_t;
	data->average = data->average + *nbr;
	return (true);
}
