/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   look_middle.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nippolit <nippolit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 21:42:36 by nippolit          #+#    #+#             */
/*   Updated: 2024/10/13 21:50:54 by nippolit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	look_middle(size_t index, size_t size)
{
	if (index > size / 2)
		return (index - size);
	return (index);
}
