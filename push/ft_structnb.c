/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_structnb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 16:34:12 by amovchan          #+#    #+#             */
/*   Updated: 2017/04/20 16:34:57 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_int	*ft_structnb(int ac, char **av)
{
	t_int	*stak;
	t_int	*begin;
	int		i;

	if (!(stak = (t_int*)malloc(sizeof(t_int))))
		return (NULL);
	i = 0;
	begin = stak;
	while (++i < ac)
	{
		stak->nbr = ft_atoi(av[i]);
		if (i < ac - 1)
		{
			stak->next = (t_int*)malloc(sizeof(t_int));
			stak = stak->next;
		}
		stak->next = NULL;
	}
	return (begin);
}
