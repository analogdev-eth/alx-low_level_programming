#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Description: prints all letters of the alphabet in lowercase
 *
 * Return: zero (0) if run successfully
 */
int main(void)
{
	char alphabets[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
	'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
	'y', 'z'};
	int length = sizeof(alphabets) / sizeof(alphabets[0]);
	int i;

	for (i = 0; i < length; i++)
	{
		putchar(alphabets[i]);
	}
	putchar('\n');

	return (0);
}
