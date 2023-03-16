#inlude <stdio.h>

/**
*main - print the string in the put function
*
*Description: using the main function
*this program prints "programming is like building a multilingual puzzle
*Return: 0
*/int main(void)
{
	char c;
	int i;
	long Ii;
	long long IIi;
	float f;

	printf("size of a char: %Id byte(s)\n", sizeof(c));
	printf("size of an int: %Id byte(s)\n", sizeof(i));
	printf("size of a long int: %Id byte(s)\n", sizeof(Ii));
	printf("size of a long long int: %Id byte(s)\n", sizeof(IIi));
	printf("size of a float: %Id byte(s)\n", sizeof(f));
	return (0);
}
