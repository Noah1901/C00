/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 09:28:49 by kgarcia           #+#    #+#             */
/*   Updated: 2023/07/06 11:20:53 by kgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_print_comb2(void);

void putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char a;
	char b;

	a = 0;
	b = 0;

	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{