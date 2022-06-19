/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_r.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 23:02:08 by donchoi           #+#    #+#             */
/*   Updated: 2022/06/14 23:02:08 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ra(t_list **a)
{
	t_list	*first;

	if (!*a)
		return (0);
	first = *a;
	ft_lstdel_front(a);
	ft_lstadd_back(a, first);
	ft_putendl_fd("ra", 1);
	return (1);
}

int	rb(t_list **b)
{
	t_list	*first;

	if (!*b)
		return (0);
	first = *b;
	ft_lstdel_front(b);
	ft_lstadd_back(b, first);
	ft_putendl_fd("rb", 1);
	return (1);
}

void	rr(t_list **a, t_list **b)
{
	t_list	*first;

	if (*a)
	{
		first = *a;
		ft_lstdel_front(a);
		ft_lstadd_back(a, first);
	}
	if (*b)
	{
		first = *b;
		ft_lstdel_front(b);
		ft_lstadd_back(b, first);
	}
	ft_putendl_fd("rr", 1);
}
