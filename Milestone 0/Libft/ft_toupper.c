/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzangaro <mzangaro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:24:21 by mzangaro          #+#    #+#             */
/*   Updated: 2024/09/27 17:50:43 by mzangaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c = c - 32;
	}
	return (c);
}

/*int main (void)
{
	int	c;
	char	cast_c;

	c = ft_toupper('a'); // Store the result of ft_toupper in c
	
	cast_c = (char)c; // Cast c (int) to char so we can pass it to write
	
	write(1, &cast_c, 1);
	return(0);
}*/