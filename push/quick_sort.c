/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 16:08:51 by amovchan          #+#    #+#             */
/*   Updated: 2017/04/20 16:13:52 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(t_int **steck_a, t_int **steck_b, int *len, t_char **lst)
{
	ft_quick_sort(steck_a, steck_b, len[0], lst);
	ft_rotate_beck_b(steck_b, len[1], lst);
	ft_quick_sort_b(steck_a, steck_b, len[2] - len[0], lst);
	ft_pushbek_b(steck_b, steck_a, len[0], lst);
}

void	ft_sortstek(t_int **steck_a, t_int **steck_b, int *len, t_char **lst)
{
	ft_rotate_beck(steck_a, len[1], lst);
	ft_quick_sort(steck_a, steck_b, len[2] - len[0], lst);
	ft_quick_sort_b(steck_a, steck_b, len[0], lst);
	ft_pushbek(steck_a, steck_b, len[0], lst);
}

void	ft_quick_sort_b(t_int **steck_a, t_int **steck_b,
				int size, t_char **lst)
{
	int median;
	int len[3];
	int i;

	i = 0;
	len[2] = size;
	len[0] = 0;
	len[1] = 0;
	if (size <= 3)
		return (sortelementstekmin(steck_b, size, lst));
	median = medianstek(*steck_b, size);
	while (size >= i++)
	{
		if (!ft_ismaxmedian(steck_b, median))
			break ;
		if ((*steck_b)->nbr >= median)
			ft_push_sort2(steck_a, steck_b, lst, &len[0]);
		else
			ft_roteitstek2(steck_b, lst, &len[1]);
	}
	ft_sort(steck_a, steck_b, len, lst);
}

void	ft_quick_sort(t_int **steck_a, t_int **steck_b, int size, t_char **lst)
{
	int		median;
	int		len[3];
	int		i;

	i = 0;
	len[0] = 0;
	len[1] = 0;
	len[2] = size;
	if (size <= 3)
		return (sortelementstekmax(steck_a, size, lst));
	median = medianstek(*steck_a, size);
	while (size >= i++)
	{
		if (!ft_isminmedian(steck_a, median))
			break ;
		if ((*steck_a)->nbr < median)
			ft_push_sort1(steck_a, steck_b, lst, &len[0]);
		else
			ft_roteitstek1(steck_a, lst, &len[1]);
	}
	ft_sortstek(steck_a, steck_b, len, lst);
}
