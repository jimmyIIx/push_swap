/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nippolit <nippolit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 23:40:34 by nippolit          #+#    #+#             */
/*   Updated: 2024/10/14 02:56:52 by nippolit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	cerebro(t_data *data, t_pack *pack,
				const size_t index_b, size_t *best);

void	calculate(t_pack *pack, t_data *data)
{
	size_t	index_b;
	size_t	best;

	best = data->size_a + data->size_b;
	index_b = 0;
	while (index_b < data->size_b)
	{
		if (index_b == best && data->size_b - index_b > index_b)
			index_b = data->size_b - index_b;
		cerebro(data, pack, index_b, &best);
		index_b++;
	}
}

static void	cerebro(t_data *data, t_pack *pack,
	const size_t index_b, size_t *best)
{
	size_t	index_a;
	int		cb;

	index_a = 0;
	while (index_a < data->size_a)
	{
		if (index_a == *best && data->size_a - index_a > index_a)
			index_a = data->size_a - index_a;
		cb = cont(data->stacks.b, index_b);
		if ((index_a > 0 && verif1(data, index_a, cb))
			|| (index_a == data->size_a - 1 && verif2(data, index_a, cb))
			|| (index_a == 0 && verif3(data, index_a, cb)))
		{
			if (ft_abs(look_middle(index_a, data->size_a))
				+ ft_abs(look_middle(index_b, data->size_b)) < *best)
			{
				pack->nbr_ra = look_middle(index_a, data->size_a);
				pack->nbr_rb = look_middle(index_b, data->size_b);
				*best = ft_abs(pack->nbr_ra) + ft_abs(pack->nbr_rb);
			}
		}
		index_a++;
	}
}
