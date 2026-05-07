/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staladta <staladta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 14:09:34 by ynouveau          #+#    #+#             */
/*   Updated: 2026/05/07 18:04:58 by staladta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_digit(int nb)
{
	char	c;

	c = '0' + nb;
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2137483648", 11);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nb);
	}
	else if (nb >= 0 && nb < 10)
	{
		ft_put_digit(nb);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_put_digit(nb % 10);
	}
}

int main(void)
{
	int INT_MIN = -2147483648;
	int INT_MAX = 2147483647;

	ft_putnbr(INT_MIN);
	write(1, "\n", 1);
	ft_putnbr(-123123);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(1391);
	write(1, "\n", 1);
	ft_putnbr(INT_MAX);
}
