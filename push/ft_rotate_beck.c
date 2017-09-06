/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_beck.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 16:46:07 by amovchan          #+#    #+#             */
/*   Updated: 2017/04/20 16:46:08 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate_beck(t_int **steck, int len, t_char **lst)
{
	int size;

	size = sizestec(*steck);
	if (len >= size)
		return ;
	else
	{
		while (len-- > 0)
		{
			reverserotate(steck);
			ft_newlst(lst, "rra");
		}
	}
}

void	ft_rotate_beck_b(t_int **steck, int len, t_char **lst)
{
	int size;

	size = sizestec(*steck);
	if (len >= size)
		return ;
	else
	{
		while (len-- > 0)
		{
			reverserotate(steck);
			ft_newlst(lst, "rrb");
		}
	}
}

int		ft_optimoss5(t_char **lst)
{
	t_char	*liek;

	if (!(ft_strcmp((*lst)->next->str, "rra"))
		&& !(ft_strcmp((*lst)->next->next->str, "sa"))
		&& !(ft_strcmp((*lst)->next->next->next->str, "pb")))
	{
		liek = (*lst)->next;
		(*lst)->next = (*lst)->next->next;
		(*lst)->next->str = "pb";
		(*lst)->next->next->str = "rra";
		free(liek);
		return (1);
	}
	else if (!(ft_strcmp((*lst)->next->str, "rrb"))
		&& !(ft_strcmp((*lst)->next->next->str, "sb"))
		&& !(ft_strcmp((*lst)->next->next->next->str, "pa")))
	{
		liek = (*lst)->next;
		(*lst)->next = (*lst)->next->next;
		(*lst)->next->str = "pa";
		(*lst)->next->next->str = "rrb";
		free(liek);
		return (1);
	}
	return (0);
}

int		ft_optimoss6(t_char **lst)
{
	t_char	*liek;

	if (!(ft_strcmp((*lst)->next->str, "sa"))
		&& !(ft_strcmp((*lst)->next->next->str, "ra"))
		&& !(ft_strcmp((*lst)->next->next->next->str, "pb")))
	{
		liek = (*lst)->next;
		(*lst)->next = (*lst)->next->next;
		(*lst)->next->str = "pb";
		(*lst)->next->next->str = "ra";
		free(liek);
		return (1);
	}
	else if (!(ft_strcmp((*lst)->next->str, "sb"))
		&& !(ft_strcmp((*lst)->next->next->str, "rb"))
		&& !(ft_strcmp((*lst)->next->next->next->str, "pa")))
	{
		liek = (*lst)->next;
		(*lst)->next = (*lst)->next->next;
		(*lst)->next->str = "pa";
		(*lst)->next->next->str = "rb";
		free(liek);
		return (1);
	}
	return (0);
}
