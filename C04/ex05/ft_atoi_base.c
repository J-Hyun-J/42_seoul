/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyjeong <hyjeong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 21:04:31 by hyjeong           #+#    #+#             */
/*   Updated: 2021/03/10 21:05:08 by hyjeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*g_base;
int		g_len;

int		ft_get_len(void)
{
	int chk[256];
	int i;

	i = 0;
	while (i < 256)
		chk[i++] = 0;
	g_len = 0;
	while (g_base[g_len])
	{
		if (chk[(int)g_base[g_len]] ||
			g_base[g_len] == '+' ||
			g_base[g_len] == '-' ||
			g_base[g_len] == ' ' ||
			('\t' <= g_base[g_len] && g_base[g_len] <= '\r'))
			return (0);
		chk[(int)g_base[g_len++]] = 1;
	}
	return (1);
}

int		ft_get_idx(char c)
{
	int i;

	i = 0;
	while (i < g_len)
	{
		if (c == g_base[i])
			return (i);
		++i;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int ret;
	int sign;
	int idx;

	g_base = base;
	if (!ft_get_len() || g_len == 0 || g_len == 1)
		return (0);
	ret = 0;
	sign = 1;
	while (('\t' <= *str && *str <= '\r') || *str == ' ')
		++str;
	while (*str == '+' || *str == '-')
		if (*(str++) == '-')
			sign *= -1;
	while (*str)
	{
		idx = ft_get_idx(*(str++));
		if (idx == -1)
			break ;
		ret *= g_len;
		ret += (sign * idx);
	}
	return (ret);
}
