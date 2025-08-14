/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 11:21:44 by tchumbas          #+#    #+#             */
/*   Updated: 2025/08/14 11:46:17 by tchumbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_is_prime(int nb)
{
	int	x;

	x = nb;
	if (nb <= 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (0);
	while (x-- >= 3)
	{
		if (nb % x == 0)
		{
			return (0);
		}
	}
	return (1);
}

/* int	main(void)
{
	int	x;
	int	y;
	int	z;

	x = 7;
	y = 11;
	z = 148;
	printf("\n%d is prime? %d\n%d is prime? %d\n%d is prime? %d", x,
		ft_is_prime(x), y, ft_is_prime(y), z, ft_is_prime(z));
} */
