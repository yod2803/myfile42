/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staladta <staladta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 13:43:15 by ynouveau          #+#    #+#             */
/*   Updated: 2026/05/07 18:04:53 by staladta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_number(int number)
{
	char	digit_character;

	digit_character = '0' + number;
	write(1, &digit_character, 1);
}

void	ft_print_number_pairs(int digit_a, int digit_b)
{
	ft_print_number(digit_a / 10);
	ft_print_number(digit_a % 10);
	write(1, " ", 1);
	ft_print_number(digit_b / 10);
	ft_print_number(digit_b % 10);
	if (!(digit_a == 98 && digit_b == 99))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	digit_a;
	int	digit_b;

	digit_a = 0;
	digit_b = digit_a + 1;
	while (digit_a < 98)
	{
		if (digit_b > 99)
		{
			digit_a++;
			digit_b = digit_a + 1;
		}
		ft_print_number_pairs(digit_a, digit_b);
		digit_b++;
	}
}

int main(void) {
	ft_print_comb2();
}
