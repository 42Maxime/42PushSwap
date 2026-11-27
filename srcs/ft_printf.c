/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafouche <mafouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 14:46:24 by mafouche          #+#    #+#             */
/*   Updated: 2026/11/27 18:42:06 by mafouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	parser_v2(char c, va_list *args, int count)
{
	char	*base;
	int		x;
	int		*p;
	int		w;

	w = 0;
	base = "0123456789abcdef";
	x = 0;
	p = &x;
	if (c == 'c')
		count += ft_print_char(va_arg(*args, int));
	else if (c == 's')
		count += ft_print_string(va_arg(*args, char *));
	else if (c == 'p')
		count += ft_print_pointer(va_arg(*args, unsigned long), base, p, w);
	else if (c == 'd' || c == 'i')
		count += ft_print_integer(va_arg(*args, int), p);
	else if (c == 'u')
		count += ft_print_unsigned_decimal(va_arg(*args, unsigned int), p);
	else if (c == 'x' || c == 'X')
		count += ft_print_hex(va_arg(*args, unsigned int), base, c, p);
	else if (c == '%')
		count += ft_print_percent('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int				count;
	unsigned int	i;
	va_list			args;

	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			count = parser_v2(format[i + 1], &args, count);
			i++;
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}

/*int	main()
{
	char	s[] = "Maxime F";
	char	c = '1';
	int		i = -42;
	unsigned int	j = 100; 
	ft_printf("{'%s'}\n", s);
	ft_printf("{'%%'}\n");
	ft_printf("{'%c'}\n", c);
	ft_printf("{'%i'}\n", i);
	ft_printf("{'%d'}\n", i);
	ft_printf("{'%u'}\n", j);
	ft_printf("{'%x'}\n", i);
	ft_printf("{'%X'}\n", i);
	ft_printf("{'%p'}\n", s);
	ft_printf("\n\n");
	printf("{'%s'}\n", s);
	printf("{'%%'}\n");
	printf("{'%c'}\n", c);
	printf("{'%i'}\n", i);
	printf("{'%d'}\n", i);
	printf("{'%u'}\n", j);
	printf("{'%x'}\n", i);
	printf("{'%X'}\n", i);
	printf("{'%p'}\n", s);

	int a = printf("\nBonjour %s\n", s);
	int b = ft_printf("\nBonjour %s\n", s);

	printf("%d | %d", a, b);
}*/

/*int main(void)
{
    int sys_len, my_len;
    int n = 42;

    printf("[         ]\n\n");

    // 1. Test %c
    printf("[REAL] : "); sys_len = printf("Char: %c\n", 'A');
    printf(""); my_len = ft_printf("[MINE] : Char: %c\n", 'A');
    printf("[RETURN] -> Real: %d | MINE: %d\n\n", sys_len, my_len - 9);

    // 2. Test %s
    printf("[REAL] : "); sys_len = printf("String: %s\n", "Hello 42");
    printf(""); my_len = ft_printf("[MINE] : String: %s\n", "Hello 42");
    printf("[RETURN] -> Real: %d | MINE: %d\n\n", sys_len, my_len - 9);

    // 3. Test %p
    printf("[REAL] : "); sys_len = printf("Ptr: %p %p\n", &n, NULL);
    printf(""); my_len = ft_printf("[MINE] : Ptr: %p %p\n", &n, NULL);
    printf("[RETURN] -> Real: %d | MINE: %d\n\n", sys_len, my_len - 9);

    // 4. Test %d et %i
    printf("[REAL] : "); sys_len = printf("Int: %d | %i\n", -2147483648, 
	2147483647);
    printf(""); my_len = ft_printf("[MINE] : Int: %d | %i\n", -2147483648, 
	2147483647);
    printf("[RETURN] -> Real: %d | MINE: %d\n\n", sys_len, my_len - 9);

    // 5. Test %u
    printf("[REAL] : "); sys_len = printf("Unsigned: %u\n", 4294967295);
    printf(""); my_len = ft_printf("[MINE] : Unsigned: %u\n", 4294967295);
    printf("[RETURN] -> Real: %d | MINE: %d\n\n", sys_len, my_len - 9);

    // 6. Test %x et %X
    printf("[REAL] : "); sys_len = printf("Hex: %x et %X\n", 
	255, 3735928559U);
    printf(""); my_len = ft_printf("[MINE] : Hex: %x et %X\n", 255, 
	3735928559U);
    printf("[RETURN] -> Real: %d | MINE: %d\n\n", sys_len, my_len - 9);

    // 7. Test %%
    printf("[REAL] : "); sys_len = printf("Pct: %%\n");
    printf(""); my_len = ft_printf("[MINE] : Pct: %%\n");
    printf("[RETURN] -> Real: %d | MINE: %d\n\n", sys_len, my_len - 9);

    return (0);
}*/