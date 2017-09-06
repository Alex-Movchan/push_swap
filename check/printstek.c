/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printstek.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 18:10:02 by amovchan          #+#    #+#             */
/*   Updated: 2017/04/20 18:10:20 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cheker.h"

void	ft_printstek(t_int *seck_a, t_int *stek_b)
{
	t_int	*stek1;
	t_int	*stek2;

	stek1 = seck_a;
	stek2 = stek_b;
	ft_printf("% 1_______________________________\n");
	ft_printf("|% 15|% 15|\n");
	ft_printf("|   STACK_A% 5|   STACK_B% 5|\n");
	ft_printf("|-----------------------------|\n");
	while (stek1 || stek2)
	{
		if (stek1 != NULL && stek2 != NULL)
			ft_printf("|%11d% 4|%11d% 4|\n", stek1->nbr, stek2->nbr);
		else if (stek1 != NULL && !stek2)
			ft_printf("|%11d% 4|% 15|\n", stek1->nbr);
		else if (!stek1 && stek2 != NULL)
			ft_printf("|% 15|%11d% 4|\n", stek2->nbr);
		if (stek1)
			stek1 = stek1->next;
		if (stek2)
			stek2 = stek2->next;
	}
	ft_printf("-------------------------------\n");
}
