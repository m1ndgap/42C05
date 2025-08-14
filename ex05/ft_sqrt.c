/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 11:09:20 by tchumbas          #+#    #+#             */
/*   Updated: 2025/08/14 11:22:08 by tchumbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_sqrt(int nb)
{
	int	sr;

	sr = 1;
	if (nb == 1)
	{
		return (1);
	}
	while (sr <= nb / 2)
	{
		if (sr * sr == nb)
		{
			return (sr);
		}
		sr++;
	}
	return (0);
}

/* int	main(void)
{
	int n = 114;
	int x = 9;
	int z = 25;

	printf("\nsq of 114 = %d\nsq of 9 = %d\nsq of 25 = %d", ft_sqrt(n),
		ft_sqrt(x), ft_sqrt(z));
} */