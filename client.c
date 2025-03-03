/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenhamm <obenhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 18:46:33 by obenhamm          #+#    #+#             */
/*   Updated: 2025/03/02 16:01:42 by obenhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	ft_atoi(const char *str)
{
	unsigned int	i;
	long			r;
	int				s;

	i = 0;
	r = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
			return 1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	return (r);
}

void printbits (unsigned char c, int pid)
{
    int i;
    i = 0;
    while (i <= 7)
    {
        if (c & (128 >> i))
        {
            kill(pid, SIGUSR1);
        }
        else
        {
            kill(pid, SIGUSR2);
        }
        i++;
        usleep(1000);
    }
}

int main(int ac , char **av)
{       
    int i;
    
    i = 0;
    if(ac != 3)
        return 0;
    int pid = ft_atoi(av[1]);
    // if (!kill(pid, 0))
    // {
        while(av[2][i])
        {    
            printbits(av[2][i],pid);
            i++;
        }
    // }
    return(0);
}