/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staladta <staladta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 16:13:38 by cthongsa          #+#    #+#             */
/*   Updated: 2026/05/07 17:57:15 by staladta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	result;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb < 10)
	{
		result = nb + '0';
		write(1, &result, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		result = (nb % 10) + '0';
		write(1, &result, 1);
	}
}

int main(void)
{
	ft_putnbr(-2147483649);
	return 0;
}