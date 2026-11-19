/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroy <viroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 18:27:26 by viroy             #+#    #+#             */
/*   Updated: 2026/11/19 13:59:55 by viroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int	ft_print_conv(const char *format, va_list *arg_ptr,
		int i, int count)
{
	int	*pc;
	int	a;

	a = 0;
	pc = &a;
	if (format[i] == 'c')
		count += ft_putchar_fd(va_arg(*arg_ptr, int), 1);
	else if (format[i] == 's')
		count += ft_putstr_fd(va_arg(*arg_ptr, char *), 1);
	else if (format[i] == 'p')
		count += ft_h(va_arg(*arg_ptr, unsigned long), "0123456789abcdef", pc);
	else if (format[i] == 'd' || format[i] == 'i')
		count += ft_putnbr_fd(va_arg(*arg_ptr, int), 1, pc);
	else if (format[i] == 'u')
		count += ft_print_unsigned_int(va_arg(*arg_ptr, unsigned int), 1, pc);
	else if (format[i] == 'x')
		count += ft_hl(va_arg(*arg_ptr, unsigned int), "0123456789abcdef", pc);
	else if (format[i] == 'X')
		count += ft_hu(va_arg(*arg_ptr, unsigned int), "0123456789ABCDEF", pc);
	else if (format[i] == '%')
		count += ft_putchar_fd('%', 1);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg_ptr;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(arg_ptr, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count = ft_print_conv(format, &arg_ptr, i, count);
		}
		else
		{
			ft_putchar_fd(format[i], 1);
			count++;
		}
		i++;
	}
	return (count);
}

//int main()
//{
//	char	ca[] = "uiwgr";
//	int	a;
//	int	b;

//	a = ft_printf(" %p\n\n", ca);
//	ft_printf("%p", ca);

//	printf("\n\nOwn : %d", a);
//	printf("Real : %d\nOwn : %d", b);
//}

//int	main(void)
//{
//	char str[] = "yugwfu";

//	int	a = ft_printf("%s       %c", "TEST     LONGUEUR", 'L');
//	int	b = printf("%s       %c", "TEST     LONGUEUR", 'L');
//	ft_printf("%c", '\n');
//	ft_printf("MAFONCTION %d", a);
//	ft_printf("%c", '\n');
//	ft_printf("\nFONCTIONBASE %d", b);
//	ft_printf("%c", '\n');
//	ft_printf("%u", 843813);
//	ft_printf("%c", '\n');
//	ft_printf("%s       %c", "Tiruebt   gno8648643", 'g');
//	ft_printf("%c", '\n');
//	ft_printf("%d", -4530852);
//	ft_printf("%c", '\n');
//	ft_printf("%%");
//	ft_printf("%c", '\n');
//	ft_printf("%p", &str);
//	ft_printf("%c", '\n');
//	ft_printf("%x", -34384317);
//	ft_printf("%c", '\n');
//	ft_printf("%X", -34384317);
//	ft_printf("%c", '\n');
//	ft_printf("%s", NULL);
//	ft_printf("%c", '\n');
//	ft_printf("%c", '\n');
//	printf("%u", 843813);
//	printf("%c", '\n');
//	printf("%s       %c", "Tiruebt   gno8648643", 'g');
//	printf("%c", '\n');
//	printf("%d", 35);
//	printf("%c", '\n');
//	printf("%%");
//	printf("%c", '\n');
//	printf("%p", &str);
//	printf("%c", '\n');
//	printf("%x", -34384317);
//	printf("%c", '\n');
//	printf("%X", -34384317);
//}