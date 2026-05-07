/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staladta <staladta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 17:28:33 by ynouveau          #+#    #+#             */
/*   Updated: 2026/05/07 18:04:47 by staladta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_digit(int digit_0, int digit_1, int digit_2)
{
	char	zero;

	zero = '0';
	ft_putchar(zero + digit_0);
	ft_putchar(zero + digit_1);
	ft_putchar(zero + digit_2);
}

void	ft_print_comb(void)
{
	int	digit_0;
	int	digit_1;
	int	digit_2;

	digit_0 = 0;
	while (digit_0 <= 7)
	{
		digit_1 = digit_0 + 1;
		while (digit_1 <= 8)
		{
			digit_2 = digit_1 + 1;
			while (digit_2 <= 9)
			{
				print_digit(digit_0, digit_1, digit_2);
				if (!(digit_0 == 7 && digit_1 == 8 && digit_2 == 9))
				{
					write(1, ", ", 2);
				}
				digit_2++;
			}
			digit_1++;
		}
		digit_0++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
