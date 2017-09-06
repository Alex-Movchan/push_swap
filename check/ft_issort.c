/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_issort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 18:19:50 by amovchan          #+#    #+#             */
/*   Updated: 2017/04/20 18:20:41 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cheker.h"

int		stakissornmin(t_int *stack)
{
	t_int	*tmp;

	tmp = stack;
	if (sizestec(tmp) < 1)
		return (0);
	while (tmp)
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
