/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymohamed <ymohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 16:41:01 by ymohamed          #+#    #+#             */
/*   Updated: 2022/06/01 19:48:41 by ymohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	c;
	unsigned int	ret;

	c = 0;
	ret = 0;
	while ((s1[c] != '\0') && (c < (n -1)) && n != 0)
	{
		if (s1[c] != s2[c])
		{
			ret = s1[c] - s2[c];
			break ;
		}
		c++;
	}
	if (s1[c] != s2[c] && n != 0)
		ret = s1[c] - s2[c];
	return (ret);
}
/*
int main()
{
	char	s1[] = "hi at school";
	char	s2[] = "hi at school there";
	unsigned int	n;
	unsigned int	m;

	n = 13;
	m = ft_strncmp(s1 ,s2, n);
	printf("%d\n", m);
}*/
