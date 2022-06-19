/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 23:00:51 by donchoi           #+#    #+#             */
/*   Updated: 2022/06/14 23:00:51 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	pa(t_list **a, t_list **b)
{
	t_list	*front;

	if (!*b)
		return ;
	front = *b;
	ft_lstdel_front(b);
	ft_lstadd_front(a, front);
	ft_putendl_fd("pa", 1);
}

void	pb(t_list **a, t_list **b)
{
	t_list	*front;

	if (!*a)
		return ;
	front = *a;
	ft_lstdel_front(a);
	ft_lstadd_front(b, front);
	ft_putendl_fd("pb", 1);
}
