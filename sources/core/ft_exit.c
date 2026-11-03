/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nippolit <nippolit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 22:11:15 by jimmy             #+#    #+#             */
/*   Updated: 2024/10/12 19:41:27 by nippolit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_exit(t_data *data, const int code, const char *msg)
{
	ft_write(msg);
	st_data_clear(data);
	exit(code);
}

void	ft_exit_failure(t_data *data, const char *msg)
{
	ft_exit(data, EXIT_FAILURE, msg);
}

void	ft_exit_success(t_data *data, const char *msg)
{
	ft_exit(data, EXIT_SUCCESS, msg);
}
