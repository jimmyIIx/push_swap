/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _definitions.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nippolit <nippolit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 21:52:56 by jimmy             #+#    #+#             */
/*   Updated: 2024/10/14 02:55:27 by nippolit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DEFINITIONS_H
# define _DEFINITIONS_H

typedef struct s_pack
{
	int			nbr_ra;
	int			nbr_rb;
}				t_pack;

typedef struct s_stacks
{
	t_list		*a;
	t_list		*b;
	t_list		*t;
}				t_stacks;

typedef struct s_data
{
	t_stacks	stacks;
	size_t		size_a;
	size_t		size_b;
	size_t		size_t;
	long long	average;
	bool		is_pushed;
}				t_data;

#endif
