#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: always 0
 */
int main(void)
{
	char i;
	for (i = 'a'&& 'A' ; i <= 'z' && 'Z'; i++)
	putchar(i);
	putchar('\n');
	return (0);
}
