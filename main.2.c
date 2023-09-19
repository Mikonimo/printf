#include <limits.h>
#include <stdio.h>
#include "main.h"
#define ZERO 0

int  main(void)
{
	int len = 0;
	int len2 = 0;
	
	len = printf("String:[%s%s]\n", " I am a string !", "second string !");
	len2 = _printf("String:[%s%s]\n", "I am a string !", "second string !");
	printf("Length:[%d, %i]\n", len, len2);
	len = _printf("Number: %d, %i\n", 4034, 4034);
	len2 = printf("Number: %d, %i\n", 4034, 4034);
	printf("Len:[%d]\n", len);
	printf("Lelen:[%d]\n\n", len2);
	len = _printf("Negative: %i, %d\n", -4034, -4034);
	len2 = printf("Negative: %i, %d\n", -4034, -4034);
	printf("Len:[%d]\n", len);
	printf("Lelen:[%d]\n\n", len2);
	len = _printf("NULL: %i\n", NULL);
	len2 = printf("NULL: %i\n", NULL);
	printf("Len:[%d]\n", len);
	printf("Lelen:[%d]\n\n", len2);
	len = _printf("%d\n", INT_MAX);
	len2 = printf("%d\n", INT_MAX);
	printf("Len:[%d]\n", len);
	printf("Lelen:[%d]\n\n", len2);
	len = _printf("%d\n", INT_MIN);
	len2 = printf("%d\n", INT_MIN);
	printf("Len:[%d]\n", len);
	printf("Lelen:[%d]\n\n", len2);
	len = _printf("long: [%i], [%d]\n", 454539394949, 4545393949495959);
	len2 = printf("long: [%i], [%d]\n", 454539394949, 4545393949495959);
	printf("Len:[%d]\n", len);
	printf("Lelen:[%d]\n\n", len2);
	len = _printf("Zero: [%i]\n", ZERO);
	len2 = printf("Zero: [%i]\n", ZERO);
	printf("Len:[%d]\n", len);
	printf("Lelen:[%d]\n\n", len2);
	len = _printf("long_negative: [%i], [%d]\n", -4545393949495959, -4545393949495959);
        len2 = printf("long_negative: [%i], [%d]\n", -4545393949495959, -4545393949495959);
        printf("Len:[%d]\n", len);
        printf("Lelen:[%d]\n\n", len2);
	return (0);
}


