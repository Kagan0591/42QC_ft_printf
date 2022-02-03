#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	char	*addtest;
	long	count;
//--TEST char "%s"

	ft_printf("Print a string: %s\n", "Test d'une chaine");
	printf("Print a string from original printf: %s\n\n", "Test d'une chaine");

//--TEST char "%c"
	ft_putstr("TEST %c\n");
	ft_putstr("Print a single charactere 't' %c: ");
	count = ft_printf("%c", 't');
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;
	ft_putstr("Print a single charactere 't' from original printf %c: ");
	count = printf("%c", 't');
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;

	ft_putstr("TEST %c\n");
	ft_putstr("Print a single charactere 't' multiple time %c: ");
	count = ft_printf("%c%c%c", 't', 't', 't');
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;
	ft_putstr("Print a single charactere 't' multiple time from original printf %c: ");
	count = printf("%c", 't');
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;
//--TEST unsigned int "%u"
	ft_putstr("TEST %u\n");
	ft_putstr("Print a negative number with an unsigned int %u: ");
	count = ft_printf("%u", -42);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;
	ft_putstr("Print a negative number with an unsigned int from original printf %u: ");
	count = printf("%u", -42);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;

	ft_putstr("Print the MAX_VALUE of an unsigned int %u: ");
	count = ft_printf("%u", UINT_MAX);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;
	ft_putstr("Print the MAX_VALUE of an unsigned int from original printf %u: ");
	count = printf("%u", UINT_MAX);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;

	ft_putstr("Print a zero with an unsigned int %u: ");
	count =ft_printf("%u", 0);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;
	ft_putstr("Print a zero with an unsigned int from original printf %u: ");
	count = printf("%u", 0);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;

	ft_putstr("Print the INT_MIN_VALUE with an unsigned int %u: ");
	count =ft_printf("%u", INT_MIN);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;
	ft_putstr("Print the INT_MIN_VALUE with an unsigned int from original printf %u: ");
	count = printf("%u", INT_MIN);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;

	ft_putstr("Print the INT_MAX_VALUE with an unsigned int %u: ");
	count =ft_printf("%u", INT_MAX);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;
	ft_putstr("Print the INT_MAX_VALUE with an unsigned int from original printf %u: ");
	count = printf("%u", INT_MAX);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;

	ft_putstr("Print the LONG_MIN_VALUE with an unsigned int %u: ");
	count =ft_printf("%u", LONG_MIN);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;

	ft_putstr("Print the LONG_MAX_VALUE with an unsigned int %u: ");
	count =ft_printf("%u", LONG_MAX);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;

	ft_putstr("Print the ULONG_MAX_VALUE with an unsigned int %u: ");
	count =ft_printf("%u", ULONG_MAX);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;

//--TEST multiple variables unsigned int "%u"
	ft_putstr("Print multiple %u");
	count = ft_printf("%u %u %u %u %u %u %u %u", UINT_MAX, 0, INT_MIN, INT_MAX, LONG_MAX, LONG_MIN, ULONG_MAX, -42);
	ft_putstr("\nTested: UINT_MAX, 0, INT_MIN, INT_MAX, LONG_MAX, LONG_MIN, ULONG_MAX, -42)");
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;

//--TEST int "%d et %i"
	ft_putstr("TEST %d\n");
	ft_putstr("Print a negative number with int %d: ");
	count = ft_printf("%d", -1);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;
	ft_putstr("Print a negative number with int %d from original printf: ");
	count = printf("%d", -1);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;

	ft_putstr("Print the MAX_VALUE of an int %d: ");
	count = ft_printf("%d", UINT_MAX);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;
	ft_putstr("Print the MAX_VALUE of an int %d from original printf: ");
	count = printf("%d", UINT_MAX);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;

	ft_putstr("Print the MIN_VALUE of an int %d: ");
	count = ft_printf("%d", INT_MIN);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;
	ft_putstr("Print the MIN_VALUE of an int %d from original printf: ");
	count = printf("%d", INT_MIN);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;

	ft_putstr("Print a 0 with an int %d: ");
	count = ft_printf("%d", 0);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;
	ft_putstr("Print a 0 with an int %d from original printf: ");
	count = printf("%d", 0);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;

	ft_putstr("Print the LONG_MAX_VALUE of an int %d: ");
	count = ft_printf("%d", LONG_MAX);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;


	ft_putstr("Print the LONG_MIN_VALUE of an int %d: ");
	count = ft_printf("%d", LONG_MIN);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;

	ft_putstr("Print the ULONG_MAX_VALUE of an int %d: ");
	count = ft_printf("%d", ULONG_MAX);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;

//--TEST multiple variables int "%d"
	ft_putstr("Print multiple %d");
	count = ft_printf("%d %d %d %d %d %d %d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	ft_putstr("Tested: INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42)");
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;

