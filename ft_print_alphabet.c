/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iainjarv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 20:00:42 by iainjarv          #+#    #+#             */
/*   Updated: 2022/06/30 21:15:37 by iainjarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int ft_putchar(char c)
{
	write(1, '&c', 1);
	return (0);
}

int ft_nputchar(char c, int n)
{
	int i;
	i= 0;
	while (i < n)
		{
		ft_putchar (c);
		i= i + 1;
		} 
	return(0);
}

int main()
{	
	ft_nputchar('a', 26);
	return (0);
}
