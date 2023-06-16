#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	char b;
	long int c;
	long long d;
	float e;

	printf("Size of a char: %ln\n", (unsigned long)sizeof(b));
	printf("Size of an int: %ln\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %ln\n", (unsigned long)sizeof(c));
	printf("size of a long long int: %ln\n", (unsigned long)sizeof(d));
	printf("Size of a float: %ln\n", (unsigned long)sizeof(e));

	return (0);
}
