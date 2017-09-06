/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chek.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 17:49:00 by amovchan          #+#    #+#             */
/*   Updated: 2017/06/05 18:00:53 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cheker.h"

void	ft_chek2(char *str, t_int **stac_a, t_int **stac_b)
{
	if (!ft_strcmp(str, "rr"))
	{
		rotate(stac_a);
		rotate(stac_b);
	}
	else if (!ft_strcmp(str, "rra"))
		reverserotate(stac_a);
	else if (!ft_strcmp(str, "rrb"))
		reverserotate(stac_b);
	else if (!ft_strcmp(str, "rrr"))
	{
		reverserotate(stac_a);
		reverserotate(stac_b);
	}
	else
	{
		ft_printf("%{red}s{eoc}\n", "Error");
		exit(0);
	}
}

void	ft_chek(char *str, t_int **stac_a, t_int **stac_b)
{
	if (!ft_strcmp(str, "pa"))
		push(stac_b, stac_a);
	else if (!ft_strcmp(str, "pb"))
		push(stac_a, stac_b);
	else if (!ft_strcmp(str, "sa"))
		swap_stec(stac_a);
	else if (!ft_strcmp(str, "sb"))
		swap_stec(stac_b);
	else if (!ft_strcmp(str, "ss"))
	{
		swap_stec(stac_a);
		swap_stec(stac_b);
	}
	else if (!ft_strcmp(str, "ra"))
		rotate(stac_a);
	else if (!ft_strcmp(str, "rb"))
		rotate(stac_b);
	else
		ft_chek2(str, stac_a, stac_b);
}

void	ft_cheksortstek(t_int **stec_a, t_int **stec_b, t_flag *flag)
{
	if (flag->c == 1 && flag->d == 1)
	{
		if (ft_cheksort(*stec_a, *stec_b) == 1)
			ft_printf("{green}");
		else
			ft_printf("{red}");
		ft_printstek(*stec_a, *stec_b);
		ft_printf("{eoc}");
	}
	else if (flag->c == 1 || flag->a == 1)
	{
		ft_printstek(*stec_a, *stec_b);
		ft_cheksort(*stec_a, *stec_b);
	}
	else
		ft_cheksort(*stec_a, *stec_b);
}

void	ft_checker(t_int **stec_a, t_int **stec_b, t_flag *flag)
{
	char	*str;
	int		i;

	i = 0;
	if (flag->a == 1)
		ft_printstek(*stec_a, *stec_b);
	while (get_next_line(0, &str))
	{
		if (!str)
			break ;
		ft_chek(str, stec_a, stec_b);
		ft_chek_flag(*stec_a, *stec_b, flag);
		free(str);
		i++;
	}
	ft_cheksortstek(stec_a, stec_b, flag);
	if (flag->count == 1)
		ft_printf("%d\n", i);
	free(str);
}

int		ft_cheksort(t_int *steck_a, t_int *stek_b)
{
	if (sizestec(stek_b) != 0)
		ft_printf("%{red}s{eoc}\n", "KO");
	else if (stakissornmin(steck_a) == 1)
	{
		ft_printf("%{green}s{eoc}\n", "OK");
		return (1);
	}
	else
		ft_printf("%{red}s{eoc}\n", "KO");
	return (0);
}
