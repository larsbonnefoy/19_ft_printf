/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbonnefo <lbonnefo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:07:24 by lbonnefo          #+#    #+#             */
/*   Updated: 2022/10/21 16:08:22 by lbonnefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

void	ft_putchar_fd(char c, int fd, int *rtn);
size_t	ft_strlen(const char *s);
void	ft_is_hex(unsigned int nbr, char *base,  int fd, int *rtn);
void	ft_is_str(char *s, int fd, int *rtn);
void	ft_is_unsigned(unsigned int unb, int fd, int *rtn);
void	ft_is_int(int nb,int fd, int *rtn);
int		ft_printf(const char * format,...);
void	ft_is_ptr(void *ptr, int fd, int *rtn);

# endif
