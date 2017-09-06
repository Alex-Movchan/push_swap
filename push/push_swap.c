/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 16:43:08 by amovchan          #+#    #+#             */
/*   Updated: 2017/04/25 17:31:09 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		lenlist(t_char *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

t_char	*ft_isoptim(t_char *lst, t_char *list)
{
	t_char	*begin;
	t_char	*begin2;

	begin = lst;
	begin2 = list;
	while (ft_optim(&begin) == 1)
		;
	while (ft_optim(&begin2) == 1)
		;
	if (lenlist(list) < lenlist(lst))
		return (list);
	else
		return (lst);
}

void	push_swap(t_int *stec_a, t_int *stec_b)
{
	t_int	*stec_a2;
	t_char	*lst;
	t_char	*list;
	t_char	*begin;
	t_char	*begin2;

	list = NULL;
	lst = NULL;
	stec_a2 = ft_steckcpy(stec_a);
	lst = ft_charlst(lst);
	list = ft_charlst(list);
	begin = lst;
	begin2 = list;
	ft_quick_sort(&stec_a, &stec_b, sizestec(stec_a), &lst);
	ft_quicksort(&stec_a2, &stec_b, sizestec(stec_a2), &list);
	ft_printlist(ft_isoptim(begin, begin2));
	ft_liekcoptim(&begin);
	ft_liekcoptim(&begin2);
	ft_liekclean(&stec_a2);
	ft_liekclean(&stec_a);
	ft_liekclean(&stec_b);
}
