/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzangaro <mzangaro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 13:06:14 by mzangaro          #+#    #+#             */
/*   Updated: 2024/10/04 13:12:24 by mzangaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*last_occurrence;

	last_occurrence = NULL; // To store the address of the last occurrence of c
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			last_occurrence = (char *)&s[i];// Keep updating the pointer
		}
		i++;
	}
	if (c == '\0')
	{
		return ((char *)&s[i]);
	}
	return (last_occurrence);
}
