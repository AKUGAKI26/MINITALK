/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenhamm <obenhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 18:46:27 by obenhamm          #+#    #+#             */
/*   Updated: 2025/03/03 15:37:33 by obenhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
#define MINITALK_H

#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
#include <limits.h>
#include <stdlib.h>     

void    ft_putchar(char c);
void    ft_putnbr(int n);
int     ft_atoi(const char *str);
void    printbits(unsigned char c, int pid);
void    ft_putstr(char *str);
void    ft_putendl(char *str);
void    ft_putendl_fd(char *str, int fd);
void    ft_putstr_fd(char *str, int fd);
void    ft_putchar_fd(char c, int fd);
void    ft_putnbr_fd(int n, int fd);
void    ft_bzero(void *s, size_t n);


#endif