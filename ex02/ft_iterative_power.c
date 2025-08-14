/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 17:11:35 by tchumbas          #+#    #+#             */
/*   Updated: 2025/08/12 17:23:12 by tchumbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	sum;

	sum = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		sum *= nb;
		power--;
	}
	return (sum);
}

/* #include <stdio.h>

int	main(void)
{
	int	n;
	int	power;

	n = 7;
	power = 3;
	printf("%d", ft_iterative_power(n, power));
} */
