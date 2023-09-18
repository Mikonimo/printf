#include <limits.h>
#include <stdio.h>
#include "main.h"
#define ZERO 0
/**
 * main -Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int len;
	int len2;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("emmpty Character:[%c]\n", ' ');
	printf("empty Character:[%c]\n", ' ');
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("Character:[%c%c]\n", 'H', 'I');
	printf("Character:[%c%c]\n", 'H', 'I');
	_printf("Character:[%c%c%c]\n", 'H', 'I', '!');
	printf("Character:[%c%c%c]\n", 'H', 'I', '!');
	_printf("Character[%c %C %c]\n", 'H', 'I', '!');
	printf("Character[%c %c %c]\n",'H', 'I', '!');
	_printf("Two c with Space:[%c %c]\n", 'H', 'I');
	printf("Two c with Space:[%c %c]\n", 'H', 'I');
	_printf("empty String:[%s]\n", "");
	printf("empty String:[%s]\n", "");
	_printf("Space String[%s]\n", " ");
	printf("Space String[%s]\n", " ");
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("String:[%s%s]\n", " I am a string !", "second string !");
	printf("String:[%s%s]\n", "I am a string !", "second string !");
	_printf("String:[%s %s]\n", "I am a string !", "second string !");
	printf("String:[%s %s]\n", "I am a string !", "seconc string !");
	_printf("Number:[%d, %i]\n", len, len);
	printf("Number:[%d, %i]\n", len2, len2);
	return (0);
}



