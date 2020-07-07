/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsignore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 14:56:46 by tsignore          #+#    #+#             */
/*   Updated: 2020/07/07 15:57:22 by tsignore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int rvalue;

	i = 0;
	rvalue = 0;
	while (src[rvalue] != '\0')
		rvalue++;
	while (i < size - 1 && i < rvalue)
	{
		dest[i] = src[i];
		i++;
	}
	dest[size - 1] = size != 0 ? '\0' : dest[size - 1];
	return (rvalue);
}
