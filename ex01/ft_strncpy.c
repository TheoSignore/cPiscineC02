/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsignore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 10:10:48 by tsignore          #+#    #+#             */
/*   Updated: 2020/07/07 10:12:38 by tsignore         ###   ########.fr       */
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
	unsigned int src_len;

	src_len = ft_strlen(src);
	i = 0;
	while (i < n + 1)
	{
		dest[i] = i >= src_len || i == n ? '\0' : src[i];
		i++;
	}
	return (&dest[n]);
}
