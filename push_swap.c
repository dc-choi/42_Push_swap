/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 15:02:20 by donchoi           #+#    #+#             */
/*   Updated: 2022/06/11 15:02:20 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char *argv[])
{
	int	idx;

	idx = 0;
	if (argc != 2)
		exit(0);
	while (argv[idx])
	{
		printf("%s\n", argv[idx]);
		idx++;
	}

	exit(0);
}
