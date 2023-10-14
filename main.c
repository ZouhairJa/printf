#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int count;

	int count2;
	
	count = _printf("%s\n", "hi");
	printf("hi = %d\n", count);
	count2 = _printf("%c\n", 'b');
	printf("b = %d", count2);
	/**_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Percent:[%%]\n");
	printf("Percent:[%%]\n");*/
	return (0);
}
