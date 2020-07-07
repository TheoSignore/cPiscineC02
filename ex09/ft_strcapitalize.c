/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsignore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 13:16:49 by tsignore          #+#    #+#             */
/*   Updated: 2020/07/07 14:28:34 by tsignore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_alphanumeric(char c)
{
	if (c < 48 || (c > 57 && c < 65) || (c > 90 && c < 97) || c > 122)
		return (0);
	return (1);
}

int		ft_is_lowcase(char c)
{
	if (ft_is_alphanumeric(c) && c > 96 && c < 123)
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && ft_is_lowcase(str[i]))
			str[i] = str[i] - 32;
		else if (!ft_is_alphanumeric(str[i - 1]) && ft_is_lowcase(str[i]))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
