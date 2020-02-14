/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goka-rop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 01:14:35 by goka-rop          #+#    #+#             */
/*   Updated: 2019/10/24 19:01:32 by goka-rop         ###   ########.fr       */
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

void	ft_printname(char *str)
{
	ft_putstr(str);
}

int		main(int argc, char **argv)
{
	if (argc > 0)
	{
		ft_printname(argv[0]);
		ft_putchar('\n');
		return (0);
	}
}
