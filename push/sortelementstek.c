/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortelementstek.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 16:27:43 by amovchan          #+#    #+#             */
/*   Updated: 2017/04/20 16:33:42 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort3max(t_int **stak, t_char **lst)
{
	if ((*stak)->nbr > (*stak)->next->next->nbr
		&& (*stak)->next->next->nbr > (*stak)->next->nbr)
	{
		swap_stec(stak);
		rotate(stak);
		swap_stec(stak);
		reverserotate(stak);
		ft_newlst(lst, "sa");
		ft_newlst(lst, "ra");
		ft_newlst(lst, "sa");
		ft_newlst(lst, "rra");
	}
}

void	ft_sort2max(t_int **stak, t_char **lst)
{
	rotate(stak);
	swap_stec(stak);
	reverserotate(stak);
	swap_stec(stak);
	ft_newlst(lst, "ra");
	ft_newlst(lst, "sa");
	ft_newlst(lst, "rra");
	ft_newlst(lst, "sa");
}

void	ft_sort4max(t_int **stak, t_char **lst)
{
	if ((*stak)->nbr > (*stak)->next->nbr
		&& (*stak)->next->nbr > (*stak)->next->next->nbr)
	{
		swap_stec(stak);
		rotate(stak);
		swap_stec(stak);
		reverserotate(stak);
		swap_stec(stak);
		ft_newlst(lst, "sa");
		ft_newlst(lst, "ra");
		ft_newlst(lst, "sa");
		ft_newlst(lst, "rra");
		ft_newlst(lst, "sa");
	}
}

void	ft_sort5max(t_int **stak, t_char **lst)
{
	if (((*stak)->nbr < (*stak)->next->next->nbr)
		&& ((*stak)->next->nbr > (*stak)->next->next->nbr))
	{
		rotate(stak);
		swap_stec(stak);
		reverserotate(stak);
		ft_newlst(lst, "ra");
		ft_newlst(lst, "sa");
		ft_newlst(lst, "rra");
	}
}

void	sortelementstekmax(t_int **stek, int len, t_char **lst)
{
	if (sizestec(*stek) == 3)
		return (sort3elem(stek, lst));
	if (len == 3 && !stakissornmin(*stek, len))
	{
		if ((*stek)->nbr < (*stek)->next->nbr
			&& (*stek)->next->nbr < (*stek)->next->next->nbr)
			return ;
		if ((*stek)->nbr > (*stek)->next->nbr
			&& (*stek)->nbr < (*stek)->next->next->nbr)
		{
			swap_stec(stek);
			ft_newlst(lst, "sa");
		}
		else if ((*stek)->nbr > (*stek)->next->next->nbr
			&& (*stek)->nbr < (*stek)->next->nbr)
			ft_sort2max(stek, lst);
		ft_sort3max(stek, lst);
		ft_sort4max(stek, lst);
		ft_sort5max(stek, lst);
	}
	else if (len == 2 && (*stek)->nbr > (*stek)->next->nbr)
	{
		swap_stec(stek);
		ft_newlst(lst, "sa");
	}
}
