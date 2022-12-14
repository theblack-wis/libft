/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrajiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:15:44 by aerrajiy          #+#    #+#             */
/*   Updated: 2022/10/18 22:16:31 by aerrajiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*clst;
	int		i;

	if (!lst)
		return (0);
	clst = lst;
	i = 0;
	while (clst != NULL)
	{
		i++;
		clst = clst->next;
	}
	return (i);
}
