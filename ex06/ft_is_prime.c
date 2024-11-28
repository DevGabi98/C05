/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 14:49:48 by vhacman           #+#    #+#             */
/*   Updated: 2024/11/28 14:49:52 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / i))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
int     main(void)
{
        printf("%d\n", ft_is_prime(10));
        printf("%d\n", ft_is_prime(49));
        printf("%d\n", ft_is_prime(13));
        printf("%d\n", ft_is_prime(7));
}*/
