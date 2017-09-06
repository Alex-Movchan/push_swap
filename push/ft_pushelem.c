/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushelem.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 16:23:31 by amovchan          #+#    #+#             */
/*   Updated: 2017/04/20 16:23:50 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pushbek(t_int **stek_a, t_int **stek_b, int len, t_char **lst)
{
	while (len-- > 0 && *stek_b != NULL)
	{
		push(stek_b, stek_a);
		ft_newlst(lst, "pa");
	}
}

void	ft_pushbek_b(t_int **stek_a, t_int **stek_b, int len, t_char **lst)
{
	while (len-- > 0 && *stek_b != NULL)
	{
		push(stek_b, stek_a);
		ft_newlst(lst, "pb");
	}
}
