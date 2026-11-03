/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nippolit <nippolit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 00:00:49 by jimmy             #+#    #+#             */
/*   Updated: 2024/10/14 03:20:22 by nippolit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char	*ft_recover(const int argc, const char **argv);
static bool	ft_stock(t_data *data, const char *str);
static bool	ft_check(t_data *data, const char *str);
static void	ft_stack_t(t_data *data);

void	ft_init(t_data *data, const int argc, const char **argv)
{
	char	*str;
	bool	stocking;

	str = NULL;
	str = ft_recover(argc, argv);
	stocking = ft_stock(data, str);
	ft_free(str);
	if (!stocking)
		ft_exit_failure(data, "Error\n");
	ft_stack_t(data);
}

static char	*ft_recover(const int argc, const char **argv)
{
	char	*str;
	char	**temp;
	int		i;
	int		j;

	str = NULL;
	i = 1;
	while (i < argc)
	{
		j = 0;
		temp = ft_split(argv[i], ' ');
		if (temp == NULL)
			return (NULL);
		while (temp[j])
		{
			str = ft_strjoin_mod(str, temp[j]);
			str = ft_strjoin_mod(str, " ");
			j++;
		}
		ft_free_deep(temp);
		i++;
	}
	return (str);
}

static bool	ft_stock(t_data *data, const char *str)
{
	char	**tmp;
	int		*nbr;
	int		i;

	if (str == NULL)
		return (false);
	i = 0;
	nbr = NULL;
	tmp = NULL;
	tmp = ft_split(str, ' ');
	if (tmp == NULL)
		return (false);
	while (tmp[i])
	{
		if (!ft_check(data, tmp[i]) || !init_stack(data, tmp[i]))
			return (ft_free_deep(tmp), false);
		i++;
	}
	data->average = data->average / data->size_t;
	return (ft_free_deep(tmp), true);
}

static bool	ft_check(t_data *data, const char *str)
{
	int			i;
	long long	nbr;
	t_list		*temp;

	i = 0;
	nbr = ft_atoi(str);
	if (nbr == -1)
		return (false);
	temp = data->stacks.a;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i++]))
			return (false);
	}
	if (nbr > INT_MAX || nbr < INT_MIN)
		return (false);
	while (temp)
	{
		if (*(int *)temp->content == nbr)
			return (false);
		temp = temp->next;
	}
	return (true);
}

static void	ft_stack_t(t_data *data)
{
	t_list	*s_one;
	t_list	*s_bis;
	void	*temp;

	s_one = data->stacks.t;
	while (s_one)
	{
		s_bis = s_one->next;
		while (s_bis)
		{
			if (*(int *)s_one->content > *(int *)s_bis->content)
			{
				temp = s_one->content;
				s_one->content = s_bis->content;
				s_bis->content = temp;
			}
			s_bis = s_bis->next;
		}
		s_one = s_one->next;
	}
}
