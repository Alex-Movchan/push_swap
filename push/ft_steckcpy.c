/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_steckcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 16:35:17 by amovchan          #+#    #+#             */
/*   Updated: 2017/04/25 17:29:19 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_int	*ft_steckcpy(t_int *stek)
{
	t_int	*stek1;
	t_int	*begin;

	if (!(stek1 = (t_int*)malloc(sizeof(t_int))))
		return (NULL);
	begin = stek1;
	stek1->nbr = stek->nbr;
	while (stek)
	{
		stek1->next = (t_int*)malloc(sizeof(t_int));
		stek = stek->next;
		if (!stek)
		{
			free(stek1->next);
			stek1->next = NULL;
			break ;
		}
		stek1 = stek1->next;
		stek1->nbr = stek->nbr;
	}
	return (begin);
}
