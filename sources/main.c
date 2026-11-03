/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nippolit <nippolit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 21:52:24 by jimmy             #+#    #+#             */
/*   Updated: 2024/10/14 01:45:47 by nippolit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(const int argc, const char **argv)
{
	t_data	data;

	st_data_initialize(&data);
	ft_init(&data, argc, argv);
	while (data.size_a < data.size_t
		|| !ft_lstcmp(data.stacks.t, data.stacks.a, sizeof(int)))
	{
		sort(&data);
	}
	ft_exit_success(&data, "");
}
