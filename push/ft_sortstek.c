/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortstek.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 16:46:46 by amovchan          #+#    #+#             */
/*   Updated: 2017/04/20 16:46:48 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_sort1(t_int **steck_a, t_int **steck_b, t_char **lst, int *len)
{
	push(steck_a, steck_b);
	ft_newlst(lst, "pb");
	(*len)++;
}

void	ft_roteitstek1(t_int **steck_a, t_char **lst, int *len)
{
	rotate(steck_a);
	ft_newlst(lst, "ra");
	(*len)++;
}

void	ft_push_sort2(t_int **steck_a, t_int **steck_b, t_char **lst, int *len)
{
	push(steck_b, steck_a);
	ft_newlst(lst, "pa");
	(*len)++;
}

void	ft_roteitstek2(t_int **steck_b, t_char **lst, int *len)
{
	rotate(steck_b);
	ft_newlst(lst, "rb");
	(*len)++;
}
