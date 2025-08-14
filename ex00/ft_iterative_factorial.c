/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 16:50:05 by tchumbas          #+#    #+#             */
/*   Updated: 2025/08/12 17:01:50 by tchumbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	unsigned int	i;
	unsigned int	fact;

	i = nb;
	fact = 1;
	if (nb == 1 || nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (i >= 1)
	{
		fact *= i;
		i--;
	}
	return (fact);
}

/* int	main(void)
{
	int fact = 9;
	printf("%d", ft_iterative_factorial(fact));
} */