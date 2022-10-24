/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbonnefo <lbonnefo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:55:41 by lbonnefo          #+#    #+#             */
/*   Updated: 2022/10/24 10:05:32 by lbonnefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>

int main()
{
	int x;
	int *testptr;
	char *teststr = "%s %";
	int ft_len;
	int len;
	
	testptr = NULL;
	ft_printf("-------hex-------\n");
	x = ft_printf("is hex : %x\n", 123);
	ft_printf("len printed : %d\n", x);
	x = printf("is hex : %x\n", 123);
	printf("len printed : %d\n", x);
	ft_printf("-------HEX-------\n");
	x = ft_printf("is UPPER hex : %X\n", 123);
	ft_printf("len printed : %d\n", x);
	x = printf("is UPPER hex : %X\n", 123);
	printf("len printed : %d\n", x);
	ft_printf("-------int-------\n");
	x = ft_printf("is int: %d, %i\n", 123, 123);
	ft_printf("len printed : %d\n", x);	
	x = printf("is int: %d, %i\n", 123, 123);
	printf("len printed : %d\n", x);
	ft_printf("-------unb-------\n");
	x = ft_printf("is unsigned : %u\n", 123);
	ft_printf("len printed : %d\n", x);
	x = printf("is unsigned : %u\n", 123);
	printf("len printed : %d\n", x);
	ft_printf("-------str-------\n");
	x = ft_printf("is str : %s\n", teststr);
	ft_printf("len printed : %d\n", x);
	x = printf("is str : %s\n", teststr);
	printf("len printed : %d\n", x);
	ft_printf("//->fct doit segfault quand NULL ptr is sent\n");
//	x = ft_printf(teststr);
//	ft_printf("len printed : %d\n", x);
//	x = printf(teststr);
//	printf("len printed : %d\n", x);
	ft_printf("-------%%--------\n");
	x = ft_printf("is %% : %%\n");
	ft_printf("len printed : %d\n", x);
	x = printf("is %% : %%\n");
	printf("len printed : %d\n", x);
	ft_printf("-------ptr-------\n");
	x = ft_printf("is ptr : %p\n", testptr);
	ft_printf("len printed : %d\n", x);
	x = printf("is ptr : %p\n", testptr);
	printf("len printed : %d\n", x);
	ft_printf("------bonus#-----\n");			//affiche 0x ou 0X devant hex => x, X
//	x = ft_printf("is ptr : %p\n", testptr);
//	ft_printf("len printed : %d\n", x);
	x = printf("is bonus# : %#x\n", 123);
	printf("len printed : %d\n", x);
	ft_printf("------bonus' '-----\n"); 		//espace devant signed format => d, i ATTENTION si il y a + a la suite d'espace, espace est ignore
//	x = ft_printf("is ptr : %p\n", testptr);
//	ft_printf("len printed : %d\n", x);
	x = printf("is bonus' ' : % i\n", 123);
	printf("len printed : %d\n", x);
	ft_printf("------bonus+-----\n");			//signe devant signed formats => d, i
//	x = ft_printf("is ptr : %p\n", testptr);
//	ft_printf("len printed : %d\n", x);
	x = printf("is bonus+ : %+i\n", -123);
	printf("len printed : %d\n", x);
	ft_printf("-----Random-------\n");
	x = ft_printf("%s %", "test1");
	printf("\n");
	ft_len = ft_printf("%%ft > [%%%s] %X, %p\n","beep", INT_MIN, testptr);
	len = printf("%%ma > [%%%s] %X, %p\n","boop", INT_MIN, testptr);
	printf("ft_len {%d} \t len {%d}", ft_len ,len);
}

//si deuxieme n'est pas donne -> data argument not used by format strng
