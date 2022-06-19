/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_rr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 23:06:13 by donchoi           #+#    #+#             */
/*   Updated: 2022/06/14 23:06:13 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rra(t_list **a)
{
	t_list	*last;

	if (!*a || !(*a)->next)
		return ;
	last = ft_lstlast(*a);
	ft_lstdel_back(a);
	ft_lstadd_front(a, last);
	ft_putendl_fd("rra", 1);
}

void	rrb(t_list **b)
{
	t_list	*last;

	if (!*b || !(*b)->next)
		return ;
	last = ft_lstlast(*b);
	ft_lstdel_back(b);
	ft_lstadd_front(b, last);
	ft_putendl_fd("rrb", 1);
}

void	rrr(t_list **a, t_list **b)
{
	t_list	*last;

	if (*a && (*a)->next)
	{
		last = ft_lstlast(*a);
		ft_lstdel_back(a);
		ft_lstadd_front(a, last);
	}
	if (*b && (*b)->next)
	{
		last = ft_lstlast(*b);
		ft_lstdel_back(b);
		ft_lstadd_front(b, last);
	}
	ft_putendl_fd("rrr", 1);
}
