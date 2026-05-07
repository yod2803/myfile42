/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staladta <staladta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 16:42:20 by ynouveau          #+#    #+#             */
/*   Updated: 2026/05/07 18:04:34 by staladta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int		idx;
	char	digit;

	idx = 0;
	digit = '0';
	while (idx < 10)
	{
		ft_putchar(digit + idx);
		idx++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
