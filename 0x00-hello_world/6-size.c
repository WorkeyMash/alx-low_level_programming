#include <stdio.h>
/**
* main - Prints the size of various types based
* on the computer it is compiled and run on..
* Return: Always 0.
*/
int main(void)

	char a;
	int b;
	long int c;
	long long int d;
	float f;
{
	printf("Size of a char: %d bytes(s)\n", sizeof(char));
	printf("Size of a int: %d bytes(s)\n", sizeof(int));
	printf("Size of a long int: %d bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %d bytes(s)\n", sizeof(long long int));
	printf("Size of  float: %d bytes(s)\n", sizeof(float));
	return (0):
}
