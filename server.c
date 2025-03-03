/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenhamm <obenhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 18:46:31 by obenhamm          #+#    #+#             */
/*   Updated: 2025/03/02 16:00:03 by obenhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_putchar(char c)
{

	write(1, &c, 1);
}

void handler(int sig)
{
    static int c;
    static int i;
    if (sig == SIGUSR1)
        c |= (128 >> i);
    //printf("c = %b\n", c);
    i++;
    if(i == 8)
    {
        write(1, &c, 1);
        c = 0;
        i = 0;
    }
}

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
	}
	ft_putchar(n % 10 + '0');
}

int main(void)
{
    ft_putnbr(getpid());
    signal(SIGUSR1,handler);
    signal(SIGUSR2,handler);
    while(1)
    {
        pause();
    }
    return 0;
}