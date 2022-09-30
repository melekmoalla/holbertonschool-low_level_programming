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
	long long int longlongintType;
	float floatType;

	printf("Size of a char:,%zu byte(s)\n", sizeof(Size of a char));
	printf("Size of an int: %zu byte(s)\n", sizeof(Size of an int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(Size of a long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(Size of a long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(Size of a float));

	return (0);
}
