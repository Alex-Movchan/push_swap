/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 18:12:12 by amovchan          #+#    #+#             */
/*   Updated: 2017/04/20 20:01:33 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cheker.h"

void	swap_stec(t_int **stec)
{
	t_int	*tmp;

	if (sizestec(*stec) < 2)
		return ;
	tmp = (*stec)->next;
	(*stec)->next = tmp->next;
	tmp->next = *stec;
	*stec = tmp;
}

void	push(t_int **stec_a, t_int **stec_b)
{
	t_int	*tmp;

	if (!*stec_a)
		return ;
	if (sizestec(*stec_b) == 0)
	{
		*stec_b = *stec_a;
		*stec_a = (*stec_a)->next;
		(*stec_b)->next = NULL;
	}
	else
	{
		tmp = *stec_b;
		*stec_b = *stec_a;
		*stec_a = (*stec_a)->next;
		(*stec_b)->next = tmp;
	}
}

void	rotate(t_int **stec)
{
	t_int	*tmp;
	t_int	*begin;

	if (sizestec(*stec) < 2)
		return ;
	begin = *stec;
	tmp = *stec;
	*stec = (*stec)->next;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = begin;
	begin->next = NULL;
}

void	reverserotate(t_int **stec)
{
	t_int	*tmp;
	t_int	*begin;
	int		len;

	len = sizestec(*stec);
	if (len < 2)
		return ;
	else if (len < 3)
		swap_stec((stec));
	else
	{
		tmp = (*stec)->next;
		begin = (*stec)->next;
		while (tmp->next)
			tmp = tmp->next;
		while (begin->next->next)
			begin = begin->next;
		tmp->next = *stec;
		begin->next = NULL;
		*stec = tmp;
	}
}
