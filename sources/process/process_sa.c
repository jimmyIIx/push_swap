/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_sa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nippolit <nippolit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:29:02 by nippolit          #+#    #+#             */
/*   Updated: 2024/10/12 19:54:04 by nippolit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	process_sa(t_data *data, bool print, int i)
{
	t_list	*temp;

	while (i--)
	{
		if (data->stacks.a == NULL || data->stacks.a->next == NULL)
			return ;
		temp = data->stacks.a;
		data->stacks.a = data->stacks.a->next;
		temp->next = data->stacks.a->next;
		data->stacks.a->next = temp;
		if (print == true)
			ft_write("sa\n");
	}
}
/*La fonction sa (swap a) échange
les deux premiers éléments au sommet de la pile a.*/
