/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcollas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 07:12:58 by rcollas           #+#    #+#             */
/*   Updated: 2021/03/12 08:35:19 by rcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	int_to_char(int origin_nb)
{
	int char_1;
	int char_2;

	char_1 = origin_nb / 10 + 48;
	char_2 = origin_nb % 10 + 48;
	write(1, &char_1, 1);
	write(1, &char_2, 1);
}

void	add_comma(int limiter)
{
	if (limiter != 98)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int nb_1;
	int nb_2;

	nb_1 = 0;
	while (nb_1 <= 98)
	{
		nb_2 = nb_1;
		while (nb_2 <= 98)
		{
			nb_2++;
			int_to_char(nb_1);
			write(1, " ", 1);
			int_to_char(nb_2);
			add_comma(nb_1);
		}
		nb_1++;
	}
}
