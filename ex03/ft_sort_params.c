/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goka-rop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 09:41:06 by goka-rop          #+#    #+#             */
/*   Updated: 2019/10/24 09:46:18 by goka-rop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	int		smallest;

	i = 1;
	j = 0;
	while (i < argc)
	{
		if (argv[i][j] < argv[i + 1][j])
		{
			smallest = i;
		}
		i++;
	}
	return (0);
}
