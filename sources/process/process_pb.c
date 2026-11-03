/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_pb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nippolit <nippolit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:22:36 by nippolit          #+#    #+#             */
/*   Updated: 2024/10/12 21:30:17 by nippolit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	process_pb(t_data *data, bool print, int i)
{
	t_list	*temp;

	while (i--)
	{
		if (data->stacks.a == NULL)
			return ;
		temp = data->stacks.a;
		data->stacks.a = data->stacks.a->next;
		temp->next = data->stacks.b;
		data->stacks.b = temp;
		if (print == true)
			ft_write("pb\n");
		--data->size_a;
		++data->size_b;
	}
}
/*La fonction pb (push b) prend le premier élément au sommet de la
pile a et le met sur la pile b*/
