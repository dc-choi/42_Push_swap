/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 23:03:17 by donchoi           #+#    #+#             */
/*   Updated: 2022/06/14 23:03:17 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sa(t_list **a)
{
	t_list	*before;
	t_list	*top;

	if (!(*a)->next)
		return ;
	before = (*a)->next;
	top = *a;
	ft_lstdel_front(a);
	ft_lstdel_front(a);
	ft_lstadd_front(a, top);
	ft_lstadd_front(a, before);
	ft_putendl_fd("sa", 1);
}

void	sb(t_list **b)
{
	t_list	*before;
	t_list	*top;

	if (!(*b)->next)
		return ;
	before = (*b)->next;
	top = *b;
	ft_lstdel_front(b);
	ft_lstdel_front(b);
	ft_lstadd_front(b, top);
	ft_lstadd_front(b, before);
	ft_putendl_fd("sb", 1);
}

void	ss(t_list **a, t_list **b)
{
	t_list	*before;
	t_list	*top;

	if ((*a)->next)
	{
		before = (*a)->next;
		top = *a;
		ft_lstdel_front(a);
		ft_lstdel_front(a);
		ft_lstadd_front(a, top);
		ft_lstadd_front(a, before);
	}
	if ((*b)->next)
	{
		before = (*b)->next;
		top = *b;
		ft_lstdel_front(b);
		ft_lstdel_front(b);
		ft_lstadd_front(b, top);
		ft_lstadd_front(b, before);
	}
	ft_putendl_fd("ss", 1);
}
