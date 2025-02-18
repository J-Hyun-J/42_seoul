/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyjeong <hyjeong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 22:37:21 by hyjeong           #+#    #+#             */
/*   Updated: 2021/03/16 00:45:39 by hyjeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *ret;
	int *temp;

	if (min >= max)
		return (0);
	ret = (int *)malloc(sizeof(int) * ((long long)max - min));
	if (!ret)
		return (0);
	temp = ret;
	while (min < max)
		*(temp++) = min++;
	return (ret);
}
