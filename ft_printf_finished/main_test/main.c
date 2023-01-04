/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilizarr <lilizarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:10:38 by lilizarr          #+#    #+#             */
/*   Updated: 2022/12/29 17:04:22 by lilizarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <string.h>
#include <limits.h>

// void	test_ptr(void)
// {
// 	int				tmp1;
// 	int				tmp2;

// 	/* TEST 1 */
// 	tmp1 = ft_printf(" %p ", -1);
// 	ft_printf("\n*1* %d ft\n", tmp1);
// 	tmp2 = printf(" %p ", -1);
// 	printf("\n*1* %d\n\n", tmp2);
// 	/* TEST 2 */
// 	tmp1 = ft_printf(" %p ", 1);
// 	ft_printf("\n*2* %d ft\n", tmp1);
// 	tmp2 = printf(" %p ", 1);
// 	printf("\n*2* %d\n\n", tmp2);
// 	/* TEST 3 */
// 	tmp1 = ft_printf(" %p ", 15);
// 	ft_printf("\n*3* %d ft\n", tmp1);
// 	tmp2 = printf(" %p ", 15);
// 	printf("\n*3* %d\n\n", tmp2);
// 	/* TEST 4 */
// 	tmp1 = ft_printf(" %p ", 16);
// 	ft_printf("\n*4* %d ft\n", tmp1);
// 	tmp2 = printf(" %p ", 16);
// 	printf("\n*4* %d\n\n", tmp2);
// 	/* TEST 5 */
// 	tmp1 = ft_printf(" %p ", 17);
// 	ft_printf("\n*5* %d ft\n", tmp1);
// 	tmp2 = printf(" %p ", 17);
// 	printf("\n*5* %d\n\n", tmp2);
// 	/* TEST 6 */
// 	tmp1 = ft_printf(" %p %p ", LONG_MIN, LONG_MAX);
// 	ft_printf("\n*6* %d ft\n", tmp1);
// 	tmp2 = printf(" %p %p ", LONG_MIN, LONG_MAX);
// 	printf("\n*6* %d\n\n", tmp2);
// 	/* TEST 7 */
// 	tmp1 = ft_printf(" %p %p ", INT_MIN, INT_MAX);
// 	ft_printf("\n*7* %d ft\n", tmp1);
// 	tmp2 = printf(" %p %p ", INT_MIN, INT_MAX);
// 	printf("\n*7* %d\n\n", tmp2);
// 	/* TEST 8 */
// 	tmp1 = ft_printf(" %p %p ", ULONG_MAX, -ULONG_MAX);
// 	ft_printf("\n*8* %d ft\n", tmp1);
// 	tmp2 = printf(" %p %p ", ULONG_MAX, -ULONG_MAX);
// 	printf("\n*8* %d\n\n", tmp2);
// 	/* TEST 9 */
// 	tmp1 = ft_printf(" %p %p ", 0, 0);
// 	ft_printf("\n*9* %d ft\n", tmp1);
// 	tmp2 = printf(" %p %p ", 0, 0);
// 	printf("\n*9* %d\n\n", tmp2);
// 	// str = "1";
// 	// tmp = ft_printf("%p", str);
// 	// ft_printf("\n-%d\n", tmp);
// 	// tmp = printf("%p", str);
// 	// printf("\n*%d\n", tmp);
// }

// void	test_hex(void)
// {
// 	int				tmp1;
// 	int				tmp2;

