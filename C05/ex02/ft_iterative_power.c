/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyjeong <hyjeong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:37:01 by hyjeong           #+#    #+#             */
/*   Updated: 2021/03/11 17:37:03 by hyjeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int num;

	num = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power--)
		num *= nb;
	return (num);
}
