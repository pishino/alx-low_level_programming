#include <stdio.h>

/**
 * main - Prints char in lowercase
 * always return 0
 */
int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}
	putchar('\n');
	return (0);
}
