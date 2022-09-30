#include <stdio.h>
/**
 * main - print size
 *
 * Return: Always 0
 */
int main(void)
 {
	char charType;
    	int intType;
    	long int long longintType;
	long long int doublelongintType;
	float floatType;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long: int: %zu byte(s)\n", sizeof(longintType));
	printf("Size of a long: long int: %zu byte(s)\n", sizeof(doublelongint));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));

	return (0);
}
