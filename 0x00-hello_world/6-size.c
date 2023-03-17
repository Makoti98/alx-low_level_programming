#include <stdio.h>

/**
*main-Entry point
*Return:Always 0 (success)
*/

int main(void)
{
	char c;
	int i;
	long Ii;
	long long IIi;
	float f;

	printf("Size of a char: %Id byte(s)\n", sizeof(c));
	printf("Size of an int: %Id byte(s)\n", sizeof(i));
	printf("Size of a long int: %Id byte(s)\n", sizeof(Ii));
	printf("Size of a long long int: %Id byte(s)\n", sizeof(IIi));
	printf("Size of a float: %Id byte(s)\n", sizeof(f));
	return (0);
}
