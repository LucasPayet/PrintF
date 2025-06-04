#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>

// cc -Wall -Wextra -Werror printftest.c -L. -lftprintf -g

int main()
{
	printf("FIRST PRINTF \nBELOW FT_PRINTF\n\n");
	
	printf("Double %% test\n");
	ft_printf("Double %% test\n");
	printf("Aussi %%d\n");
	ft_printf("Aussi %%d\n");

	printf("\nPrintf(0)\n");
//	printf("%d\n", printf(0));
//	printf("%d\n", ft_printf(0));


	printf("\n- Testing %%d -\n");
	
	printf("les %d chats\n", 10);
	ft_printf("les %d chats\n", 10);
	printf("%d\n", INT_MIN);
	ft_printf("%d\n", INT_MIN);
	printf("les %i chats\n", INT_MAX);
	ft_printf("les %i chats\n", INT_MAX);
	printf("- %d -\n", 0);
	ft_printf("- %d -\n", 0);
	printf("les %i chats\n", -142);
	ft_printf("les %i chats\n", -142);
	printf("- %d -\n", 10);
	ft_printf("- %d -\n", 10);
/*	int i = NULL;
	printf("%d", i);
	ft_printf("%d", i);
*/
	printf("\n- Testing %%u -\n");

	printf("- %u -\n", 0);
	ft_printf("- %u -\n", 0);
	printf("- %u -\n", UINT_MAX);
	ft_printf("- %u -\n", UINT_MAX);
/*	printf("special\n");
	printf("%u\n", 4294967296);
	ft_printf("%u\n", 4294967296);
*/
	printf("\n- Testing %%X/x -\n");

	printf("- %x -\n", 66);
	ft_printf("- %x -\n", 66);
	printf("- %X -\n", -66);
	ft_printf("- %X -\n", -66);
	printf("- %x -\n", UINT_MAX);
	ft_printf("- %x -\n", UINT_MAX);
	printf("- %X -\n", 0);
	ft_printf("- %X -\n", 0);
	printf("- %x -\n", 0x123abc);
	ft_printf("- %x -\n", 0x123abc);

	printf("\n- Testing %%c -\n");

	printf("les %c chats\n", 'n');
	ft_printf("les %c chats\n", 'n');
	printf("- %c - %c - %c\n",'a','%','+');
	ft_printf("- %c - %c - %c\n",'a','%','+');

	printf(("\n- Testing %%s -\n"));

	printf("les %s chats\n", "sept");
	ft_printf("les %s chats\n", "sept");
	char *str = "";
	char *str2 = NULL;
	printf("- %s -\n", str);
	ft_printf("- %s -\n", str);
	printf("- %s -\n", str2);
	ft_printf("- %s -\n", str2);

	printf("\n- Testing %%p -\n");

	int ptr = 42;
	char c = 'x';
	void	*vide = NULL;
	printf("- %p -\n", &ptr);
	ft_printf("- %p -\n", &ptr);
	printf("- %p -\n", &c);
	ft_printf("- %p -\n", &c);
	printf("- %p -\n", vide);
	ft_printf("- %p -\n", vide);

	printf("\n- Testing return sizes -\n");

	if (printf("%d et %u avec %c et %s\n", -1000, UINT_MAX, 'x', "les chats") == ft_printf("%d et %u avec %c et %s\n", -1000, UINT_MAX, 'x', "les chats"))
		printf("Size OK GG\n");
	else 
		printf("Size KO TOOBAD\n");
}
