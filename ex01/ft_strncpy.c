/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsignore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 10:10:48 by tsignore          #+#    #+#             */
/*   Updated: 2020/07/09 17:26:42 by tsignore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int size;

	size = 0;
	while (str[size] != '\0')
		size++;
	return (size);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int dst_len;

	dst_len = ft_strlen(dest);
	i = 0;
	while (i < n && src[i] && dest[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i <= n && i < dst_len)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
