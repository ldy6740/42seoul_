/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolim <dolim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 17:47:33 by dolim             #+#    #+#             */
/*   Updated: 2020/11/02 01:25:50 by dolim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int c;

	i = 0;
	if (size == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	j = 0;
	while (dest[j])
		j++;
	c = 0;
	while (src[c] && c + j < size - 1)
	{
		dest[j + c] = src[c];
		c++;
	}
	if (c < size)
		dest[c + j] = '\0';
	if (size < j)
		return (src[i] + size);
	return (dest[j] + src[i]);
}

int		main(void)
{
	char dest[7];
	char src[4];

	dest[7] = "string";
	src[4] = "src";
	ft_strlcat(dest, src, 12);
	return (0);
}
