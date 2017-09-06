/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   optimiz.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 16:48:32 by amovchan          #+#    #+#             */
/*   Updated: 2017/04/20 16:54:55 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_optimiz(t_char *list)
{
	if (!(ft_strcmp(list->next->str, "pa"))
		&& !(ft_strcmp(list->next->next->str, "pb")))
		return (1);
	else if (!(ft_strcmp(list->next->str, "pb"))
		&& !(ft_strcmp(list->next->next->str, "pa")))
		return (1);
	else if (!(ft_strcmp(list->next->str, "ra"))
		&& !(ft_strcmp(list->next->next->str, "rra")))
		return (1);
	else if (!(ft_strcmp(list->next->str, "rra"))
		&& !(ft_strcmp(list->next->next->str, "ra")))
		return (1);
	else if (!(ft_strcmp(list->next->str, "rrb"))
		&& !(ft_strcmp(list->next->next->str, "rb")))
		return (1);
	else if (!(ft_strcmp(list->next->str, "rb"))
		&& !(ft_strcmp(list->next->next->str, "rrb")))
		return (1);
	else if (!(ft_strcmp(list->next->str, "sb"))
		&& !(ft_strcmp(list->next->next->str, "sb")))
		return (1);
	else if (!(ft_strcmp(list->next->str, "sa"))
		&& !(ft_strcmp(list->next->next->str, "sa")))
		return (1);
	return (0);
}

int		ft_optimss(t_char **list)
{
	t_char	*liek;

	if (!(ft_strcmp((*list)->next->str, "sa"))
		&& !(ft_strcmp((*list)->next->next->str, "sb")))
	{
		liek = (*list)->next;
		(*list)->next = (*list)->next->next;
		(*list)->next->str = "ss";
		free(liek);
		return (1);
	}
	else if (!(ft_strcmp((*list)->next->str, "sb"))
		&& !(ft_strcmp((*list)->next->next->str, "sa")))
	{
		liek = (*list)->next;
		(*list)->next = (*list)->next->next;
		(*list)->next->str = "ss";
		free(liek);
		return (1);
	}
	else
		return (0);
}

int		ft_optimoss2(t_char **list)
{
	t_char	*liek;

	if (!(ft_strcmp((*list)->next->str, "rra"))
		&& !(ft_strcmp((*list)->next->next->str, "rrb")))
	{
		liek = (*list)->next;
		(*list)->next = (*list)->next->next;
		(*list)->next->str = "rrr";
		free(liek);
		return (1);
	}
	else if (!(ft_strcmp((*list)->next->str, "rrb"))
		&& !(ft_strcmp((*list)->next->next->str, "rra")))
	{
		liek = (*list)->next;
		(*list)->next = (*list)->next->next;
		(*list)->next->str = "rrr";
		free(liek);
		return (1);
	}
	return (0);
}

int		ft_optimoss3(t_char **list)
{
	t_char	*liek;

	if (!(ft_strcmp((*list)->next->str, "ra"))
		&& !(ft_strcmp((*list)->next->next->str, "pb"))
		&& !(ft_strcmp((*list)->next->next->next->str, "rra")))
	{
		liek = (*list)->next;
		(*list)->next = (*list)->next->next;
		(*list)->next->str = "sa";
		(*list)->next->next->str = "pb";
		free(liek);
		return (1);
	}
	else if (!(ft_strcmp((*list)->next->str, "rb"))
		&& !(ft_strcmp((*list)->next->next->str, "pa"))
		&& !(ft_strcmp((*list)->next->next->next->str, "rrb")))
	{
		liek = (*list)->next;
		(*list)->next = (*list)->next->next;
		(*list)->next->str = "sb";
		(*list)->next->next->str = "pa";
		free(liek);
		return (1);
	}
	return (0);
}

int		ft_optimoss4(t_char **list)
{
	t_char	*liek;

	if (!(ft_strcmp((*list)->next->str, "ra"))
		&& !(ft_strcmp((*list)->next->next->str, "rb")))
	{
		liek = (*list)->next;
		(*list)->next = (*list)->next->next;
		(*list)->next->str = "rr";
		free(liek);
		return (1);
	}
	else if (!(ft_strcmp((*list)->next->str, "rb"))
		&& !(ft_strcmp((*list)->next->next->str, "ra")))
	{
		liek = (*list)->next;
		(*list)->next = (*list)->next->next;
		(*list)->next->str = "rr";
		free(liek);
		return (1);
	}
	return (0);
}