//--TEST hexa %x
	ft_putstr("TEST %x\n");
	ft_putstr("Print the number 42 with int in hexa %x: ");
	count = ft_printf("%x", 42);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;
	ft_putstr("Print the number 42 with int in hexa %x from original printf: ");
	count = printf("%x", 42);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;

	ft_putstr("Print the number 16 with int in hexa %x: ");
	count = ft_printf("%x", 16);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;
	ft_putstr("Print the number 16 with int in hexa %x from original printf: ");
	count = printf("%x", 16);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;

	ft_putstr("Print a negative number with int in hexa %x: ");
	count = ft_printf("%x", -1);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;
	ft_putstr("Print a negative number with int in hexa %x from original printf: ");
	count = printf("%x", -1);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;

	ft_putstr("Print the MIN_VALUE of an int in hexa %x: ");
	count = ft_printf("%x", INT_MIN);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;
	ft_putstr("Print the MIN_VALUE of an int in hexa %x from original printf: ");
	count = printf("%x", INT_MIN);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;

	ft_putstr("Print the MAX_VALUE of an int in hexa %x: ");
	count = ft_printf("%x", INT_MAX);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;
	ft_putstr("Print the MAX_VALUE of an int in hexa %x from original printf: ");
	count = printf("%x", INT_MAX);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;

	ft_putstr("Print the MAX_VALUE of an unsigned int in hexa %x: ");
	count = ft_printf("%x", UINT_MAX);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;
	ft_putstr("Print the MAX_VALUE of an int in hexa %x from original printf: ");
	count = printf("%x", UINT_MAX);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;

	ft_putstr("Print a 0 with an int in hexa %x: ");
	count = ft_printf("%x", 0);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;
	ft_putstr("Print a 0 with an int in hexa %x from original printf: ");
	count = printf("%x", 0);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;

	ft_putstr("Print the LONG_MAX_VALUE of an int in hexa %x: ");
	count = ft_printf("%x", LONG_MAX);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;

	ft_putstr("Print the LONG_MIN_VALUE of an int in hexa %x: ");
	count = ft_printf("%x", LONG_MIN);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;

	ft_putstr("Print the ULONG_MAX_VALUE of an int in hexa %x: ");
	count = ft_printf("%x", ULONG_MAX);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;

	ft_putstr("Print the aphanumeric number 9223372036854775807LL with an int in hexa %x: ");
	count = ft_printf("%x", 9223372036854775807LL);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;

//--TEST HEXA %X
	ft_putstr("TEST %X\n");
	ft_putstr("Print the number 42 with int in hexa %X: ");
	count = ft_printf("%X", 42);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;
	ft_putstr("Print the number 42 with int in hexa %X from original printf: ");
	count = printf("%X", 42);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;

	ft_putstr("Print the number 16 with int in hexa %X: ");
	count = ft_printf("%X", 16);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;
	ft_putstr("Print the number 16 with int in hexa %X from original printf: ");
	count = printf("%X", 16);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;

	ft_putstr("Print a negative number with int in hexa %X: ");
	count = ft_printf("%X", -1);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;
	ft_putstr("Print a negative number with int in hexa %X from original printf: ");
	count = printf("%X", -1);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;

	ft_putstr("Print the MIN_VALUE of an int in hexa %X: ");
	count = ft_printf("%X", INT_MIN);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;
	ft_putstr("Print the MIN_VALUE of an int in hexa %X from original printf: ");
	count = printf("%X", INT_MIN);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;

	ft_putstr("Print the MAX_VALUE of an int in hexa %X: ");
	count = ft_printf("%X", INT_MAX);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;
	ft_putstr("Print the MAX_VALUE of an int in hexa %X from original printf: ");
	count = printf("%X", INT_MAX);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;

	ft_putstr("Print the MAX_VALUE of an unsigned int in hexa %X: ");
	count = ft_printf("%X", UINT_MAX);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;
	ft_putstr("Print the MAX_VALUE of an int in hexa %X from original printf: ");
	count = printf("%X", UINT_MAX);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;

	ft_putstr("Print a 0 with an int in hexa %X: ");
	count = ft_printf("%X", 0);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;
	ft_putstr("Print a 0 with an int in hexa %X from original printf: ");
	count = printf("%X", 0);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;

	ft_putstr("Print the LONG_MAX_VALUE of an int in hexa %X: ");
	count = ft_printf("%X", LONG_MAX);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;

	ft_putstr("Print the LONG_MIN_VALUE of an int in hexa %X: ");
	count = ft_printf("%X", LONG_MIN);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;

	ft_putstr("Print the ULONG_MAX_VALUE of an int in hexa %X: ");
	count = ft_printf("%X", ULONG_MAX);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;

	ft_putstr("Print the aphanumeric number 9223372036854775807LL with an int in hexa %X: ");
	count = ft_printf("%X", 9223372036854775807LL);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;

//--TEST addresse memoire %p
	addtest = "Bonjour";

	ft_putstr("TEST %p\n");
	ft_putstr("Print the pointeur address: %p: ");
	count = ft_printf("%p", addtest);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;
	ft_putstr("Print the pointeur address from original printf: %p: ");
	count = printf("%p", addtest);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;

	ft_putstr("Print the address from a LONG_MIN_VALUE %p: ");
	count = ft_printf("%p", LONG_MIN);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;

	ft_putstr("Print the address from a INT_MIN_VALUE %p: ");
	count = ft_printf("%p", INT_MIN);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;

	ft_putstr("Print the address from a ULONG_MIN_VALUE %p: ");
	count = ft_printf("%p", -ULONG_MAX);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");

	ft_putstr("Print the address from a LONG_MIN_VALUE and a LONG_MAX_VALUE: %p: ");
	count = ft_printf("%p %p", LONG_MIN, LONG_MAX);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;

	ft_putstr("Print the address from a INT_MIN_VALUE and a INT_MAX_VALUE: %p: ");
	count = ft_printf("%p %p", INT_MIN, INT_MAX);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;

	ft_putstr("Print the address from a ULONG_MIN_VALUE and a ULONG_MAX_VALUE: %p: ");
	count = ft_printf("%p %p", -ULONG_MAX, ULONG_MAX);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;

	ft_putstr("Print the address from a 0 and a 0: %p: ");
	count = ft_printf("%p %p", 0, 0);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;

	ft_putstr("Print the address from a 1 and a 1 %p: ");
	count = ft_printf("%p %p", 1, 1);
	ft_putstr("\ncharactere count = ");
	ft_putnbr(count);
	ft_putstr("\n\n");
	count = 0;
}