// 	// /* -42 */
// 	// tmp1 = ft_printf(" %x ", -42);
// 	// ft_printf("\n*1* %d ft\n", tmp1);
// 	// tmp2 = printf(" %x ", -42);
// 	// printf("\n*1* %d\n", tmp2);
// 	// /* space */
// 	// tmp1 = ft_printf(" %x ", ' ');
// 	// ft_printf("\n* * %d ft\n", tmp1);
// 	// tmp2 = printf(" %x ", ' ');
// 	// printf("\n* * %d\n", tmp2);
// 	/* TEST 24 */
// 	tmp1 = ft_printf(" %x ", LONG_MAX);
// 	ft_printf("\n*24* %d ft\n", tmp1);
// 	tmp2 = printf(" %x ", LONG_MAX);
// 	printf("\n*24* %d\n", tmp2);
// 	/* TEST 25 */
// 	tmp1 = ft_printf(" %x ", LONG_MIN);
// 	ft_printf("\n*25* %d ft\n", tmp1);
// 	tmp2 = printf(" %x ", LONG_MIN);
// 	printf("\n*25* %d\n", tmp2);
// 	/* TEST 26 */
// 	// tmp1 = ft_printf(" %x ", UINT_MAX);
// 	// ft_printf("\n*26* %d ft\n", tmp1);
// 	// tmp2 = printf(" %x ", UINT_MAX);
// 	// printf("\n*26* %d\n", tmp2);
// 	// /* TEST 27 */
// 	// tmp1 = ft_printf(" %x ", ULONG_MAX);
// 	// ft_printf("\n*27* %d ft\n", tmp1);
// 	// tmp2 = printf(" %x ", ULONG_MAX);
// 	// printf("\n*27* %d\n", tmp2);
// 	// /* TEST 28 */
// 	// tmp1 = ft_printf(" %x ", 9223372036854775807LL);
// 	// ft_printf("\n*28* %d ft\n", tmp1);
// 	// tmp2 = printf(" %x ", 9223372036854775807LL);
// 	// printf("\n*28* %d\n", tmp2);
// 	// /* TEST 29 */
// 	// tmp1 = ft_printf(" %x %x %x %x %x %x %x", INT_MAX, INT_MIN, 
// LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
// 	// ft_printf("\n*29* %d ft\n", tmp1);
// 	// tmp2 = printf(" %x %x %x %x %x %x %x", INT_MAX, INT_MIN, LONG_MAX, 
// LONG_MIN, ULONG_MAX, 0, -42);
// 	// printf("\n*29* %d\n", tmp2);

// }

// void	mix(void)
// {
// 	int			tmp1;
// 	int			tmp2;

// 	// tmp1 = ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% 
// %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 
// 'A', "42", 42, 42, 42, 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', 
// "0", 0, 0, 0, 0, 42, 0);
// 	// ft_printf("\n*1* %d ft\n", tmp1);
// 	// tmp2 = printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% 
// %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% 
// %c%%", 'A', "42", 42, 42 , 42, 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 
// 42, 'C', "0", 0, 0, 0, 0, 42, 0);
// 	// printf("\n*1* %d \n", tmp2);
// 	// tmp1 = ft_printf("%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%",
// -42, 42, 'C', "0", 0, 0, 0, 0, 42, 0);
// 	// ft_printf("\n*1* %d ft\n", tmp1);
// 	// tmp2 = printf("%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%",
// -42, 42, 'C', "0", 0, 0, 0, 0, 42, 0);
// 	// printf("\n*1* %d \n", tmp2);
// 	// tmp1 = ft_printf("%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%",42, 
// 'C', "0", 0, 0, 0, 0, 42, 0);
// 	// ft_printf("\n*1* %d ft\n", tmp1);
// 	// tmp2 = printf("%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%",42, 
//'C', "0", 0, 0, 0, 0, 42, 0);
// 	// printf("\n*1* %d \n", tmp2);

// 	tmp1 = ft_printf("%x%%%X%%%% ", -42, 42);
// 	ft_printf("\n*MIX* %d ft\n", tmp1);
// 	tmp2 = printf("%x%%%X%%%% ", -42, 42);
// 	printf("\n*MIX* %d \n", tmp2);
// }

	// test_ptr();
	// test_hex();
	// mix();
