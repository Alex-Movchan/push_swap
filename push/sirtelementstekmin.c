/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sirtelementstekmin.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 15:53:16 by amovchan          #+#    #+#             */
/*   Updated: 2017/04/20 16:06:08 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort1min(t_int **stak, t_char **lst)
{
	if (((*stak)->nbr < (*stak)->next->nbr)
		&& ((*stak)->next->nbr > (*stak)->next->next->nbr))
	{
		swap_stec(stak);
		rotate(stak);
		swap_stec(stak);
		reverserotate(stak);
		ft_newlst(lst, "sb");
		ft_newlst(lst, "rb");
		ft_newlst(lst, "sb");
		ft_newlst(lst, "rrb");
	}
}

void	sort2elemsteknim(t_int **stek, t_char **lst)
{
	rotate(stek);
	swap_stec(stek);
	reverserotate(stek);
	ft_newlst(lst, "rb");
	ft_newlst(lst, "sb");
	ft_newlst(lst, "rrb");
}

void	ft_sort3min(t_int **stek, t_char **lst)
{
	if ((*stek)->nbr < (*stek)->next->nbr
		&& (*stek)->nbr < (*stek)->next->next->nbr
		&& (*stek)->next->nbr < (*stek)->next->next->nbr)
	{
		swap_stec(stek);
		rotate(stek);
		swap_stec(stek);
		reverserotate(stek);
		swap_stec(stek);
		ft_newlst(lst, "sb");
		ft_newlst(lst, "rb");
		ft_newlst(lst, "sb");
		ft_newlst(lst, "rrb");
		ft_newlst(lst, "sb");
	}
}

void	ft_sort2min(t_int **stak, t_char **lst)
{
	if ((*stak)->nbr > (*stak)->next->nbr
		&& (*stak)->nbr < (*stak)->next->next->nbr)
	{
		rotate(stak);
		swap_stec(stak);
		reverserotate(stak);
		swap_stec(stak);
		ft_newlst(lst, "rb");
		ft_newlst(lst, "sb");
		ft_newlst(lst, "rrb");
		ft_newlst(lst, "sb");
	}
}

void	sortelementstekmin(t_int **stek, int len, t_char **lst)
{
	if (sizestec(*stek) == 3)
		return (sort3elem_b(stek, lst));
	if (len == 3)
	{
		ft_sort2min(stek, lst);
		if ((*stek)->nbr > (*stek)->next->next->nbr
			&& (*stek)->nbr < (*stek)->next->nbr)
		{
			swap_stec(stek);
			ft_newlst(lst, "sb");
		}
		else if ((*stek)->nbr > (*stek)->next->next->nbr
				&& (*stek)->next->next->nbr > (*stek)->next->nbr)
			sort2elemsteknim(stek, lst);
		ft_sort3min(stek, lst);
		ft_sort1min(stek, lst);
	}
	else if (len == 2 && (*stek)->nbr < (*stek)->next->nbr)
	{
		swap_stec(stek);
		ft_newlst(lst, "sb");
	}
}
