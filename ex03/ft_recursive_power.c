/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 17:11:35 by tchumbas          #+#    #+#             */
/*   Updated: 2025/08/12 17:31:28 by tchumbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	sum;

	sum = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	return (nb * ft_recursive_power(nb, power - 1));
}

/* #include <stdio.h>

int	main(void)
{
	int	n;
	int	power;

	n = 7;
	power = 3;
	printf("%d", ft_recursive_power(n, power));
} */

// 7^3
// 7 * v
// 	7 * (7*v)
// 		7 * (7*v)
// 				1
