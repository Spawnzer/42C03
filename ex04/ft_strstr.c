/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 18:32:20 by adubeau           #+#    #+#             */
/*   Updated: 2021/02/19 11:40:24 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *src, char *to_find)
{
	int i;
	int j;
	int k;
	int pointer;

	i = 0;
	j = 0;
	while (to_find[i])
		i++;
	while (src[j])
	{
		k = 0;
		pointer = 0;
		while (src[k] && to_find[k])
		{
			if (src[j + k] == to_find[k])
				pointer++;
			if (pointer == i)
				return (j);
			k++;
		}
		j++;
	}
	return (0);
}
