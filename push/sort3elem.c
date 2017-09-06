/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3elem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 16:20:14 by amovchan          #+#    #+#             */
/*   Updated: 2017/04/20 16:22:54 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort2(t_int **stak, t_char **lst)
{
	reverserotate(stak);
	ft_newlst(lst, "rra");
}

void	ft_sort3(t_int **stak, t_char **lst)
{
	rotate(stak);
	ft_newlst(lst, "ra");
}

void	ft_sort4(t_int **stek, t_char **lst)
{
	swap_stec(stek);
	reverserotate(stek);
	ft_newlst(lst, "sa");
	ft_newlst(lst, "rra");
}

void	ft_sort5(t_int **stek, t_char **lst)
{
	reverserotate(stek);
	swap_stec(stek);
	ft_newlst(lst, "rra");
	ft_newlst(lst, "sa");
}

void	sort3elem(t_int **stek, t_char **lst)
{
	if ((*stek)->nbr > (*stek)->next->nbr
		&& (*stek)->nbr < (*stek)->next->next->nbr)
	{
		swap_stec(stek);
		ft_newlst(lst, "sa");
	}
	else if ((*stek)->nbr > (*stek)->next->next->nbr
			&& (*stek)->nbr < (*stek)->next->nbr)
		ft_sort2(stek, lst);
	else if ((*stek)->nbr > (*stek)->next->next->nbr
			&& (*stek)->next->next->nbr > (*stek)->next->nbr)
		ft_sort3(stek, lst);
	else if ((*stek)->nbr > (*stek)->next->nbr
			&& (*stek)->next->nbr > (*stek)->next->next->nbr)
		ft_sort4(stek, lst);
	else if (((*stek)->nbr < (*stek)->next->next->nbr)
			&& ((*stek)->next->nbr > (*stek)->next->next->nbr))
		ft_sort5(stek, lst);
}
