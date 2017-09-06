/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_issort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 16:06:50 by amovchan          #+#    #+#             */
/*   Updated: 2017/04/20 16:08:13 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		stakissornmin(t_int *stack, int len)
{
	t_int	*tmp;

	tmp = stack;
	if (sizestec(tmp) < 1)
		return (0);
	while (tmp && len--)
	{
		if (tmp->next != NULL && tmp->nbr > tmp->next->nbr)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int		stakissornmax(t_int *stack)
{
	t_int	*tmp;

	tmp = stack;
	if (sizestec(tmp) < 1)
		return (0);
	while (tmp)
	{
		if (tmp->next != NULL && tmp->nbr < tmp->next->nbr)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}
