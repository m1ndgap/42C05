/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 17:11:35 by tchumbas          #+#    #+#             */
/*   Updated: 2025/08/12 17:53:29 by tchumbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 1 || index == 2)
		return (1);
	if (index == 0)
		return (0);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/* #include <stdio.h>

int	main(void)
{
	int n;

	n = 7;
	printf("%d", ft_fibonacci(n));
} */

// f7 
//	f6 + f5
// (f5+f4)	+	(f4+f3)
// (f3+f2)(f2+f1)....
// (f2+f1)+f1+1)+(F1+1)+(1+1)
//	...
//	((1+1)+1)+(1+1)+(1+1)