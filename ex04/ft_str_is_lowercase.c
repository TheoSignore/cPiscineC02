/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsignore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 11:12:55 by tsignore          #+#    #+#             */
/*   Updated: 2020/07/07 11:17:24 by tsignore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int size;

	size = 0;
	while (str[size] != '\0')
		size++;
	return (size);
}

int	ft_str_is_lowercase(char *str)
{
	int i;
	int str_len;

	i = 0;
	str_len = ft_strlen(str);
	while (i < str_len)
	{
		if (str[i] < 97 || str[i] > 122)
			return (0);
		i++;
	}
	return (1);
}
