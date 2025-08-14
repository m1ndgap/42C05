/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 17:02:44 by tchumbas          #+#    #+#             */
/*   Updated: 2025/08/12 17:11:17 by tchumbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 1 || nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	nb *= ft_recursive_factorial(nb - 1);
	return (nb);
}

/*
#include <stdio.h>

int	main(void)
{
	int	fact;

	fact = 7;
	printf("%d", ft_recursive_factorial(fact));
} */
