/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsignore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 10:17:07 by tsignore          #+#    #+#             */
/*   Updated: 2020/07/07 10:47:58 by tsignore         ###   ########.fr       */
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

int	ft_str_is_alpha(char *str)
{
	int i;
	int str_len;

	i = 0;
	str_len = ft_strlen(str);
	while (i < str_len || str_len == 0)
	{
		if (str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122)
			return (0);
		i++;
	}
	return (1);
}
