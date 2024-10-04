/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 18:21:48 by marvin            #+#    #+#             */
/*   Updated: 2024/09/29 18:21:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchar(const char *s, int c)
{
	int	i;
	char	*last_occurrence;

	last_occurrence = NULL; // To store the address of the last occurrence of c
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			last_occurrence = (char *)&s[i];  // Keep updating the pointer
		}
		i++;
	}
	if (c == '\0')
	{
		return (char *)&s[i];
	}
	return last_occurrence;
}
