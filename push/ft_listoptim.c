/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_listoptim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 16:36:03 by amovchan          #+#    #+#             */
/*   Updated: 2017/04/20 20:04:01 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_char	*ft_charlst(t_char *lst)
{
	lst = (t_char*)malloc(sizeof(t_char));
	lst->str = NULL;
	return (lst);
}

void	ft_newlst(t_char **lst, char *str)
{
	if ((*lst)->str != NULL)
	{
		(*lst)->next = (t_char*)malloc(sizeof(t_char));
		*lst = (*lst)->next;
		(*lst)->str = str;
		(*lst)->next = NULL;
	}
	else
	{
		(*lst)->str = str;
		(*lst)->next = NULL;
	}
}

int		ft_optimizac(t_char *lst)
{
	if (ft_optimss(&lst) == 1)
		return (1);
	else if (ft_optimoss2(&lst) == 1)
		return (1);
	else if (ft_optimoss4(&lst) == 1)
		return (1);
	else if (ft_optimoss3(&lst) == 1)
		return (1);
	else if (ft_optimoss5(&lst) == 1)
		return (1);
	else if (ft_optimoss6(&lst) == 1)
		return (1);
	else
		return (0);
}

int		ft_optim(t_char **lst)
{
	t_char	*list;
	t_char	*liek;

	list = *lst;
	while (list->next && list->next->next && list->next->next->next)
	{
		if (ft_optimiz(list) == 1)
		{
			liek = list->next;
			list->next = list->next->next->next;
			free(liek->next);
			free(liek);
			return (1);
		}
		else if (ft_optimizac(list) == 1)
			return (1);
		list = list->next;
	}
	return (0);
}

void	ft_printlist(t_char *lst)
{
	t_char	*clon;
	int		i;

	i = 0;
	clon = lst;
	while (clon)
	{
		ft_printf("%s\n", clon->str);
		clon = clon->next;
		i++;
	}
}
