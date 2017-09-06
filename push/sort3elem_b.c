/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3elem_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 17:01:57 by amovchan          #+#    #+#             */
/*   Updated: 2017/04/20 17:07:05 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort1_b(t_int **stek, t_char **lst)
{
	if ((*stek)->nbr < (*stek)->next->nbr
		&& (*stek)->next->nbr < (*stek)->next->next->nbr
		&& (*stek)->next->nbr < (*stek)->next->next->nbr)
	{
		swap_stec(stek);
		reverserotate(stek);
		ft_newlst(lst, "sb");
		ft_newlst(lst, "rrb");
	}
}

void	sort3_b(t_int **stek, t_char **lst)
{
	if ((*stek)->nbr > (*stek)->next->nbr
		&& (*stek)->nbr > (*stek)->next->next->nbr
		&& (*stek)->next->nbr < (*stek)->next->next->nbr)
	{
		swap_stec(stek);
		rotate(stek);
		ft_newlst(lst, "sb");
		ft_newlst(lst, "rb");
	}
}

void	sort2_b(t_int **stek, t_char **lst)
{
	if (((*stek)->nbr < (*stek)->next->nbr)
		&& ((*stek)->next->nbr > (*stek)->next->next->nbr))
	{
		rotate(stek);
		ft_newlst(lst, "rb");
	}
}

void	sort3elem_b(t_int **stek, t_char **lst)
{
	if (!stakissornmax(*stek) && sizestec(*stek) == 3)
	{
		if ((*stek)->nbr > (*stek)->next->nbr
			&& (*stek)->nbr < (*stek)->next->next->nbr)
		{
			ft_newlst(lst, "rrb");
			reverserotate(stek);
		}
		else if ((*stek)->nbr > (*stek)->next->next->nbr
			&& (*stek)->nbr < (*stek)->next->nbr)
		{
			swap_stec(stek);
			ft_newlst(lst, "sb");
		}
		sort3_b(stek, lst);
		sort1_b(stek, lst);
	}
	sort2_b(stek, lst);
}
