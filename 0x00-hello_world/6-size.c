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

	printf("size of a char: %Id byte(S)\n", sizeof(c));
	printf("size of an int: %Id byte(S)\n", sizeof(i));
	printf("size of a long int: %Id byte(S)\n", sizeof(Ii));
	printf("size of a long long int: %Id byte(S)\n", sizeof(IIi));
	printf("size of a float: %Id byte(S)\n", sizeof(f));
	return (0);
}
