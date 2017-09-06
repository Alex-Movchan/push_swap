/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_structnb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 17:58:39 by amovchan          #+#    #+#             */
/*   Updated: 2017/06/06 17:30:44 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cheker.h"

t_int	*ft_structnb(int ac, char **av)
{
	t_int	*stak;
	t_int	*begin;
	int		i;

	i = 1;
	while (av[i] && (av[i][0] == '-' && ft_isdigit(av[i][1]) == 0))
		i++;
	if (!av[i])
		return (NULL);
	stak = (t_int*)malloc(sizeof(t_int));
	begin = stak;
	stak->nbr = ft_atoi(av[i]);
	while (++i < ac)
		if (av[i][0] == '-' && (av[i][1] == 'v' ||
				av[i][1] == 'c' || av[i][1] == 'a' || av[i][1] == 'd'))
			continue;
		else if (i <= ac - 1)
		{
			stak->next = (t_int*)malloc(sizeof(t_int));
			stak = stak->next;
			stak->nbr = ft_atoi(av[i]);
		}
	stak->next = NULL;
	return (begin);
}

void	printcolirstek(t_int *stek_a, t_int *stek_b)
{
	if (stek_a != NULL && stek_b != NULL
		&& stakissornmin(stek_a) == 1 && stakissornmax(stek_b) == 1)
		ft_printf("|% {green} 10d {eoc}% 4|% {green} 10d {eoc}% 4|\n",
		stek_a->nbr, stek_b->nbr);
	else if (stek_a != NULL && stek_b != NULL &&
		stakissornmin(stek_a) == 1 && stakissornmax(stek_b) == 0)
		ft_printf("|% {green} 10d {eoc}% 4|% {red} 10d {eoc}% 4|\n",
		stek_a->nbr, stek_b->nbr);
	else if (stek_a != NULL && stek_b != NULL
		&& stakissornmin(stek_a) == 0 && stakissornmax(stek_b) == 1)
		ft_printf("|% {red} 10d {eoc}% 4|% {green} 10d {eoc}% 4|\n",
		stek_a->nbr, stek_b->nbr);
	else if (stek_a != NULL && stek_b != NULL)
		ft_printf("|% {red} 10d {eoc}% 4|% {red} 10d {eoc}% 4|\n",
		stek_a->nbr, stek_b->nbr);
	else if (!stek_a && stek_b != NULL && stakissornmax(stek_b) == 1)
		ft_printf("|% 15|% {green} 10d {eoc}% 4|\n", stek_b->nbr);
	else if (stek_a != NULL && !stek_b && stakissornmin(stek_a) == 1)
		ft_printf("|% {green} 10d {eoc}% 4|% 15|\n", stek_a->nbr);
	else if (stek_a != NULL && !stek_b)
		ft_printf("|% {red} 10d {eoc}% 4|% 15|\n", stek_a->nbr);
	else if (!stek_a && stek_b != NULL)
		ft_printf("|% 15|% {red} 10pad {eoc}% 4|\n", stek_b->nbr);
}

void	ft_printstek_count(t_int *stek_a, t_int *stek_b)
{
	ft_printf("% 1_______________________________\n");
	ft_printf("|% 15|% 15|\n");
	ft_printf("|   STACK_A% 5|   STACK_B% 5|\n");
	ft_printf("|-----------------------------|\n");
	while (stek_a || stek_b)
	{
		printcolirstek(stek_a, stek_b);
		if (stek_a)
			stek_a = stek_a->next;
		if (stek_b)
			stek_b = stek_b->next;
	}
	ft_printf("-------------------------------\n");
}

void	ft_chek_flag(t_int *stek_a, t_int *stek_b, t_flag *flag)
{
	if (flag->v == 1 && flag->d == 1)
		ft_printstek_count(stek_a, stek_b);
	else if (flag->v == 1)
		ft_printstek(stek_a, stek_b);
}
