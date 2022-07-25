/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymohamed <ymohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 23:30:18 by ymohamed          #+#    #+#             */
/*   Updated: 2022/07/25 17:50:32 by ymohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	calcu(int *nb, int *md, int *i, char *str);

int	ft_atoi(char *str)
{
	int	i;
	int	sn;
	int	nb;
	int	md;

	i = 0;
	sn = 1;
	nb = 0;
	md = 0;
	while (str[i] == ' ' || (str[i] > 8 && str[i] < 14))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sn = sn * -1;
		i++;
	}
	calcu(&nb, &md, &i, str);
	if (md >= 19 && sn < 0)
		return (0);
	else if (md >= 19 && sn > 0)
		return (-1);
	return (nb * sn);
}

static void	calcu(int *nb, int *md, int *i, char *str)
{
	while (str[*i] >= '0' && str[*i] <= '9' && *md < 20)
	{
		*nb = *nb * 10 + (str[*i] - 48);
		*md = *md + 1;
		*i = *i + 1;
	}
}