int	main(void)
{
	int	tmp1;
	int	tmp2;

	printf("%d\n", printf("m%s %s %s %s %s %s %s %s %s %s %s %d %p %x %x %c hi %% hello %i %u\n", string, string, string, string, string, string, string, string, string, string, string, 11, string, 111, 0xF, 'c', 3, -94576579));
	printf("%d\n",ft_printf("m%s %s %s %s %s %s %s %s %s %s %s %d %p %x %x %c hi %% hello %i %u\n", string, string, string, string, string, string, string, string, string, string, string, 11, string, 111, 0xF, 'c', 3, -94576579));
	
	// printf(" 			            \n");
	// ft_printf(" 			            \n");
	// printf("\n\n\n\n\n\n\n\n\n");
	// ft_printf("\n\n\n\n\n\n\n\n\n");
	// printf("HI        HELLO\n");
	// ft_printf("HI        HELLO\n");
	// printf("( )\n");
	// ft_printf("( )\n");
	// printf("(psidxldch)\n");
	// ft_printf("(psidxldch)\n");
	// printf("%p\n", NULL);
	// ft_printf("%p\n", NULL);
	// printf("\n");
	// ft_printf("\n");
	// printf("%% %s hi\n", "hello");
	// ft_printf("%% %s hi\n", "hello");
	// printf("%s %s hi\n", string, string);
	// ft_printf("%s %s hi\n", string, string);
	// printf("%d\n", INT_MIN);
	// ft_printf("%d\n", INT_MIN);
	// printf("%d\n", INT_MIN - 1);
	// ft_printf("%d\n", INT_MIN - 1);
	// printf("%d\n", INT_MAX);
	// ft_printf("%d\n", INT_MAX);
	// printf("%d\n", INT_MAX + 1);
	// ft_printf("%d\n", INT_MAX + 1);
	printf("\n********************\n");
	tmp1 = ft_printf("");
	printf("\n*empty* %d\n", tmp1);
	tmp2 = printf("");
	printf("\n*empty* %d\n", tmp2);
	ft_printf("%d %i", 0.0, 0.0);
	printf("\n");
	printf("%d %i", 0.0, 0.0);
	printf("\n");
	ft_printf("%d %i", 4.2, 4.2);
	printf("\n");
	printf("%d %i", 4.2, 4.2);
	printf("\n");
	ft_printf("%d %d %d %i %i %i", 42, 4.2, 0.0, 42, 4.2, 0.0);
	printf("\n");
	printf("%d %d %d %i %i %i", 42, 4.2, 0.0, 42, 4.2, 0.0);
	printf("\n");
	ft_printf("-->|%p|<-- ", (void *)0x1900);
	printf("-->|%p|<-- ", (void *)0x1900);
	return (0);
}
// 	/* ------------ | int | ------------ */
// 	// tmp = ft_printf("%d|%%|", 2147483648, 'a');
// 	// ft_printf("\nft_ %d\n", tmp);
// 	// tmp = printf("%d|%%|", 2147483648, 'a');
// 	// printf("\n%d\n", tmp);
// 	/* ------------ | unsigned | ------------ */
// 	// tmp = ft_printf("%u", 21474836);
// 	// ft_printf("\nft_ %d\n", tmp);
// 	// tmp = printf("%u", 21474836);
// 	// printf("\n%d\n", tmp);
// 	/* ------------ |string | ------------*/
// 	// tmp = ft_printf("%s\n", "Test");
// 	// ft_printf("%d\n", tmp);
// 	// tmp = printf("%s\n", "Test");
// 	// printf("%d\n", tmp);
// 	/* ------------ | hex | ------------*/
// 	// tmp = printf("%x", 2147483647);
// 	// printf("\n %d\n", tmp);
// 	// tmp = ft_printf("%x", 2147483647);
// 	// ft_printf("\nft_ %d\n", tmp);
// 	// printf("-- UPPER -- \n");
// 	// tmp = printf("%X", 2147483647);
// 	// printf("\n %d\n", tmp);
// 	// tmp = ft_printf("%X", 2147483647);
// 	// ft_printf("\nft_ %d\n", tmp);
// 	/* ------------ | unsigned | ------------ */
// 	// unum = UINT_MAX;
// 	// printf("Max Test\n");
// 	// tmp = ft_printf("%d", unum);
// 	// printf("\n Count: %d\n", tmp);
// 	// tmp = printf("%u", unum);
// 	// printf("\n Count: %d\n", tmp);
// 	// printf("||||||||||||||||||\n");
// 	// unum = 76543;
// 	// printf("Positive Test\n");
// 	// tmp = ft_printf("%d", unum);
// 	// printf("\n Count: %d\n", tmp);
// 	// tmp = printf("%d", unum);
// 	// printf("\n Count: %d\n", tmp);
// 	// printf("||||||||||||||||||\n");
// 	// printf("Zero Test\n");
// 	// unum = 0;
// 	// tmp = ft_printf("%d", unum);
// 	// printf("\n Count: %d\n", tmp);
// 	// tmp = printf("%u", unum);
// 	// printf("\nCount: %d\n", tmp);

// 	// str_size = ft_get_strsize(15, 10);
// 	// str = ft_calloc(str_size, sizeof(char));
// 	// ft_convert2base(str, str_size, 10, 15);
// 	// printf("%s\n", str);
// 	// free(str);
// 	// str_size = ft_get_strsize(15, 8);
// 	// str = ft_calloc(str_size + 1, sizeof(char));
// 	// ft_convert2base(str, str_size, 8, 15);
// 	// printf("%s\n", str);
// 	// free(str);
// 	// str_size = ft_get_strsize(2147483648, 16);
// 	// printf("%lu | %lu\n", str_size, 2147483648);
// 	// str = ft_calloc(str_size + 1, sizeof(char));
// 	// ft_convert2base(str, str_size, 16, INT_MAX + 1);
// 	// printf("%s\n", str);
// 	// free(str);
