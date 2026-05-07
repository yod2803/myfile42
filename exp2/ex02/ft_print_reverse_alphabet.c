/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staladta <staladta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 16:35:15 by ynouveau          #+#    #+#             */
/*   Updated: 2026/05/07 18:04:08 by staladta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	int		idx;
	char	letter;

	idx = 0;
	letter = 'z';
	while (idx < 26)
	{
		ft_putchar(letter - idx);
		idx++;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
