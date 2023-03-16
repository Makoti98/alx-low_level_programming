#iclude <stdio.h>

/**
 * You should produce the exact same output as in the example
 * Warnings are allowed
 *
 * return: 0
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("size of chat: %id byte(s)\n", sizeof(c));
	printf("size of int: %id byte(s)\n", sizeof(i));
	printf("size of long long: %id byte(s)\n", sizeof(lli));
	printf("size of float: %id byte(s)\n", sizeof(f));
	return (0);
}
